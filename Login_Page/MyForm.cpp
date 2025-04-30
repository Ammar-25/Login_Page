#include "MyForm.h"
#include "Global.h"
#include"UserForm.h"
#include"AdminForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main() {
    //**********run Login Form directly *************

	/*Global::users.push_back(user(1, 0, 3000, "Ammar", "ammar@gmail.com", "123456", "01110", 0));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginPage::MyForm form;
	Application::Run(% form);*/

   //**********run user form directly *************
   
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew LoginPage::UserForm());
    
    ////**********run Admin form directly *************

    //Application::EnableVisualStyles();
    //Application::SetCompatibleTextRenderingDefault(false);
    //Application::Run(gcnew LoginPage::AdminForm());



  
}   