#pragma once
#include <iostream>
#include <string>
#include "Authentication.h"
#include <msclr/marshal_cppstd.h>
#include "WelcomeForm.h"

namespace LoginPage {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;
            this->ControlBox = true;
            this->MinimizeBox = true;
            this->MaximizeBox = true;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Loginbtn;
	protected:

	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPass;

	protected:


	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ showPass;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Loginbtn = (gcnew System::Windows::Forms::Button());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->showPass = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->showPass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// Loginbtn
			// 
			this->Loginbtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Loginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Loginbtn->Location = System::Drawing::Point(639, 342);
			this->Loginbtn->Name = L"Loginbtn";
			this->Loginbtn->Size = System::Drawing::Size(109, 53);
			this->Loginbtn->TabIndex = 0;
			this->Loginbtn->Text = L"Login";
			this->Loginbtn->UseVisualStyleBackColor = true;
			this->Loginbtn->Click += gcnew System::EventHandler(this, &MyForm::Loginbtn_Click);
			// 
			// txtEmail
			// 
			this->txtEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->txtEmail->Location = System::Drawing::Point(578, 171);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(230, 28);
			this->txtEmail->TabIndex = 1;
			this->txtEmail->TextChanged += gcnew System::EventHandler(this, &MyForm::txtEmail_TextChanged);
			// 
			// txtPass
			// 
			this->txtPass->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->txtPass->Location = System::Drawing::Point(578, 251);
			this->txtPass->Name = L"txtPass";
			this->txtPass->Size = System::Drawing::Size(230, 28);
			this->txtPass->TabIndex = 2;
			this->txtPass->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(491, 169);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Email :";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(60, 79);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(372, 354);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(454, 249);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Password:";
			// 
			// linkLabel1
			// 
			this->linkLabel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(750, 302);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(65, 20);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Sign up";
			// 
			// showPass
			// 
			this->showPass->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->showPass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showPass.Image")));
			this->showPass->Location = System::Drawing::Point(814, 249);
			this->showPass->Name = L"showPass";
			this->showPass->Size = System::Drawing::Size(35, 33);
			this->showPass->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->showPass->TabIndex = 8;
			this->showPass->TabStop = false;
			this->showPass->Click += gcnew System::EventHandler(this, &MyForm::showPass_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(41, 79);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(391, 354);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(947, 593);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->showPass);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->Loginbtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"Real Stete";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->showPass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Loginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Email = txtEmail->Text;
		String^ PassWord = txtPass->Text;
		std::string stdEmail = msclr::interop::marshal_as<std::string>(Email);
		std::string stdPass = msclr::interop::marshal_as<std::string>(PassWord);


		int res = Authentication::SignIn(stdEmail, stdPass);
		if (res == 0) {
			this->Hide(); // Hide the login form

			WelcomeForm^ welcome = gcnew WelcomeForm(); // Create an instance of the welcome form
			welcome->ShowDialog(); // Show it modally
		}
		else if (res == 1) {
			MessageBox::Show("Wrong Pass", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else{
			MessageBox::Show("Email not found", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void showPass_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtPass->UseSystemPasswordChar) {
			txtPass->UseSystemPasswordChar = false;
		}
		else {
			txtPass->UseSystemPasswordChar = true;
		}
	}
	private: System::Void txtEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
