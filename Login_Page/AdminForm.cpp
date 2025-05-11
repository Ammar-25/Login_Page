#include "AdminForm.h"
#include "FileHandler.h"
#include "Global.h"
#include "Property.h"
#include "user.h"
System::Void LoginPage::AdminForm::AdminForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    this->parent->Close();
}

System::Void LoginPage::AdminForm::Form1_Load(System::Object^ sender, System::EventArgs^ e)  
{  
    flowLayoutPanel1->Controls->Clear();
   for (auto& p : Global::properties) {  
       int id = p.getId();  
       System::String^ type = gcnew System::String(p.getType().c_str());
       System::String^ ownerName = gcnew System::String(Global::users[p.getOwnerId()].getName().c_str());
       int price = p.getPrice();
       System::String^ status;
       switch (p.getAvailability()) {
       case 0: status = "Pending"; break;
       case 1: status = "Available"; break;
       case 2: status = "Bought"; break;
       case 3: status = "Declined"; break;
       }
       Panel^ panel = this->CreatePropertyBrowsePanel(id.ToString(), type, ownerName, price, p.getHighlight());
       this->flowLayoutPanel1->Controls->Add(panel);
   }  
}

System::Void LoginPage::AdminForm::DetailsButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    

    Button^ button = dynamic_cast<Button^>(sender);
    String^ propertyId = dynamic_cast<String^>(button->Tag);
    int id = Convert::ToInt32(propertyId);



    for (auto p : Global::properties) {
        if (p.getId() == id) {

            System::String^ status;
            switch (p.getAvailability()) {
            case 0: status = "Pending"; break;
            case 1: status = "Available"; break;
            case 2: status = "Bought"; break;
            case 3: status = "Declined"; break;
            }
            std::string name = Global::users[p.getOwnerId()].getName();
            this->label24->Text = status;
            this->label79->Text = gcnew System::String(name.c_str());
            this->label27->Text = id.ToString();
            this->textBox1->Text = p.getArea().ToString();
            this->textBox2->Text = gcnew System::String(p.getLocation().c_str());
            this->comboBox1->Text = gcnew System::String(p.getType().c_str());
            this->numericUpDown1->Value = p.getNumBedrooms();
            this->textBox4->Text = p.getPrice().ToString();
            this->textBox12->Text = gcnew System::String(p.getDescription().c_str());
            break;
        }
    }
    this->Details_Panel->Visible = 1;

}

System::Void LoginPage::AdminForm::delete_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    Button^ button = dynamic_cast<Button^>(sender);
    String^ propertyId = dynamic_cast<String^>(button->Tag);
    int id = Convert::ToInt32(propertyId);

    // Confirm deletion
    if (MessageBox::Show("Are you sure you want to delete this property?", "Confirm", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

        // Remove from Global::properties
        Global::currUser.removeProperty(id);
        Form1_Load(sender, e);
        MessageBox::Show("Property deleted.");
    }

}

System::Void LoginPage::AdminForm::HighlightProperty(System::Object^ sender, System::EventArgs^ e)
{
    PictureBox^ picture = dynamic_cast<PictureBox^>(sender);
    String^ propertyId = dynamic_cast<String^>(picture->Tag);
    int id = Convert::ToInt32(propertyId);

    for (auto& p : Global::properties) {
        if (p.getId() == id) {
            p.setHighlight(!p.getHighlight());
        }
    }
    Form1_Load(sender, e);

}
