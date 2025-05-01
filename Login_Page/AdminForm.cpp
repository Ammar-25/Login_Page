#include "AdminForm.h"
#include "FileHandler.h"
System::Void LoginPage::AdminForm::AdminForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    this->parent->Close();
}
