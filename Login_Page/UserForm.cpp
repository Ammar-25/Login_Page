#include "UserForm.h"
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

System::Void LoginPage::UserForm::UserForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    //FileHandler::Save();
    this->parent->Close();
}
