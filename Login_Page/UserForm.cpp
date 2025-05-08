#include "UserForm.h"
#include "Global.h"
#include "FileHandler.h"
//using namespace System;
//using namespace System::Windows::Forms;
//[STAThreadAttribute]
//int main(array<String^>^ args) {
//    Application::EnableVisualStyles();
//    Application::SetCompatibleTextRenderingDefault(false);
//    Login_Page::UserForm form;
//    Application::Run(% form);
//}


System::Void LoginPage::UserForm::DeleteProperty_Click(System::Object^ sender, System::EventArgs^ e)
{
    Button^ deleteBtn = dynamic_cast<Button^>(sender);
    if (deleteBtn != nullptr) {
        System::String^ idStr = dynamic_cast<System::String^>(deleteBtn->Tag);
        int id = Convert::ToInt32(idStr);

        // Confirm deletion
        if (MessageBox::Show("Are you sure you want to delete this property?", "Confirm", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

            // Remove from Global::properties
            Global::currUser.removeProperty(id);
            // Remove from UI
            Control^ panel = deleteBtn->Parent;
            flowLayoutPanel1->Controls->Remove(panel);

            MessageBox::Show("Property deleted.");
        }
    }
}
System::Void LoginPage::UserForm::MoreDetails_Click(System::Object^ sender, System::EventArgs^ e)
{
    Button^ button = dynamic_cast<Button^>(sender);
    if (button != nullptr)
    {
        String^ propertyId = dynamic_cast<String^>(button->Tag);
        int id = Convert::ToInt32(propertyId);
        Property p;
        for (auto& x : Global::properties) {
            if (x.getId() == id) {
                p = x;
                break;
            }
        }
        std::string statusStr;
        switch (p.getAvailability()) {
        case 0: statusStr = "Pending"; break;
        case 1: statusStr = "Available"; break;
        case 2: statusStr = "Sold"; break;
        case 3: statusStr = "Declined"; break;
        }
        this->textBox6->Text = gcnew String(p.getDescription().c_str());
        this->numericUpDown2->Value = p.getNumBedrooms();
        this->label24->Text = gcnew String(statusStr.c_str());
        this->textBox13->Text = p.getArea().ToString();
        this->textBox12->Text = p.getPrice().ToString();
        this->textBox14->Text = gcnew String(p.getLocation().c_str());
        this->label27->Text = id.ToString();
        this->comboBox2->Text = gcnew String(p.getType().c_str());
        this->Details_Panel->Show();

    }
}



System::Void LoginPage::UserForm::Form1_Load(System::Object^ sender, System::EventArgs^ e)
{
    for (auto p : Global::properties) {
        if (p.getOwnerId() == Global::currId) {
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

            // Create and add panel to flow layout
            Panel^ panel = CreatePropertyPanel(idStr, type, priceStr, status);
            this->flowLayoutPanel1->Controls->Add(panel);
        }
    }
}


System::Void LoginPage::UserForm::UserForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    this->parent->Close();
}
