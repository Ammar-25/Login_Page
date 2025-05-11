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
       Panel^ panel = this->CreatePropertyBrowsePanel(id, type , ownerName , price, p.getHighlight());  
       this->flowLayoutPanel1->Controls->Add(panel);
   }  
}

System::Void LoginPage::AdminForm::DetailsButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Details_Panel->Visible = 1;
}

System::Void LoginPage::AdminForm::EditsButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Edit_property->Visible = 1;

}
