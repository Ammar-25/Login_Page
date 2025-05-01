#pragma once
#include "Global.h"
#include <msclr/marshal_cppstd.h>
#include <sstream>

namespace LoginPage {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;


    public ref class UserForm : public System::Windows::Forms::Form
    {
    public:
        UserForm(Form^ parentForm)
        {
            InitializeComponent();
            this->Load += gcnew System::EventHandler(this, &UserForm::Form1_Load);

            this->parent = parentForm;
            currentUserName = gcnew System::String(Global::currUser.getName().c_str());
            Profile->Text = currentUserName;


            int balance = Global::currUser.getBalance();
            std::stringstream ss;
            ss.imbue(std::locale("en_US.UTF-8"));
            ss << balance;

            String^ currBalance = gcnew System::String(ss.str().c_str());
            Balance->Text = currBalance + " $";
        }

    protected:
        ~UserForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: 
        /// Ammar panel
        Panel^ CreatePropertyPanel(String^ id, String^ type, String^ price, String^ status) {
            Panel^ panel = gcnew Panel();
            panel->Size = System::Drawing::Size(900, 150);
            panel->BackColor = Color::FromArgb(44, 103, 122);
            panel->BorderStyle = BorderStyle::FixedSingle;

            // 
            // label8
            // 
            Label^ label8 = gcnew Label();
            label8->AutoSize = true;
            label8->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.2F, System::Drawing::FontStyle::Bold);
            label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            label8->Location = System::Drawing::Point(332, 83);
            label8->Name = L"label8";
            label8->Size = System::Drawing::Size(75, 25);
            label8->TabIndex = 13;
            label8->Text = L"Status : " + status;

            // 
            // label7
            // 
            Label^ label7 = gcnew Label();
            label7->AutoSize = true;
            label7->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.2F, System::Drawing::FontStyle::Bold);
            label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            label7->Location = System::Drawing::Point(332, 32);
            label7->Name = L"label7";
            label7->Size = System::Drawing::Size(85, 25);
            label7->TabIndex = 13;
            label7->Text = L"Type : " + type;

            // 
            // label6
            // 
            Label^ label6 = gcnew Label();
            label6->AutoSize = true;
            label6->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.2F, System::Drawing::FontStyle::Bold);
            label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            label6->Location = System::Drawing::Point(23, 83);
            label6->Name = L"label6";
            label6->Size = System::Drawing::Size(80, 25);
            label6->TabIndex = 13;
            label6->Text = L"Price : " + price;

            // 
            // label4
            // 
            Label^ label4 = gcnew Label();
            label4->AutoSize = true;
            label4->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.2F, System::Drawing::FontStyle::Bold);
            label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            label4->Location = System::Drawing::Point(23, 32);
            label4->Name = L"label4";
            label4->Size = System::Drawing::Size(52, 25);
            label4->TabIndex = 13;
            label4->Text = L"Id : " + id;

            // 
            // button2
            // 
            Button^ button2 = gcnew Button();
            button2->BackColor = System::Drawing::Color::FromArgb(163, 201, 188);
            button2->FlatAppearance->BorderSize = 0;
            button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            button2->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            button2->ForeColor = System::Drawing::Color::WhiteSmoke;
            button2->Location = System::Drawing::Point(739, 81);
            button2->Name = L"button2";
            button2->Size = System::Drawing::Size(150, 33);
            button2->TabIndex = 12;
            button2->Text = L"Delete Property";
            button2->Tag = id; // Store the ID to use in handler
            button2->Click += gcnew EventHandler(this, &UserForm::DeleteProperty_Click);
            button2->UseVisualStyleBackColor = false;

            // 
            // button1
            // 
            Button^ button1 = gcnew Button();
            button1->BackColor = System::Drawing::Color::FromArgb(163, 201, 188);
            button1->FlatAppearance->BorderSize = 0;
            button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            button1->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold);
            button1->ForeColor = System::Drawing::Color::WhiteSmoke;
            button1->Location = System::Drawing::Point(739, 20);
            button1->Name = L"button1";
            button1->Size = System::Drawing::Size(150, 36);
            button1->TabIndex = 11;
            button1->Text = L"More Details";
            button1->UseVisualStyleBackColor = false;

            // Add controls
            panel->Controls->Add(label8);
            panel->Controls->Add(label7);
            panel->Controls->Add(label6);
            panel->Controls->Add(label4);
            panel->Controls->Add(button1);
            panel->Controls->Add(button2);

            return panel;
        }











    private: Form^ parent;
    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e);
    private: System::Void DeleteProperty_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
    private: System::String^ currentUserName;
    private: System::Void UserForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
    private: System::Windows::Forms::Button^ Home;
    protected:
    private: System::Windows::Forms::Button^ Browse;
    private: System::Windows::Forms::Button^ Comparison;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ Profile;

    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ Balance;

    private: System::Windows::Forms::TextBox^ intro_paragraph;

    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Panel^ Welcome_panel;
    private: System::Windows::Forms::Panel^ Navigationbar_panel;


    private: System::Windows::Forms::Label^ label5;







    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Panel^ New_Property;

    private: System::Windows::Forms::Label^ label_New_Property;


    private: System::Windows::Forms::Button^ button4;

    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::TextBox^ txtPrice;
    private: System::Windows::Forms::TextBox^ txtLocation;


    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::TextBox^ txtDescription;

    private: System::Windows::Forms::ComboBox^ TypeCompo;
    private: System::Windows::Forms::NumericUpDown^ numBedrooms;


    private: System::Windows::Forms::TextBox^ txtArea;

    private: System::Windows::Forms::Panel^ Details_Panel;



    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Panel^ Home_panel;


    private: System::Windows::Forms::Panel^ Profile_panel;
    private: System::Windows::Forms::Panel^ Browse_panel;
    private: System::Windows::Forms::Panel^ Comparison_panel;
    private: System::Windows::Forms::Label^ label1;


    protected:

    private:
        System::ComponentModel::Container^ components;

        // Declare controls


#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserForm::typeid));
            this->Home = (gcnew System::Windows::Forms::Button());
            this->Browse = (gcnew System::Windows::Forms::Button());
            this->Comparison = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->Profile = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->Balance = (gcnew System::Windows::Forms::Label());
            this->intro_paragraph = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->Welcome_panel = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->Profile_panel = (gcnew System::Windows::Forms::Panel());
            this->Navigationbar_panel = (gcnew System::Windows::Forms::Panel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->New_Property = (gcnew System::Windows::Forms::Panel());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->numBedrooms = (gcnew System::Windows::Forms::NumericUpDown());
            this->TypeCompo = (gcnew System::Windows::Forms::ComboBox());
            this->txtDescription = (gcnew System::Windows::Forms::TextBox());
            this->txtArea = (gcnew System::Windows::Forms::TextBox());
            this->txtPrice = (gcnew System::Windows::Forms::TextBox());
            this->txtLocation = (gcnew System::Windows::Forms::TextBox());
            this->label_New_Property = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->Details_Panel = (gcnew System::Windows::Forms::Panel());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->Home_panel = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->Browse_panel = (gcnew System::Windows::Forms::Panel());
            this->Comparison_panel = (gcnew System::Windows::Forms::Panel());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->Welcome_panel->SuspendLayout();
            this->Navigationbar_panel->SuspendLayout();
            this->New_Property->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBedrooms))->BeginInit();
            this->Details_Panel->SuspendLayout();
            this->Home_panel->SuspendLayout();
            this->SuspendLayout();
            // 
            // Home
            // 
            this->Home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Home->FlatAppearance->BorderSize = 0;
            this->Home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Home->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Home->ForeColor = System::Drawing::Color::White;
            this->Home->Location = System::Drawing::Point(278, 14);
            this->Home->Name = L"Home";
            this->Home->Size = System::Drawing::Size(116, 50);
            this->Home->TabIndex = 0;
            this->Home->Text = L"Home";
            this->Home->UseVisualStyleBackColor = false;
            this->Home->Click += gcnew System::EventHandler(this, &UserForm::Home_Click);
            // 
            // Browse
            // 
            this->Browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Browse->FlatAppearance->BorderSize = 0;
            this->Browse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Browse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Browse->ForeColor = System::Drawing::Color::White;
            this->Browse->Location = System::Drawing::Point(400, 14);
            this->Browse->Name = L"Browse";
            this->Browse->Size = System::Drawing::Size(116, 50);
            this->Browse->TabIndex = 0;
            this->Browse->Text = L"Browse";
            this->Browse->UseVisualStyleBackColor = false;
            this->Browse->Click += gcnew System::EventHandler(this, &UserForm::Browse_Click);
            // 
            // Comparison
            // 
            this->Comparison->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Comparison->FlatAppearance->BorderSize = 0;
            this->Comparison->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Comparison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Comparison->ForeColor = System::Drawing::Color::White;
            this->Comparison->Location = System::Drawing::Point(522, 14);
            this->Comparison->Name = L"Comparison";
            this->Comparison->Size = System::Drawing::Size(122, 50);
            this->Comparison->TabIndex = 0;
            this->Comparison->Text = L"Comparison";
            this->Comparison->UseVisualStyleBackColor = false;
            this->Comparison->Click += gcnew System::EventHandler(this, &UserForm::Comparison_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 49.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(202)),
                static_cast<System::Int32>(static_cast<System::Byte>(191)));
            this->label2->Location = System::Drawing::Point(82, 203);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(585, 95);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Dream House ";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(772, 23);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(42, 36);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 2;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &UserForm::pictureBox1_Click);
            // 
            // Profile
            // 
            this->Profile->AutoSize = true;
            this->Profile->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Profile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Profile->ForeColor = System::Drawing::Color::White;
            this->Profile->Location = System::Drawing::Point(820, 24);
            this->Profile->Name = L"Profile";
            this->Profile->Size = System::Drawing::Size(101, 20);
            this->Profile->TabIndex = 1;
            this->Profile->Text = L"user_name";
            this->Profile->Click += gcnew System::EventHandler(this, &UserForm::Profile_Click_1);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(821, 45);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(48, 16);
            this->label3->TabIndex = 1;
            this->label3->Text = L"Logout";
            this->label3->Click += gcnew System::EventHandler(this, &UserForm::label3_Click);
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->ForeColor = System::Drawing::Color::White;
            this->label11->Location = System::Drawing::Point(18, 16);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(77, 20);
            this->label11->TabIndex = 1;
            this->label11->Text = L"Balance";
            // 
            // Balance
            // 
            this->Balance->AutoSize = true;
            this->Balance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Balance->ForeColor = System::Drawing::Color::PaleGreen;
            this->Balance->Location = System::Drawing::Point(18, 37);
            this->Balance->Name = L"Balance";
            this->Balance->Size = System::Drawing::Size(64, 20);
            this->Balance->TabIndex = 1;
            this->Balance->Text = L"10,000";
            // 
            // intro_paragraph
            // 
            this->intro_paragraph->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->intro_paragraph->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->intro_paragraph->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
            this->intro_paragraph->ForeColor = System::Drawing::Color::White;
            this->intro_paragraph->Location = System::Drawing::Point(97, 283);
            this->intro_paragraph->Multiline = true;
            this->intro_paragraph->Name = L"intro_paragraph";
            this->intro_paragraph->ReadOnly = true;
            this->intro_paragraph->Size = System::Drawing::Size(562, 130);
            this->intro_paragraph->TabIndex = 3;
            this->intro_paragraph->Text = resources->GetString(L"intro_paragraph.Text");
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(552, 214);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(485, 496);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 4;
            this->pictureBox2->TabStop = false;
            // 
            // Welcome_panel
            // 
            this->Welcome_panel->Controls->Add(this->intro_paragraph);
            this->Welcome_panel->Controls->Add(this->pictureBox2);
            this->Welcome_panel->Controls->Add(this->label1);
            this->Welcome_panel->Controls->Add(this->label2);
            this->Welcome_panel->Location = System::Drawing::Point(6, 93);
            this->Welcome_panel->Name = L"Welcome_panel";
            this->Welcome_panel->Size = System::Drawing::Size(987, 633);
            this->Welcome_panel->TabIndex = 5;
            this->Welcome_panel->Visible = false;
            this->Welcome_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UserForm::Welcome_panel_Paint);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(85, 143);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(348, 76);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Find Your ";
            // 
            // Profile_panel
            // 
            this->Profile_panel->BackColor = System::Drawing::Color::Yellow;
            this->Profile_panel->Location = System::Drawing::Point(6, 92);
            this->Profile_panel->Name = L"Profile_panel";
            this->Profile_panel->Size = System::Drawing::Size(984, 628);
            this->Profile_panel->TabIndex = 8;
            // 
            // Navigationbar_panel
            // 
            this->Navigationbar_panel->Controls->Add(this->pictureBox1);
            this->Navigationbar_panel->Controls->Add(this->label3);
            this->Navigationbar_panel->Controls->Add(this->Profile);
            this->Navigationbar_panel->Controls->Add(this->Balance);
            this->Navigationbar_panel->Controls->Add(this->label11);
            this->Navigationbar_panel->Controls->Add(this->Browse);
            this->Navigationbar_panel->Controls->Add(this->Home);
            this->Navigationbar_panel->Controls->Add(this->Comparison);
            this->Navigationbar_panel->Location = System::Drawing::Point(12, 22);
            this->Navigationbar_panel->Name = L"Navigationbar_panel";
            this->Navigationbar_panel->Size = System::Drawing::Size(969, 74);
            this->Navigationbar_panel->TabIndex = 6;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(16, 16);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(202, 29);
            this->label5->TabIndex = 1;
            this->label5->Text = L"Your Properties";
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button3->Location = System::Drawing::Point(406, 564);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(142, 35);
            this->button3->TabIndex = 7;
            this->button3->Text = L"Add Property";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &UserForm::button3_Click);
            // 
            // New_Property
            // 
            this->New_Property->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->New_Property->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->New_Property->Controls->Add(this->button6);
            this->New_Property->Controls->Add(this->numBedrooms);
            this->New_Property->Controls->Add(this->TypeCompo);
            this->New_Property->Controls->Add(this->txtDescription);
            this->New_Property->Controls->Add(this->txtArea);
            this->New_Property->Controls->Add(this->txtPrice);
            this->New_Property->Controls->Add(this->txtLocation);
            this->New_Property->Controls->Add(this->label_New_Property);
            this->New_Property->Controls->Add(this->button4);
            this->New_Property->Controls->Add(this->label12);
            this->New_Property->Controls->Add(this->label15);
            this->New_Property->Controls->Add(this->label14);
            this->New_Property->Controls->Add(this->label17);
            this->New_Property->Controls->Add(this->label16);
            this->New_Property->Controls->Add(this->label13);
            this->New_Property->Location = System::Drawing::Point(156, 46);
            this->New_Property->Name = L"New_Property";
            this->New_Property->Size = System::Drawing::Size(662, 482);
            this->New_Property->TabIndex = 9;
            this->New_Property->Visible = false;
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::CadetBlue;
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button6->Location = System::Drawing::Point(165, 420);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(142, 44);
            this->button6->TabIndex = 13;
            this->button6->Text = L"CANCEL";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &UserForm::button6_Click);
            // 
            // numBedrooms
            // 
            this->numBedrooms->Location = System::Drawing::Point(350, 174);
            this->numBedrooms->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
            this->numBedrooms->Name = L"numBedrooms";
            this->numBedrooms->Size = System::Drawing::Size(122, 22);
            this->numBedrooms->TabIndex = 12;
            // 
            // TypeCompo
            // 
            this->TypeCompo->FormattingEnabled = true;
            this->TypeCompo->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Apartment", L"Condominium", L"Townhouse", L"Duplex",
                    L"Villa"
            });
            this->TypeCompo->Location = System::Drawing::Point(71, 101);
            this->TypeCompo->Name = L"TypeCompo";
            this->TypeCompo->Size = System::Drawing::Size(121, 24);
            this->TypeCompo->TabIndex = 11;
            this->TypeCompo->SelectedIndexChanged += gcnew System::EventHandler(this, &UserForm::comboBox1_SelectedIndexChanged);
            // 
            // txtDescription
            // 
            this->txtDescription->Location = System::Drawing::Point(165, 300);
            this->txtDescription->Multiline = true;
            this->txtDescription->Name = L"txtDescription";
            this->txtDescription->Size = System::Drawing::Size(356, 95);
            this->txtDescription->TabIndex = 10;
            // 
            // txtArea
            // 
            this->txtArea->Location = System::Drawing::Point(71, 174);
            this->txtArea->Name = L"txtArea";
            this->txtArea->Size = System::Drawing::Size(121, 22);
            this->txtArea->TabIndex = 9;
            // 
            // txtPrice
            // 
            this->txtPrice->Location = System::Drawing::Point(350, 101);
            this->txtPrice->Name = L"txtPrice";
            this->txtPrice->Size = System::Drawing::Size(122, 22);
            this->txtPrice->TabIndex = 9;
            // 
            // txtLocation
            // 
            this->txtLocation->Location = System::Drawing::Point(71, 241);
            this->txtLocation->Name = L"txtLocation";
            this->txtLocation->Size = System::Drawing::Size(450, 22);
            this->txtLocation->TabIndex = 8;
            // 
            // label_New_Property
            // 
            this->label_New_Property->AutoSize = true;
            this->label_New_Property->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label_New_Property->ForeColor = System::Drawing::Color::White;
            this->label_New_Property->Location = System::Drawing::Point(203, 17);
            this->label_New_Property->Name = L"label_New_Property";
            this->label_New_Property->Size = System::Drawing::Size(228, 38);
            this->label_New_Property->TabIndex = 1;
            this->label_New_Property->Text = L"New Property";
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::CadetBlue;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button4->Location = System::Drawing::Point(379, 420);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(142, 44);
            this->button4->TabIndex = 7;
            this->button4->Text = L"ADD";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &UserForm::button4_Click);
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->ForeColor = System::Drawing::Color::White;
            this->label12->Location = System::Drawing::Point(54, 300);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(112, 20);
            this->label12->TabIndex = 1;
            this->label12->Text = L"Description:";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::White;
            this->label15->Location = System::Drawing::Point(57, 214);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(87, 20);
            this->label15->TabIndex = 1;
            this->label15->Text = L"Location:";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::White;
            this->label14->Location = System::Drawing::Point(57, 75);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(55, 20);
            this->label14->TabIndex = 1;
            this->label14->Text = L"Type:";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::White;
            this->label17->Location = System::Drawing::Point(337, 145);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(190, 20);
            this->label17->TabIndex = 1;
            this->label17->Text = L"Number of bedrooms:";
            this->label17->Click += gcnew System::EventHandler(this, &UserForm::label17_Click);
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::White;
            this->label16->Location = System::Drawing::Point(58, 145);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(54, 20);
            this->label16->TabIndex = 1;
            this->label16->Text = L"Area:";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::Color::White;
            this->label13->Location = System::Drawing::Point(337, 75);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(59, 20);
            this->label13->TabIndex = 1;
            this->label13->Text = L"Price:";
            // 
            // Details_Panel
            // 
            this->Details_Panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->Details_Panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->Details_Panel->Controls->Add(this->textBox6);
            this->Details_Panel->Controls->Add(this->label28);
            this->Details_Panel->Controls->Add(this->label32);
            this->Details_Panel->Controls->Add(this->label31);
            this->Details_Panel->Controls->Add(this->label30);
            this->Details_Panel->Controls->Add(this->label29);
            this->Details_Panel->Controls->Add(this->label24);
            this->Details_Panel->Controls->Add(this->label27);
            this->Details_Panel->Controls->Add(this->label10);
            this->Details_Panel->Controls->Add(this->button5);
            this->Details_Panel->Controls->Add(this->label18);
            this->Details_Panel->Controls->Add(this->label19);
            this->Details_Panel->Controls->Add(this->label20);
            this->Details_Panel->Controls->Add(this->label21);
            this->Details_Panel->Controls->Add(this->label22);
            this->Details_Panel->Controls->Add(this->label25);
            this->Details_Panel->Controls->Add(this->label26);
            this->Details_Panel->Controls->Add(this->label23);
            this->Details_Panel->Location = System::Drawing::Point(170, 35);
            this->Details_Panel->Name = L"Details_Panel";
            this->Details_Panel->Size = System::Drawing::Size(662, 482);
            this->Details_Panel->TabIndex = 9;
            this->Details_Panel->Visible = false;
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(166, 300);
            this->textBox6->Multiline = true;
            this->textBox6->Name = L"textBox6";
            this->textBox6->ReadOnly = true;
            this->textBox6->Size = System::Drawing::Size(402, 97);
            this->textBox6->TabIndex = 9;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label28->Location = System::Drawing::Point(351, 102);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(85, 17);
            this->label28->TabIndex = 8;
            this->label28->Text = L"Place_holder";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label32->Location = System::Drawing::Point(351, 246);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(85, 17);
            this->label32->TabIndex = 8;
            this->label32->Text = L"Place_holder";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label31->Location = System::Drawing::Point(70, 246);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(85, 17);
            this->label31->TabIndex = 8;
            this->label31->Text = L"Place_holder";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label30->Location = System::Drawing::Point(351, 177);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(85, 17);
            this->label30->TabIndex = 8;
            this->label30->Text = L"Place_holder";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label29->Location = System::Drawing::Point(70, 177);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(85, 17);
            this->label29->TabIndex = 8;
            this->label29->Text = L"Place_holder";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label24->Location = System::Drawing::Point(70, 102);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(85, 17);
            this->label24->TabIndex = 8;
            this->label24->Text = L"Place_holder";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label27->Location = System::Drawing::Point(45, 28);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(85, 17);
            this->label27->TabIndex = 8;
            this->label27->Text = L"Place_holder";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::White;
            this->label10->Location = System::Drawing::Point(262, 9);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(124, 38);
            this->label10->TabIndex = 1;
            this->label10->Text = L"Details";
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::CadetBlue;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button5->Location = System::Drawing::Point(274, 420);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(142, 44);
            this->button5->TabIndex = 7;
            this->button5->Text = L"Close";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &UserForm::button5_Click);
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::Color::White;
            this->label18->Location = System::Drawing::Point(54, 300);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(112, 20);
            this->label18->TabIndex = 1;
            this->label18->Text = L"Description:";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::Color::White;
            this->label19->Location = System::Drawing::Point(57, 214);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(87, 20);
            this->label19->TabIndex = 1;
            this->label19->Text = L"Location:";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::Color::White;
            this->label20->Location = System::Drawing::Point(19, 25);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(30, 20);
            this->label20->TabIndex = 1;
            this->label20->Text = L"Id:";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::Color::White;
            this->label21->Location = System::Drawing::Point(337, 145);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(190, 20);
            this->label21->TabIndex = 1;
            this->label21->Text = L"Number of bedrooms:";
            this->label21->Click += gcnew System::EventHandler(this, &UserForm::label17_Click);
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->ForeColor = System::Drawing::Color::White;
            this->label22->Location = System::Drawing::Point(58, 145);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(54, 20);
            this->label22->TabIndex = 1;
            this->label22->Text = L"Area:";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::Color::White;
            this->label25->Location = System::Drawing::Point(337, 214);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(59, 20);
            this->label25->TabIndex = 1;
            this->label25->Text = L"Price:";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->ForeColor = System::Drawing::Color::White;
            this->label26->Location = System::Drawing::Point(54, 75);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(63, 20);
            this->label26->TabIndex = 1;
            this->label26->Text = L"Status";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::Color::White;
            this->label23->Location = System::Drawing::Point(337, 75);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(55, 20);
            this->label23->TabIndex = 1;
            this->label23->Text = L"Type:";
            // 
            // Home_panel
            // 
            this->Home_panel->Controls->Add(this->New_Property);
            this->Home_panel->Controls->Add(this->Details_Panel);
            this->Home_panel->Controls->Add(this->button3);
            this->Home_panel->Controls->Add(this->label5);
            this->Home_panel->Controls->Add(this->flowLayoutPanel1);
            this->Home_panel->Location = System::Drawing::Point(6, 92);
            this->Home_panel->Name = L"Home_panel";
            this->Home_panel->Size = System::Drawing::Size(984, 631);
            this->Home_panel->TabIndex = 0;
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->AutoScroll = true;
            this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
            this->flowLayoutPanel1->Location = System::Drawing::Point(28, 65);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(926, 476);
            this->flowLayoutPanel1->TabIndex = 10;
            this->flowLayoutPanel1->WrapContents = false;
            // 
            // Browse_panel
            // 
            this->Browse_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Browse_panel->Location = System::Drawing::Point(6, 93);
            this->Browse_panel->Name = L"Browse_panel";
            this->Browse_panel->Size = System::Drawing::Size(972, 621);
            this->Browse_panel->TabIndex = 7;
            // 
            // Comparison_panel
            // 
            this->Comparison_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Comparison_panel->Location = System::Drawing::Point(6, 92);
            this->Comparison_panel->Name = L"Comparison_panel";
            this->Comparison_panel->Size = System::Drawing::Size(975, 625);
            this->Comparison_panel->TabIndex = 7;
            // 
            // UserForm
            // 
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->ClientSize = System::Drawing::Size(983, 713);
            this->Controls->Add(this->Navigationbar_panel);
            this->Controls->Add(this->Browse_panel);
            this->Controls->Add(this->Home_panel);
            this->Controls->Add(this->Profile_panel);
            this->Controls->Add(this->Welcome_panel);
            this->Controls->Add(this->Comparison_panel);
            this->Name = L"UserForm";
            this->Text = L"User Form";
            this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &UserForm::UserForm_FormClosed);
            this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->Welcome_panel->ResumeLayout(false);
            this->Welcome_panel->PerformLayout();
            this->Navigationbar_panel->ResumeLayout(false);
            this->Navigationbar_panel->PerformLayout();
            this->New_Property->ResumeLayout(false);
            this->New_Property->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBedrooms))->EndInit();
            this->Details_Panel->ResumeLayout(false);
            this->Details_Panel->PerformLayout();
            this->Home_panel->ResumeLayout(false);
            this->Home_panel->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {

        Welcome_panel->Visible = true;

        // Hide all other panels
        Home_panel->Visible = false;
        Browse_panel->Visible = false;
        Comparison_panel->Visible = false;
        Profile_panel->Visible = false;
        // Set the intro_paragraph TextBox selection to 0, effectively removing the selection
        intro_paragraph->SelectionStart = 0;
        intro_paragraph->SelectionLength = 0;
        
        intro_paragraph->ReadOnly = true;
        intro_paragraph->TabStop = false;
    }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

    New_Property->Visible = true; 

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

    Details_Panel->Visible = true; 
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    Details_Panel->Visible = false; 
        
}
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

        System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
            "Do you want to save changes?",
            "Confirmation",
            System::Windows::Forms::MessageBoxButtons::OKCancel,
            System::Windows::Forms::MessageBoxIcon::Question
        );

        if (result == System::Windows::Forms::DialogResult::OK) {

            std::string Type = msclr::interop::marshal_as<std::string>(TypeCompo->Text);
            std::string Location = msclr::interop::marshal_as<std::string>(txtLocation->Text);
            std::string Des = msclr::interop::marshal_as<std::string>(txtDescription->Text);


            double Price;
            try {
                Price = Convert::ToDouble(txtPrice->Text); // Convert to double
            }
            catch (FormatException^ ex) {
                MessageBox::Show("Invalid price format.");
                return; // Exit early if price format is invalid
            }

            // Convert Area to double
            double Area;
            try {
                Area = Convert::ToDouble(txtArea->Text); // Convert to double
            }
            catch (FormatException^ ex) {
                MessageBox::Show("Invalid area format.");
                return; // Exit early if area format is invalid
            }

            // Convert Bedrooms to integer (if it represents an integer value)
            int Bedrooms;
            try {
                Bedrooms = Convert::ToInt32(numBedrooms->Text); // Convert to integer
            }
            catch (FormatException^ ex) {
                MessageBox::Show("Invalid bedrooms format.");
                return; // Exit early if bedrooms format is invalid
            }

            Global::currUser.addProperty(Type, Location, Price, Bedrooms, Area);
            Property& p = Global::properties.back();

            System::String^ idStr = p.getId().ToString();
            System::String^ typeStr = gcnew System::String(p.getType().c_str());
            System::String^ priceStr = "$ " + p.getPrice().ToString();
            System::String^ statusStr = gcnew System::String("Pending"); // Since availability = 0

            Panel^ panel = CreatePropertyPanel(idStr, typeStr, priceStr, statusStr);
            flowLayoutPanel1->Controls->Add(panel); // <== THIS is the key to show it immediately

            flowLayoutPanel1->ScrollControlIntoView(panel);

            System::Windows::Forms::MessageBox::Show("Property is added successfully");
            New_Property->Visible = false;

        }
        else {
            ResetControlsInPanel(New_Property);
            New_Property->Visible = false; 
        }
    }


       //make all controllers empty  
       void ResetControlsInPanel(System::Windows::Forms::Panel^ panel) {
           for each (Control ^ ctrl in panel->Controls) {
               // Reset TextBox to empty
               if (dynamic_cast<System::Windows::Forms::TextBox^>(ctrl)) {
                   ((System::Windows::Forms::TextBox^)ctrl)->Text = ""; // Clear text
               }
               // Reset ComboBox to its default (first item or empty)
               else if (dynamic_cast<System::Windows::Forms::ComboBox^>(ctrl)) {
                   ((System::Windows::Forms::ComboBox^)ctrl)->SelectedIndex = -1; // Default to no selection (empty)
               }
               // Reset NumericUpDown to default value (usually 0 or the Min value)
               else if (dynamic_cast<System::Windows::Forms::NumericUpDown^>(ctrl)) {
                   ((System::Windows::Forms::NumericUpDown^)ctrl)->Value = ((System::Windows::Forms::NumericUpDown^)ctrl)->Minimum; // Set to minimum (0 or defined Min)
               }
           }
       }

       // Function to handle panel visibility and button color change
       void ChangePanelAndButtonColor(Control^ clickedControl, Panel^ targetPanel, Button^ btnHome, Button^ btnBrowse, Button^ btnComparison)
       {
           // Hide all panels
           Home_panel->Visible = false;
           Browse_panel->Visible = false;
           Comparison_panel->Visible = false;
           Profile_panel->Visible = false;
           Welcome_panel->Visible = false; // Hide the Welcome panel as well

           // Show the selected panel
           targetPanel->Visible = true;

           // Reset the color of all buttons
           btnHome->BackColor = System::Drawing::Color::Transparent;
           btnBrowse->BackColor = System::Drawing::Color::Transparent;
           btnComparison->BackColor = System::Drawing::Color::Transparent;

           // Set the clicked button color
           if (clickedControl == btnHome)
           {
               btnHome->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == btnBrowse)
           {
               btnBrowse->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == btnComparison)
           {
               btnComparison->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
       }

       // Button and Label click event handlers
private: System::Void Home_Click(System::Object^ sender, System::EventArgs^ e)
{
    ChangePanelAndButtonColor(Home, Home_panel, Home, Browse, Comparison);
}

private: System::Void Browse_Click(System::Object^ sender, System::EventArgs^ e)
{
    ChangePanelAndButtonColor(Browse, Browse_panel, Home, Browse, Comparison);
}

private: System::Void Comparison_Click(System::Object^ sender, System::EventArgs^ e)
{
    ChangePanelAndButtonColor(Comparison, Comparison_panel, Home, Browse, Comparison);
}
private: System::Void Profile_Click_1(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor(Profile, Profile_panel, Home, Browse, Comparison);

}
 private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
     ChangePanelAndButtonColor(Profile, Profile_panel, Home, Browse, Comparison);

   }
private: System::Void Welcome_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show(
        "Do you want to delete this property?",
        "Confirmation",
        System::Windows::Forms::MessageBoxButtons::OKCancel,
        System::Windows::Forms::MessageBoxIcon::Question
    );

    if (result == System::Windows::Forms::DialogResult::OK) {
        System::Windows::Forms::MessageBox::Show("property is deleted ");
        New_Property->Visible = false;
    }

}
    private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
        System::Windows::Forms::DialogResult result = MessageBox::Show(
            "Are you sure you want to logout?",
            "Confirm Logout",
            MessageBoxButtons::YesNo,
            MessageBoxIcon::Warning
        );

        if (result == System::Windows::Forms::DialogResult::Yes) {
            this->Hide();
            parent->Show();
        }
    }
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

        New_Property->Visible = false;
        txtArea->Clear();
        txtPrice->Clear();
        txtLocation->Clear();
        txtDescription->Clear();
        numBedrooms->Text = "0";
        TypeCompo->Text = "";
    }
};
}
