#include <iostream>
#include "Authentication.h"
#include "MyForm.h"
#include "Global.h"
#include "UserForm.h"
#include "AdminForm.h"
#include "FileHandler.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main() {
    FileHandler::Load();

    //**********run Login Form directly *************
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginPage::MyForm form;
	Application::Run(% form);

    
    FileHandler::Save();
   //**********run user form directly *************
   
    /*Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew LoginPage::UserForm());*/
    
    ////**********run Admin form directly *************

    //Application::EnableVisualStyles();
    //Application::SetCompatibleTextRenderingDefault(false);
    //Application::Run(gcnew LoginPage::AdminForm());
}   