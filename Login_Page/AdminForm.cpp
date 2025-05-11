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
// search
System::Void LoginPage::AdminForm::pictureBox10_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->flowLayoutPanel1->Controls->Clear();
    int nmofBedrooms = System::Convert::ToInt32(this->numBedrooms->Value);
    std::string name = msclr::interop::marshal_as<std::string>(this->textBox9->Text);
    bool isMnValid = 1, isMxValid = 1, isAreaValid = 1;
    int mnPrice, mxPrice, area;


    std::string location, type;


    if (String::IsNullOrWhiteSpace(textBox5->Text)) {
        location = "";
    }
    else location = msclr::interop::marshal_as<std::string>(this->textBox5->Text);

    if (String::IsNullOrWhiteSpace(comboBox1->Text)) {
        type = "";
    }
    else type = msclr::interop::marshal_as<std::string>(this->TypeCompo->Text);

    if (String::IsNullOrWhiteSpace(textBox6->Text)) {
        mnPrice = -1;
    }
    else isMnValid = Int32::TryParse(this->textBox6->Text, mnPrice);

    if (String::IsNullOrWhiteSpace(textBox7->Text)) {
        mxPrice = -1;
    }
    else isMxValid = Int32::TryParse(this->textBox7->Text, mxPrice);


    if (String::IsNullOrWhiteSpace(textBox8->Text)) {
        area = -1;
    }
    else isAreaValid = Int32::TryParse(this->textBox8->Text, area);

    if (!isMnValid || !isMxValid || !isAreaValid) {
        MessageBox::Show("Please enter valid numbers for Minimum Price, Maximum Price, and Area.");
        return;
    }

    std::vector <Property> s;
    s = Global::search(location, type, area, mnPrice, mxPrice, nmofBedrooms , name);
    std::cout << s.size() << '\n';
    for (auto& p : s) {
        std::string typeStr = p.getType();
        int id = p.getId();
        int price = p.getPrice();

        std::string statusStr;
        switch (p.getAvailability()) {
        case 0: statusStr = "Pending"; break;
        case 1: statusStr = "Available"; break;
        case 2: statusStr = "Sold"; break;
        case 3: statusStr = "Declined"; break;
        }

        // Convert std::string and int to System::String^
        System::String^ idStr = id.ToString();
        System::String^ type = gcnew System::String(typeStr.c_str());
        System::String^ priceStr = "$ " + price.ToString("N0");
        System::String^ status = gcnew System::String(statusStr.c_str());
        System::String^ ownerName = gcnew System::String(Global::users[p.getOwnerId()].getName().c_str());



        Panel^ panel = this->CreatePropertyBrowsePanel(idStr , type , ownerName , price , p.getHighlight());
        this->flowLayoutPanel1->Controls->Add(panel);
    }
}
