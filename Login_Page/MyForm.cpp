#include "MyForm.h"
#include "Global.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main() {
	Global::users.push_back(user(1, 1, 3000, "Ammar", "ammar@gmail.com", "123456", "01110", 0));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginPage::MyForm form;
	Application::Run(% form);
}