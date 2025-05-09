
#pragma once
#include "Global.h"
#include <msclr/marshal_cppstd.h>
using namespace msclr::interop;
#include <sstream>

namespace LoginPage {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for AdminForm
    /// </summary>
    public ref class AdminForm : public System::Windows::Forms::Form
    {


    private:

        System::String^ currentField;
    private: System::Void AdminForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
    private: System::Windows::Forms::Panel^ Navigationbar_panel;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ Profile;


    private: System::Windows::Forms::Button^ Browse;
    private: System::Windows::Forms::Button^ Dashboard;
    private: System::Windows::Forms::Button^ Requests;
    private: System::Windows::Forms::Button^ Moderate_Users;
    private: System::Windows::Forms::Button^ Add_Admin;

    private: System::Windows::Forms::Panel^ Browse_panel;
    private: System::Windows::Forms::Panel^ Requests_panel;
    private: System::Windows::Forms::Panel^ Moderate_users_panel;
    private: System::Windows::Forms::Panel^ Add_admin_panel;

    private: System::Windows::Forms::Panel^ Dashboard_panel;


    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ phoneTextBox;

    private: System::Windows::Forms::TextBox^ passwordTextBox;

    private: System::Windows::Forms::TextBox^ emailTextBox;

    private: System::Windows::Forms::TextBox^ nameTextBox;

    private: System::Windows::Forms::TextBox^ Search_textbox;



    private: System::Windows::Forms::ComboBox^ Search_combobox;


    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ addAdminButton;












    private: System::Windows::Forms::PictureBox^ pictureBox8;
    private: System::Windows::Forms::PictureBox^ pictureBox6;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::PictureBox^ pictureBox5;
    private: System::Windows::Forms::Label^ requests_label;
    private: System::Windows::Forms::Label^ soldnum;


    private: System::Windows::Forms::Label^ Sold_label;
    private: System::Windows::Forms::Label^ propertiesnum;

    private: System::Windows::Forms::Label^ Properties_label;
    private: System::Windows::Forms::Label^ usernum;

    private: System::Windows::Forms::Label^ requestnum;
    private: System::Windows::Forms::Label^ user_num;


    private: System::Windows::Forms::PictureBox^ pictureBox9;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::NumericUpDown^ numBedrooms;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::ComboBox^ TypeCompo;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox10;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::Label^ label21;
















    private: System::Windows::Forms::PictureBox^ pictureBox15;











    private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::Panel^ panel4;




private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;













private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::PictureBox^ pictureBox23;



private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::PictureBox^ pictureBox24;

private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label90;
private: System::Windows::Forms::Label^ user_password;
private: System::Windows::Forms::Label^ user_name;


private: System::Windows::Forms::Label^ user_email;

private: System::Windows::Forms::Label^ user_phone;

private: System::Windows::Forms::Panel^ EditFieldPanel;
private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::TextBox^ editBox;
private: System::Windows::Forms::Label^ editLabel;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::Panel^ change_password_panel;
private: System::Windows::Forms::TextBox^ new_pass;

private: System::Windows::Forms::Label^ label_new_pass;



private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::TextBox^ old_pass;

private: System::Windows::Forms::Label^ label93;
private: System::Windows::Forms::Panel^ Profile_panel;
private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::Button^ cancel_pass;



private: System::Windows::Forms::Button^ save_pass;
private: System::Windows::Forms::PictureBox^ pictureBox30;


private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ save_edit;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Button^ delete_btn;

private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Button^ comp_btn;

private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Button^ details_btn;

private: System::Windows::Forms::Label^ label64;



private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Label^ label77;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label69;










private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;












private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Panel^ Details_Panel;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label32;

private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Button^ button100;

private: System::Windows::Forms::Label^ label23;

private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::Panel^ Edit_property;

private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::TextBox^ txtDescription;
private: System::Windows::Forms::TextBox^ txtArea;
private: System::Windows::Forms::TextBox^ txtPrice;
private: System::Windows::Forms::TextBox^ txtLocation;
private: System::Windows::Forms::Label^ label_New_Property;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::Label^ label83;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::Label^ label85;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Label^ label87;
private: System::Windows::Forms::Label^ label88;
private: System::Windows::Forms::Label^ label95;
private: System::Windows::Forms::Panel^ user_details;


private: System::Windows::Forms::Label^ label96;
private: System::Windows::Forms::Label^ label97;
private: System::Windows::Forms::Label^ label98;
private: System::Windows::Forms::Label^ label99;
private: System::Windows::Forms::Label^ label100;
private: System::Windows::Forms::Label^ label101;


private: System::Windows::Forms::Label^ label104;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Label^ label105;

private: System::Windows::Forms::Label^ label107;

private: System::Windows::Forms::Label^ label109;
private: System::Windows::Forms::Label^ label110;
private: System::Windows::Forms::Label^ label111;
private: System::Windows::Forms::Label^ label112;
private: System::Windows::Forms::Label^ label113;
private: System::Windows::Forms::Label^ label102;
private: System::Windows::Forms::Label^ label103;
















































    private: Form^ parent;
    public:
        AdminForm(Form^ parentForm)
        {
            InitializeComponent();
            this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &LoginPage::AdminForm::AdminForm_FormClosed);
            parent = parentForm;
            
            Dashboard_panel->Visible = true;
            Browse_panel->Visible = false;
            Requests_panel->Visible = false;
            Moderate_users_panel->Visible = false;
            Add_admin_panel->Visible = false;
            Profile_panel->Visible = false;

            Search_combobox->Text = "Email";
            Search_textbox->Text = "Search";
            Search_textbox->ForeColor = System::Drawing::Color::LightGray;
            Search_textbox->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold);
            numBedrooms->Text = "";
            //
            //TODO: Add the constructor code here
            //
            Profile->Text = gcnew String(Global::currUser.getName().c_str());
            user_name->Text = gcnew String(Global::currUser.getName().c_str());
            user_email->Text = gcnew String(Global::currUser.getEmail().c_str());
            user_phone->Text = gcnew String(Global::currUser.getPhoneNumber().c_str());
            std::string password = Global::currUser.getPassword();
            std::string masked(password.length(), '*');
            user_password->Text = gcnew String(masked.c_str());

        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~AdminForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
            this->Navigationbar_panel = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->Profile = (gcnew System::Windows::Forms::Label());
            this->Browse = (gcnew System::Windows::Forms::Button());
            this->Dashboard = (gcnew System::Windows::Forms::Button());
            this->Add_Admin = (gcnew System::Windows::Forms::Button());
            this->Moderate_Users = (gcnew System::Windows::Forms::Button());
            this->Requests = (gcnew System::Windows::Forms::Button());
            this->Dashboard_panel = (gcnew System::Windows::Forms::Panel());
            this->soldnum = (gcnew System::Windows::Forms::Label());
            this->Sold_label = (gcnew System::Windows::Forms::Label());
            this->propertiesnum = (gcnew System::Windows::Forms::Label());
            this->Properties_label = (gcnew System::Windows::Forms::Label());
            this->usernum = (gcnew System::Windows::Forms::Label());
            this->requestnum = (gcnew System::Windows::Forms::Label());
            this->user_num = (gcnew System::Windows::Forms::Label());
            this->requests_label = (gcnew System::Windows::Forms::Label());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->Browse_panel = (gcnew System::Windows::Forms::Panel());
            this->Details_Panel = (gcnew System::Windows::Forms::Panel());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label79 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->button100 = (gcnew System::Windows::Forms::Button());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label78 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->label65 = (gcnew System::Windows::Forms::Label());
            this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
            this->label67 = (gcnew System::Windows::Forms::Label());
            this->label72 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label73 = (gcnew System::Windows::Forms::Label());
            this->label74 = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->label75 = (gcnew System::Windows::Forms::Label());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->label76 = (gcnew System::Windows::Forms::Label());
            this->label77 = (gcnew System::Windows::Forms::Label());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->label70 = (gcnew System::Windows::Forms::Label());
            this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
            this->label66 = (gcnew System::Windows::Forms::Label());
            this->label71 = (gcnew System::Windows::Forms::Label());
            this->delete_btn = (gcnew System::Windows::Forms::Button());
            this->label69 = (gcnew System::Windows::Forms::Label());
            this->label62 = (gcnew System::Windows::Forms::Label());
            this->comp_btn = (gcnew System::Windows::Forms::Button());
            this->label63 = (gcnew System::Windows::Forms::Label());
            this->details_btn = (gcnew System::Windows::Forms::Button());
            this->label64 = (gcnew System::Windows::Forms::Label());
            this->label68 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->numBedrooms = (gcnew System::Windows::Forms::NumericUpDown());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->TypeCompo = (gcnew System::Windows::Forms::ComboBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->Edit_property = (gcnew System::Windows::Forms::Panel());
            this->label86 = (gcnew System::Windows::Forms::Label());
            this->label87 = (gcnew System::Windows::Forms::Label());
            this->label88 = (gcnew System::Windows::Forms::Label());
            this->label95 = (gcnew System::Windows::Forms::Label());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->txtDescription = (gcnew System::Windows::Forms::TextBox());
            this->txtArea = (gcnew System::Windows::Forms::TextBox());
            this->txtPrice = (gcnew System::Windows::Forms::TextBox());
            this->txtLocation = (gcnew System::Windows::Forms::TextBox());
            this->label_New_Property = (gcnew System::Windows::Forms::Label());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->label80 = (gcnew System::Windows::Forms::Label());
            this->label81 = (gcnew System::Windows::Forms::Label());
            this->label82 = (gcnew System::Windows::Forms::Label());
            this->label83 = (gcnew System::Windows::Forms::Label());
            this->label84 = (gcnew System::Windows::Forms::Label());
            this->label85 = (gcnew System::Windows::Forms::Label());
            this->Moderate_users_panel = (gcnew System::Windows::Forms::Panel());
            this->Search_textbox = (gcnew System::Windows::Forms::TextBox());
            this->label103 = (gcnew System::Windows::Forms::Label());
            this->user_details = (gcnew System::Windows::Forms::Panel());
            this->label104 = (gcnew System::Windows::Forms::Label());
            this->label96 = (gcnew System::Windows::Forms::Label());
            this->label97 = (gcnew System::Windows::Forms::Label());
            this->label102 = (gcnew System::Windows::Forms::Label());
            this->label98 = (gcnew System::Windows::Forms::Label());
            this->label99 = (gcnew System::Windows::Forms::Label());
            this->label100 = (gcnew System::Windows::Forms::Label());
            this->label101 = (gcnew System::Windows::Forms::Label());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->label105 = (gcnew System::Windows::Forms::Label());
            this->label107 = (gcnew System::Windows::Forms::Label());
            this->label109 = (gcnew System::Windows::Forms::Label());
            this->label110 = (gcnew System::Windows::Forms::Label());
            this->label111 = (gcnew System::Windows::Forms::Label());
            this->label112 = (gcnew System::Windows::Forms::Label());
            this->label113 = (gcnew System::Windows::Forms::Label());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
            this->label54 = (gcnew System::Windows::Forms::Label());
            this->label55 = (gcnew System::Windows::Forms::Label());
            this->label56 = (gcnew System::Windows::Forms::Label());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->label60 = (gcnew System::Windows::Forms::Label());
            this->label61 = (gcnew System::Windows::Forms::Label());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->label53 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->Search_combobox = (gcnew System::Windows::Forms::ComboBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->Requests_panel = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->Add_admin_panel = (gcnew System::Windows::Forms::Panel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->addAdminButton = (gcnew System::Windows::Forms::Button());
            this->phoneTextBox = (gcnew System::Windows::Forms::TextBox());
            this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
            this->emailTextBox = (gcnew System::Windows::Forms::TextBox());
            this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label90 = (gcnew System::Windows::Forms::Label());
            this->user_password = (gcnew System::Windows::Forms::Label());
            this->user_name = (gcnew System::Windows::Forms::Label());
            this->user_email = (gcnew System::Windows::Forms::Label());
            this->user_phone = (gcnew System::Windows::Forms::Label());
            this->EditFieldPanel = (gcnew System::Windows::Forms::Panel());
            this->save_edit = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label89 = (gcnew System::Windows::Forms::Label());
            this->editBox = (gcnew System::Windows::Forms::TextBox());
            this->editLabel = (gcnew System::Windows::Forms::Label());
            this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
            this->change_password_panel = (gcnew System::Windows::Forms::Panel());
            this->save_pass = (gcnew System::Windows::Forms::Button());
            this->cancel_pass = (gcnew System::Windows::Forms::Button());
            this->new_pass = (gcnew System::Windows::Forms::TextBox());
            this->label_new_pass = (gcnew System::Windows::Forms::Label());
            this->label92 = (gcnew System::Windows::Forms::Label());
            this->old_pass = (gcnew System::Windows::Forms::TextBox());
            this->label93 = (gcnew System::Windows::Forms::Label());
            this->Profile_panel = (gcnew System::Windows::Forms::Panel());
            this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
            this->Navigationbar_panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->Dashboard_panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->Browse_panel->SuspendLayout();
            this->Details_Panel->SuspendLayout();
            this->panel8->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
            this->panel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBedrooms))->BeginInit();
            this->Edit_property->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            this->Moderate_users_panel->SuspendLayout();
            this->user_details->SuspendLayout();
            this->panel6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
            this->panel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->Requests_panel->SuspendLayout();
            this->panel4->SuspendLayout();
            this->Add_admin_panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
            this->EditFieldPanel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
            this->change_password_panel->SuspendLayout();
            this->Profile_panel->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
            this->SuspendLayout();
            // 
            // Navigationbar_panel
            // 
            this->Navigationbar_panel->Controls->Add(this->pictureBox1);
            this->Navigationbar_panel->Controls->Add(this->label3);
            this->Navigationbar_panel->Controls->Add(this->Profile);
            this->Navigationbar_panel->Controls->Add(this->Browse);
            this->Navigationbar_panel->Controls->Add(this->Dashboard);
            this->Navigationbar_panel->Controls->Add(this->Add_Admin);
            this->Navigationbar_panel->Controls->Add(this->Moderate_Users);
            this->Navigationbar_panel->Controls->Add(this->Requests);
            this->Navigationbar_panel->Location = System::Drawing::Point(3, 3);
            this->Navigationbar_panel->Name = L"Navigationbar_panel";
            this->Navigationbar_panel->Size = System::Drawing::Size(969, 74);
            this->Navigationbar_panel->TabIndex = 7;
            this->Navigationbar_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Navigationbar_panel_Paint);
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
            this->pictureBox1->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox1_Click);
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
            this->label3->Click += gcnew System::EventHandler(this, &AdminForm::label3_Click);
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
            this->Profile->Click += gcnew System::EventHandler(this, &AdminForm::Profile_Click);
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
            this->Browse->Location = System::Drawing::Point(187, 11);
            this->Browse->Name = L"Browse";
            this->Browse->Size = System::Drawing::Size(116, 50);
            this->Browse->TabIndex = 0;
            this->Browse->Text = L"Browse";
            this->Browse->UseVisualStyleBackColor = false;
            this->Browse->Click += gcnew System::EventHandler(this, &AdminForm::Browse_Click);
            // 
            // Dashboard
            // 
            this->Dashboard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Dashboard->FlatAppearance->BorderSize = 0;
            this->Dashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Dashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Dashboard->ForeColor = System::Drawing::Color::White;
            this->Dashboard->Location = System::Drawing::Point(65, 11);
            this->Dashboard->Name = L"Dashboard";
            this->Dashboard->Size = System::Drawing::Size(116, 50);
            this->Dashboard->TabIndex = 0;
            this->Dashboard->Text = L"Dashboard";
            this->Dashboard->UseVisualStyleBackColor = false;
            this->Dashboard->Click += gcnew System::EventHandler(this, &AdminForm::Dashboard_Click);
            // 
            // Add_Admin
            // 
            this->Add_Admin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Add_Admin->FlatAppearance->BorderSize = 0;
            this->Add_Admin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Add_Admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Add_Admin->ForeColor = System::Drawing::Color::White;
            this->Add_Admin->Location = System::Drawing::Point(606, 11);
            this->Add_Admin->Name = L"Add_Admin";
            this->Add_Admin->Size = System::Drawing::Size(122, 50);
            this->Add_Admin->TabIndex = 0;
            this->Add_Admin->Text = L"Add Admin";
            this->Add_Admin->UseVisualStyleBackColor = false;
            this->Add_Admin->Click += gcnew System::EventHandler(this, &AdminForm::Add_Admin_Click);
            // 
            // Moderate_Users
            // 
            this->Moderate_Users->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Moderate_Users->FlatAppearance->BorderSize = 0;
            this->Moderate_Users->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Moderate_Users->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Moderate_Users->ForeColor = System::Drawing::Color::White;
            this->Moderate_Users->Location = System::Drawing::Point(441, 11);
            this->Moderate_Users->Name = L"Moderate_Users";
            this->Moderate_Users->Size = System::Drawing::Size(159, 50);
            this->Moderate_Users->TabIndex = 0;
            this->Moderate_Users->Text = L"Moderate Users";
            this->Moderate_Users->UseVisualStyleBackColor = false;
            this->Moderate_Users->Click += gcnew System::EventHandler(this, &AdminForm::Moderate_Users_Click);
            // 
            // Requests
            // 
            this->Requests->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Requests->FlatAppearance->BorderSize = 0;
            this->Requests->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Requests->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Requests->ForeColor = System::Drawing::Color::White;
            this->Requests->Location = System::Drawing::Point(309, 11);
            this->Requests->Name = L"Requests";
            this->Requests->Size = System::Drawing::Size(122, 50);
            this->Requests->TabIndex = 0;
            this->Requests->Text = L"Requests";
            this->Requests->UseVisualStyleBackColor = false;
            this->Requests->Click += gcnew System::EventHandler(this, &AdminForm::Requests_Click);
            // 
            // Dashboard_panel
            // 
            this->Dashboard_panel->Controls->Add(this->soldnum);
            this->Dashboard_panel->Controls->Add(this->Sold_label);
            this->Dashboard_panel->Controls->Add(this->propertiesnum);
            this->Dashboard_panel->Controls->Add(this->Properties_label);
            this->Dashboard_panel->Controls->Add(this->usernum);
            this->Dashboard_panel->Controls->Add(this->requestnum);
            this->Dashboard_panel->Controls->Add(this->user_num);
            this->Dashboard_panel->Controls->Add(this->requests_label);
            this->Dashboard_panel->Controls->Add(this->pictureBox8);
            this->Dashboard_panel->Controls->Add(this->pictureBox6);
            this->Dashboard_panel->Controls->Add(this->pictureBox7);
            this->Dashboard_panel->Controls->Add(this->pictureBox5);
            this->Dashboard_panel->Location = System::Drawing::Point(1, 83);
            this->Dashboard_panel->Name = L"Dashboard_panel";
            this->Dashboard_panel->Size = System::Drawing::Size(978, 603);
            this->Dashboard_panel->TabIndex = 8;
            this->Dashboard_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Dashboard_panel_Paint);
            // 
            // soldnum
            // 
            this->soldnum->AutoSize = true;
            this->soldnum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->soldnum->Font = (gcnew System::Drawing::Font(L"Nexa Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->soldnum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->soldnum->Location = System::Drawing::Point(692, 445);
            this->soldnum->Name = L"soldnum";
            this->soldnum->Size = System::Drawing::Size(45, 39);
            this->soldnum->TabIndex = 2;
            this->soldnum->Text = L"11";
            // 
            // Sold_label
            // 
            this->Sold_label->AutoSize = true;
            this->Sold_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->Sold_label->Font = (gcnew System::Drawing::Font(L"Nexa Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Sold_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Sold_label->Location = System::Drawing::Point(678, 359);
            this->Sold_label->Name = L"Sold_label";
            this->Sold_label->Size = System::Drawing::Size(84, 39);
            this->Sold_label->TabIndex = 2;
            this->Sold_label->Text = L"Sold";
            // 
            // propertiesnum
            // 
            this->propertiesnum->AutoSize = true;
            this->propertiesnum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->propertiesnum->Font = (gcnew System::Drawing::Font(L"Nexa Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->propertiesnum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->propertiesnum->Location = System::Drawing::Point(234, 445);
            this->propertiesnum->Name = L"propertiesnum";
            this->propertiesnum->Size = System::Drawing::Size(45, 39);
            this->propertiesnum->TabIndex = 2;
            this->propertiesnum->Text = L"11";
            // 
            // Properties_label
            // 
            this->Properties_label->AutoSize = true;
            this->Properties_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->Properties_label->Font = (gcnew System::Drawing::Font(L"Nexa Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Properties_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->Properties_label->Location = System::Drawing::Point(185, 359);
            this->Properties_label->Name = L"Properties_label";
            this->Properties_label->Size = System::Drawing::Size(177, 39);
            this->Properties_label->TabIndex = 2;
            this->Properties_label->Text = L"Properties";
            // 
            // usernum
            // 
            this->usernum->AutoSize = true;
            this->usernum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->usernum->Font = (gcnew System::Drawing::Font(L"Nexa Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->usernum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->usernum->Location = System::Drawing::Point(690, 158);
            this->usernum->Name = L"usernum";
            this->usernum->Size = System::Drawing::Size(53, 39);
            this->usernum->TabIndex = 2;
            this->usernum->Text = L"10";
            // 
            // requestnum
            // 
            this->requestnum->AutoSize = true;
            this->requestnum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->requestnum->Font = (gcnew System::Drawing::Font(L"Nexa Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->requestnum->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->requestnum->Location = System::Drawing::Point(234, 158);
            this->requestnum->Name = L"requestnum";
            this->requestnum->Size = System::Drawing::Size(53, 39);
            this->requestnum->TabIndex = 2;
            this->requestnum->Text = L"18";
            // 
            // user_num
            // 
            this->user_num->AutoSize = true;
            this->user_num->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->user_num->Font = (gcnew System::Drawing::Font(L"Nexa Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->user_num->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->user_num->Location = System::Drawing::Point(670, 72);
            this->user_num->Name = L"user_num";
            this->user_num->Size = System::Drawing::Size(101, 39);
            this->user_num->TabIndex = 2;
            this->user_num->Text = L"Users";
            // 
            // requests_label
            // 
            this->requests_label->AutoSize = true;
            this->requests_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->requests_label->Font = (gcnew System::Drawing::Font(L"Nexa Black", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->requests_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->requests_label->Location = System::Drawing::Point(194, 72);
            this->requests_label->Name = L"requests_label";
            this->requests_label->Size = System::Drawing::Size(155, 39);
            this->requests_label->TabIndex = 2;
            this->requests_label->Text = L"Requests";
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(581, 319);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(264, 243);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox8->TabIndex = 0;
            this->pictureBox8->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(135, 319);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(264, 243);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox6->TabIndex = 0;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(581, 30);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(264, 243);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox7->TabIndex = 0;
            this->pictureBox7->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(135, 30);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(264, 243);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox5->TabIndex = 0;
            this->pictureBox5->TabStop = false;
            // 
            // Browse_panel
            // 
            this->Browse_panel->Controls->Add(this->Details_Panel);
            this->Browse_panel->Controls->Add(this->panel8);
            this->Browse_panel->Controls->Add(this->panel7);
            this->Browse_panel->Controls->Add(this->panel1);
            this->Browse_panel->Controls->Add(this->Edit_property);
            this->Browse_panel->Location = System::Drawing::Point(3, 92);
            this->Browse_panel->Name = L"Browse_panel";
            this->Browse_panel->Size = System::Drawing::Size(971, 654);
            this->Browse_panel->TabIndex = 0;
            this->Browse_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Browse_panel_Paint);
            // 
            // Details_Panel
            // 
            this->Details_Panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->Details_Panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->Details_Panel->Controls->Add(this->textBox12);
            this->Details_Panel->Controls->Add(this->label28);
            this->Details_Panel->Controls->Add(this->label32);
            this->Details_Panel->Controls->Add(this->label31);
            this->Details_Panel->Controls->Add(this->label30);
            this->Details_Panel->Controls->Add(this->label29);
            this->Details_Panel->Controls->Add(this->label24);
            this->Details_Panel->Controls->Add(this->label79);
            this->Details_Panel->Controls->Add(this->label27);
            this->Details_Panel->Controls->Add(this->label22);
            this->Details_Panel->Controls->Add(this->button100);
            this->Details_Panel->Controls->Add(this->label23);
            this->Details_Panel->Controls->Add(this->label78);
            this->Details_Panel->Controls->Add(this->label25);
            this->Details_Panel->Controls->Add(this->label26);
            this->Details_Panel->Controls->Add(this->label33);
            this->Details_Panel->Controls->Add(this->label34);
            this->Details_Panel->Controls->Add(this->label35);
            this->Details_Panel->Controls->Add(this->label36);
            this->Details_Panel->Controls->Add(this->label37);
            this->Details_Panel->Location = System::Drawing::Point(233, 96);
            this->Details_Panel->Name = L"Details_Panel";
            this->Details_Panel->Size = System::Drawing::Size(662, 482);
            this->Details_Panel->TabIndex = 19;
            this->Details_Panel->Visible = false;
            // 
            // textBox12
            // 
            this->textBox12->Location = System::Drawing::Point(166, 300);
            this->textBox12->Multiline = true;
            this->textBox12->Name = L"textBox12";
            this->textBox12->ReadOnly = true;
            this->textBox12->Size = System::Drawing::Size(402, 97);
            this->textBox12->TabIndex = 9;
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
            // label79
            // 
            this->label79->AutoSize = true;
            this->label79->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label79->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label79->Location = System::Drawing::Point(543, 42);
            this->label79->Name = L"label79";
            this->label79->Size = System::Drawing::Size(85, 17);
            this->label79->TabIndex = 8;
            this->label79->Text = L"Place_holder";
            this->label79->Click += gcnew System::EventHandler(this, &AdminForm::label79_Click);
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
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->ForeColor = System::Drawing::Color::White;
            this->label22->Location = System::Drawing::Point(262, 9);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(124, 38);
            this->label22->TabIndex = 1;
            this->label22->Text = L"Details";
            // 
            // button100
            // 
            this->button100->BackColor = System::Drawing::Color::CadetBlue;
            this->button100->FlatAppearance->BorderSize = 0;
            this->button100->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button100->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button100->Location = System::Drawing::Point(274, 420);
            this->button100->Name = L"button100";
            this->button100->Size = System::Drawing::Size(142, 44);
            this->button100->TabIndex = 7;
            this->button100->Text = L"Close";
            this->button100->UseVisualStyleBackColor = false;
            this->button100->Click += gcnew System::EventHandler(this, &AdminForm::button100_Click);
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::Color::White;
            this->label23->Location = System::Drawing::Point(54, 300);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(112, 20);
            this->label23->TabIndex = 1;
            this->label23->Text = L"Description:";
            // 
            // label78
            // 
            this->label78->AutoSize = true;
            this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label78->ForeColor = System::Drawing::Color::White;
            this->label78->Location = System::Drawing::Point(514, 19);
            this->label78->Name = L"label78";
            this->label78->Size = System::Drawing::Size(123, 20);
            this->label78->TabIndex = 1;
            this->label78->Text = L"Owner Name:";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->ForeColor = System::Drawing::Color::White;
            this->label25->Location = System::Drawing::Point(57, 214);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(87, 20);
            this->label25->TabIndex = 1;
            this->label25->Text = L"Location:";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->ForeColor = System::Drawing::Color::White;
            this->label26->Location = System::Drawing::Point(19, 25);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(30, 20);
            this->label26->TabIndex = 1;
            this->label26->Text = L"Id:";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->ForeColor = System::Drawing::Color::White;
            this->label33->Location = System::Drawing::Point(337, 145);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(190, 20);
            this->label33->TabIndex = 1;
            this->label33->Text = L"Number of bedrooms:";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->ForeColor = System::Drawing::Color::White;
            this->label34->Location = System::Drawing::Point(58, 145);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(54, 20);
            this->label34->TabIndex = 1;
            this->label34->Text = L"Area:";
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->ForeColor = System::Drawing::Color::White;
            this->label35->Location = System::Drawing::Point(337, 214);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(59, 20);
            this->label35->TabIndex = 1;
            this->label35->Text = L"Price:";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->ForeColor = System::Drawing::Color::White;
            this->label36->Location = System::Drawing::Point(54, 75);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(69, 20);
            this->label36->TabIndex = 1;
            this->label36->Text = L"Status:";
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->ForeColor = System::Drawing::Color::White;
            this->label37->Location = System::Drawing::Point(337, 75);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(55, 20);
            this->label37->TabIndex = 1;
            this->label37->Text = L"Type:";
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
                static_cast<System::Int32>(static_cast<System::Byte>(105)));
            this->panel8->Controls->Add(this->label65);
            this->panel8->Controls->Add(this->pictureBox15);
            this->panel8->Controls->Add(this->label67);
            this->panel8->Controls->Add(this->label72);
            this->panel8->Controls->Add(this->button2);
            this->panel8->Controls->Add(this->label73);
            this->panel8->Controls->Add(this->label74);
            this->panel8->Controls->Add(this->button5);
            this->panel8->Controls->Add(this->label75);
            this->panel8->Controls->Add(this->button6);
            this->panel8->Controls->Add(this->label76);
            this->panel8->Controls->Add(this->label77);
            this->panel8->Location = System::Drawing::Point(239, 159);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(682, 119);
            this->panel8->TabIndex = 18;
            // 
            // label65
            // 
            this->label65->AutoSize = true;
            this->label65->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label65->ForeColor = System::Drawing::Color::White;
            this->label65->Location = System::Drawing::Point(41, 61);
            this->label65->Name = L"label65";
            this->label65->Size = System::Drawing::Size(112, 21);
            this->label65->TabIndex = 4;
            this->label65->Text = L"10 (Highlight)";
            // 
            // pictureBox15
            // 
            this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
            this->pictureBox15->Location = System::Drawing::Point(448, 3);
            this->pictureBox15->Name = L"pictureBox15";
            this->pictureBox15->Size = System::Drawing::Size(110, 116);
            this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox15->TabIndex = 1;
            this->pictureBox15->TabStop = false;
            // 
            // label67
            // 
            this->label67->AutoSize = true;
            this->label67->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label67->ForeColor = System::Drawing::Color::White;
            this->label67->Location = System::Drawing::Point(131, 18);
            this->label67->Name = L"label67";
            this->label67->Size = System::Drawing::Size(77, 21);
            this->label67->TabIndex = 4;
            this->label67->Text = L"Mostafa";
            // 
            // label72
            // 
            this->label72->AutoSize = true;
            this->label72->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label72->ForeColor = System::Drawing::Color::White;
            this->label72->Location = System::Drawing::Point(15, 61);
            this->label72->Name = L"label72";
            this->label72->Size = System::Drawing::Size(32, 21);
            this->label72->TabIndex = 5;
            this->label72->Text = L"Id: ";
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::CadetBlue;
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button2->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button2->Location = System::Drawing::Point(565, 81);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(99, 30);
            this->button2->TabIndex = 17;
            this->button2->Text = L"DELETE";
            this->button2->UseVisualStyleBackColor = false;
            // 
            // label73
            // 
            this->label73->AutoSize = true;
            this->label73->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label73->ForeColor = System::Drawing::Color::White;
            this->label73->Location = System::Drawing::Point(11, 18);
            this->label73->Name = L"label73";
            this->label73->Size = System::Drawing::Size(123, 21);
            this->label73->TabIndex = 5;
            this->label73->Text = L"Owner Name: ";
            // 
            // label74
            // 
            this->label74->AutoSize = true;
            this->label74->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label74->ForeColor = System::Drawing::Color::White;
            this->label74->Location = System::Drawing::Point(356, 61);
            this->label74->Name = L"label74";
            this->label74->Size = System::Drawing::Size(81, 21);
            this->label74->TabIndex = 3;
            this->label74->Text = L"$10,000";
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::CadetBlue;
            this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button5->Location = System::Drawing::Point(565, 46);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(97, 30);
            this->button5->TabIndex = 16;
            this->button5->Text = L"EDIT";
            this->button5->UseVisualStyleBackColor = false;
            // 
            // label75
            // 
            this->label75->AutoSize = true;
            this->label75->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label75->ForeColor = System::Drawing::Color::White;
            this->label75->Location = System::Drawing::Point(357, 18);
            this->label75->Name = L"label75";
            this->label75->Size = System::Drawing::Size(45, 21);
            this->label75->TabIndex = 3;
            this->label75->Text = L"Villa";
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::CadetBlue;
            this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button6->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button6->Location = System::Drawing::Point(565, 9);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(97, 30);
            this->button6->TabIndex = 15;
            this->button6->Text = L"DETAILS";
            this->button6->UseVisualStyleBackColor = false;
            // 
            // label76
            // 
            this->label76->AutoSize = true;
            this->label76->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label76->ForeColor = System::Drawing::Color::White;
            this->label76->Location = System::Drawing::Point(296, 61);
            this->label76->Name = L"label76";
            this->label76->Size = System::Drawing::Size(54, 21);
            this->label76->TabIndex = 3;
            this->label76->Text = L"Price:";
            // 
            // label77
            // 
            this->label77->AutoSize = true;
            this->label77->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label77->ForeColor = System::Drawing::Color::White;
            this->label77->Location = System::Drawing::Point(296, 18);
            this->label77->Name = L"label77";
            this->label77->Size = System::Drawing::Size(58, 21);
            this->label77->TabIndex = 3;
            this->label77->Text = L"Type: ";
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->panel7->Controls->Add(this->label70);
            this->panel7->Controls->Add(this->pictureBox14);
            this->panel7->Controls->Add(this->label66);
            this->panel7->Controls->Add(this->label71);
            this->panel7->Controls->Add(this->delete_btn);
            this->panel7->Controls->Add(this->label69);
            this->panel7->Controls->Add(this->label62);
            this->panel7->Controls->Add(this->comp_btn);
            this->panel7->Controls->Add(this->label63);
            this->panel7->Controls->Add(this->details_btn);
            this->panel7->Controls->Add(this->label64);
            this->panel7->Controls->Add(this->label68);
            this->panel7->Location = System::Drawing::Point(239, 24);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(682, 119);
            this->panel7->TabIndex = 5;
            // 
            // label70
            // 
            this->label70->AutoSize = true;
            this->label70->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label70->ForeColor = System::Drawing::Color::White;
            this->label70->Location = System::Drawing::Point(41, 61);
            this->label70->Name = L"label70";
            this->label70->Size = System::Drawing::Size(137, 21);
            this->label70->TabIndex = 4;
            this->label70->Text = L"10 (UNHighlight)";
            // 
            // pictureBox14
            // 
            this->pictureBox14->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
            this->pictureBox14->Location = System::Drawing::Point(448, 2);
            this->pictureBox14->Name = L"pictureBox14";
            this->pictureBox14->Size = System::Drawing::Size(110, 116);
            this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox14->TabIndex = 1;
            this->pictureBox14->TabStop = false;
            // 
            // label66
            // 
            this->label66->AutoSize = true;
            this->label66->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label66->ForeColor = System::Drawing::Color::White;
            this->label66->Location = System::Drawing::Point(131, 18);
            this->label66->Name = L"label66";
            this->label66->Size = System::Drawing::Size(77, 21);
            this->label66->TabIndex = 4;
            this->label66->Text = L"Mostafa";
            // 
            // label71
            // 
            this->label71->AutoSize = true;
            this->label71->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label71->ForeColor = System::Drawing::Color::White;
            this->label71->Location = System::Drawing::Point(15, 61);
            this->label71->Name = L"label71";
            this->label71->Size = System::Drawing::Size(32, 21);
            this->label71->TabIndex = 5;
            this->label71->Text = L"Id: ";
            // 
            // delete_btn
            // 
            this->delete_btn->BackColor = System::Drawing::Color::CadetBlue;
            this->delete_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->delete_btn->FlatAppearance->BorderSize = 0;
            this->delete_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->delete_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->delete_btn->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->delete_btn->Location = System::Drawing::Point(565, 81);
            this->delete_btn->Name = L"delete_btn";
            this->delete_btn->Size = System::Drawing::Size(99, 30);
            this->delete_btn->TabIndex = 17;
            this->delete_btn->Text = L"DELETE";
            this->delete_btn->UseVisualStyleBackColor = false;
            this->delete_btn->Click += gcnew System::EventHandler(this, &AdminForm::delete_btn_Click);
            // 
            // label69
            // 
            this->label69->AutoSize = true;
            this->label69->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label69->ForeColor = System::Drawing::Color::White;
            this->label69->Location = System::Drawing::Point(11, 18);
            this->label69->Name = L"label69";
            this->label69->Size = System::Drawing::Size(123, 21);
            this->label69->TabIndex = 5;
            this->label69->Text = L"Owner Name: ";
            // 
            // label62
            // 
            this->label62->AutoSize = true;
            this->label62->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label62->ForeColor = System::Drawing::Color::White;
            this->label62->Location = System::Drawing::Point(356, 61);
            this->label62->Name = L"label62";
            this->label62->Size = System::Drawing::Size(81, 21);
            this->label62->TabIndex = 3;
            this->label62->Text = L"$10,000";
            // 
            // comp_btn
            // 
            this->comp_btn->BackColor = System::Drawing::Color::CadetBlue;
            this->comp_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->comp_btn->FlatAppearance->BorderSize = 0;
            this->comp_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->comp_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comp_btn->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->comp_btn->Location = System::Drawing::Point(565, 46);
            this->comp_btn->Name = L"comp_btn";
            this->comp_btn->Size = System::Drawing::Size(97, 30);
            this->comp_btn->TabIndex = 16;
            this->comp_btn->Text = L"EDIT";
            this->comp_btn->UseVisualStyleBackColor = false;
            // 
            // label63
            // 
            this->label63->AutoSize = true;
            this->label63->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label63->ForeColor = System::Drawing::Color::White;
            this->label63->Location = System::Drawing::Point(357, 18);
            this->label63->Name = L"label63";
            this->label63->Size = System::Drawing::Size(45, 21);
            this->label63->TabIndex = 3;
            this->label63->Text = L"Villa";
            // 
            // details_btn
            // 
            this->details_btn->BackColor = System::Drawing::Color::CadetBlue;
            this->details_btn->Cursor = System::Windows::Forms::Cursors::Hand;
            this->details_btn->FlatAppearance->BorderSize = 0;
            this->details_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->details_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->details_btn->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->details_btn->Location = System::Drawing::Point(565, 9);
            this->details_btn->Name = L"details_btn";
            this->details_btn->Size = System::Drawing::Size(97, 30);
            this->details_btn->TabIndex = 15;
            this->details_btn->Text = L"DETAILS";
            this->details_btn->UseVisualStyleBackColor = false;
            // 
            // label64
            // 
            this->label64->AutoSize = true;
            this->label64->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label64->ForeColor = System::Drawing::Color::White;
            this->label64->Location = System::Drawing::Point(296, 61);
            this->label64->Name = L"label64";
            this->label64->Size = System::Drawing::Size(54, 21);
            this->label64->TabIndex = 3;
            this->label64->Text = L"Price:";
            // 
            // label68
            // 
            this->label68->AutoSize = true;
            this->label68->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label68->ForeColor = System::Drawing::Color::White;
            this->label68->Location = System::Drawing::Point(296, 18);
            this->label68->Name = L"label68";
            this->label68->Size = System::Drawing::Size(58, 21);
            this->label68->TabIndex = 3;
            this->label68->Text = L"Type: ";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->panel1->Controls->Add(this->pictureBox10);
            this->panel1->Controls->Add(this->pictureBox3);
            this->panel1->Controls->Add(this->numBedrooms);
            this->panel1->Controls->Add(this->label19);
            this->panel1->Controls->Add(this->label20);
            this->panel1->Controls->Add(this->label18);
            this->panel1->Controls->Add(this->label17);
            this->panel1->Controls->Add(this->textBox7);
            this->panel1->Controls->Add(this->textBox6);
            this->panel1->Controls->Add(this->textBox8);
            this->panel1->Controls->Add(this->textBox9);
            this->panel1->Controls->Add(this->textBox5);
            this->panel1->Controls->Add(this->TypeCompo);
            this->panel1->Controls->Add(this->label21);
            this->panel1->Controls->Add(this->label16);
            this->panel1->Controls->Add(this->label15);
            this->panel1->Location = System::Drawing::Point(2, 3);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(221, 593);
            this->panel1->TabIndex = 0;
            // 
            // pictureBox10
            // 
            this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(133, 503);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(75, 47);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox10->TabIndex = 1;
            this->pictureBox10->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(10, 503);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(75, 47);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 1;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox3_Click_1);
            // 
            // numBedrooms
            // 
            this->numBedrooms->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->numBedrooms->Font = (gcnew System::Drawing::Font(L"Nexa Light", 8.999999F));
            this->numBedrooms->ForeColor = System::Drawing::Color::White;
            this->numBedrooms->Location = System::Drawing::Point(48, 373);
            this->numBedrooms->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
            this->numBedrooms->Name = L"numBedrooms";
            this->numBedrooms->Size = System::Drawing::Size(143, 26);
            this->numBedrooms->TabIndex = 15;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->ForeColor = System::Drawing::Color::White;
            this->label19->Location = System::Drawing::Point(105, 217);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(30, 20);
            this->label19->TabIndex = 13;
            this->label19->Text = L"To";
            this->label19->Click += gcnew System::EventHandler(this, &AdminForm::label17_Click);
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::Color::White;
            this->label20->Location = System::Drawing::Point(20, 264);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(48, 20);
            this->label20->TabIndex = 13;
            this->label20->Text = L"Area";
            this->label20->Click += gcnew System::EventHandler(this, &AdminForm::label17_Click);
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::Color::White;
            this->label18->Location = System::Drawing::Point(20, 184);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(112, 20);
            this->label18->TabIndex = 13;
            this->label18->Text = L"Price Range";
            this->label18->Click += gcnew System::EventHandler(this, &AdminForm::label17_Click);
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::Color::White;
            this->label17->Location = System::Drawing::Point(14, 339);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(187, 20);
            this->label17->TabIndex = 13;
            this->label17->Text = L"Number of Bedrooms";
            this->label17->Click += gcnew System::EventHandler(this, &AdminForm::label17_Click);
            // 
            // textBox7
            // 
            this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Nexa Light", 8.999999F));
            this->textBox7->ForeColor = System::Drawing::Color::White;
            this->textBox7->Location = System::Drawing::Point(141, 216);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(50, 26);
            this->textBox7->TabIndex = 4;
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Nexa Light", 8.999999F));
            this->textBox6->ForeColor = System::Drawing::Color::White;
            this->textBox6->Location = System::Drawing::Point(48, 216);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(50, 26);
            this->textBox6->TabIndex = 4;
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Nexa Light", 8.999999F));
            this->textBox8->ForeColor = System::Drawing::Color::White;
            this->textBox8->Location = System::Drawing::Point(46, 290);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(145, 26);
            this->textBox8->TabIndex = 4;
            // 
            // textBox9
            // 
            this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Nexa Light", 8.999999F));
            this->textBox9->ForeColor = System::Drawing::Color::White;
            this->textBox9->Location = System::Drawing::Point(53, 455);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(138, 26);
            this->textBox9->TabIndex = 4;
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Nexa Light", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::Color::White;
            this->textBox5->Location = System::Drawing::Point(53, 61);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(138, 26);
            this->textBox5->TabIndex = 4;
            // 
            // TypeCompo
            // 
            this->TypeCompo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
                static_cast<System::Int32>(static_cast<System::Byte>(152)));
            this->TypeCompo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->TypeCompo->Font = (gcnew System::Drawing::Font(L"Nexa Light", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TypeCompo->ForeColor = System::Drawing::Color::White;
            this->TypeCompo->FormattingEnabled = true;
            this->TypeCompo->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Apartment", L"Condominium", L"Townhouse", L"Duplex",
                    L"Villa"
            });
            this->TypeCompo->Location = System::Drawing::Point(53, 132);
            this->TypeCompo->Name = L"TypeCompo";
            this->TypeCompo->Size = System::Drawing::Size(138, 27);
            this->TypeCompo->TabIndex = 14;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::Color::White;
            this->label21->Location = System::Drawing::Point(19, 425);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(116, 21);
            this->label21->TabIndex = 3;
            this->label21->Text = L"Owner Name";
            this->label21->Click += gcnew System::EventHandler(this, &AdminForm::label15_Click);
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::White;
            this->label16->Location = System::Drawing::Point(19, 100);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(51, 21);
            this->label16->TabIndex = 3;
            this->label16->Text = L"Type";
            this->label16->Click += gcnew System::EventHandler(this, &AdminForm::label15_Click);
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::Color::White;
            this->label15->Location = System::Drawing::Point(19, 31);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(79, 21);
            this->label15->TabIndex = 3;
            this->label15->Text = L"Location";
            this->label15->Click += gcnew System::EventHandler(this, &AdminForm::label15_Click);
            // 
            // Edit_property
            // 
            this->Edit_property->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->Edit_property->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->Edit_property->Controls->Add(this->label86);
            this->Edit_property->Controls->Add(this->label87);
            this->Edit_property->Controls->Add(this->label88);
            this->Edit_property->Controls->Add(this->label95);
            this->Edit_property->Controls->Add(this->button10);
            this->Edit_property->Controls->Add(this->numericUpDown1);
            this->Edit_property->Controls->Add(this->comboBox1);
            this->Edit_property->Controls->Add(this->txtDescription);
            this->Edit_property->Controls->Add(this->txtArea);
            this->Edit_property->Controls->Add(this->txtPrice);
            this->Edit_property->Controls->Add(this->txtLocation);
            this->Edit_property->Controls->Add(this->label_New_Property);
            this->Edit_property->Controls->Add(this->button11);
            this->Edit_property->Controls->Add(this->label80);
            this->Edit_property->Controls->Add(this->label81);
            this->Edit_property->Controls->Add(this->label82);
            this->Edit_property->Controls->Add(this->label83);
            this->Edit_property->Controls->Add(this->label84);
            this->Edit_property->Controls->Add(this->label85);
            this->Edit_property->Location = System::Drawing::Point(228, 46);
            this->Edit_property->Name = L"Edit_property";
            this->Edit_property->Size = System::Drawing::Size(662, 482);
            this->Edit_property->TabIndex = 10;
            this->Edit_property->Visible = false;
            // 
            // label86
            // 
            this->label86->AutoSize = true;
            this->label86->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label86->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label86->Location = System::Drawing::Point(540, 32);
            this->label86->Name = L"label86";
            this->label86->Size = System::Drawing::Size(85, 17);
            this->label86->TabIndex = 16;
            this->label86->Text = L"Place_holder";
            // 
            // label87
            // 
            this->label87->AutoSize = true;
            this->label87->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label87->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label87->Location = System::Drawing::Point(42, 18);
            this->label87->Name = L"label87";
            this->label87->Size = System::Drawing::Size(85, 17);
            this->label87->TabIndex = 17;
            this->label87->Text = L"Place_holder";
            // 
            // label88
            // 
            this->label88->AutoSize = true;
            this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label88->ForeColor = System::Drawing::Color::White;
            this->label88->Location = System::Drawing::Point(511, 9);
            this->label88->Name = L"label88";
            this->label88->Size = System::Drawing::Size(123, 20);
            this->label88->TabIndex = 14;
            this->label88->Text = L"Owner Name:";
            // 
            // label95
            // 
            this->label95->AutoSize = true;
            this->label95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label95->ForeColor = System::Drawing::Color::White;
            this->label95->Location = System::Drawing::Point(16, 15);
            this->label95->Name = L"label95";
            this->label95->Size = System::Drawing::Size(30, 20);
            this->label95->TabIndex = 15;
            this->label95->Text = L"Id:";
            // 
            // button10
            // 
            this->button10->BackColor = System::Drawing::Color::CadetBlue;
            this->button10->FlatAppearance->BorderSize = 0;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button10->Location = System::Drawing::Point(165, 420);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(142, 44);
            this->button10->TabIndex = 13;
            this->button10->Text = L"CANCEL";
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &AdminForm::button10_Click);
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Location = System::Drawing::Point(350, 174);
            this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(122, 24);
            this->numericUpDown1->TabIndex = 12;
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Apartment", L"Condominium", L"Townhouse", L"Duplex",
                    L"Villa"
            });
            this->comboBox1->Location = System::Drawing::Point(71, 101);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(121, 24);
            this->comboBox1->TabIndex = 11;
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
            this->txtArea->Size = System::Drawing::Size(121, 24);
            this->txtArea->TabIndex = 9;
            // 
            // txtPrice
            // 
            this->txtPrice->Location = System::Drawing::Point(350, 101);
            this->txtPrice->Name = L"txtPrice";
            this->txtPrice->Size = System::Drawing::Size(122, 24);
            this->txtPrice->TabIndex = 9;
            // 
            // txtLocation
            // 
            this->txtLocation->Location = System::Drawing::Point(71, 241);
            this->txtLocation->Name = L"txtLocation";
            this->txtLocation->Size = System::Drawing::Size(450, 24);
            this->txtLocation->TabIndex = 8;
            // 
            // label_New_Property
            // 
            this->label_New_Property->AutoSize = true;
            this->label_New_Property->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label_New_Property->ForeColor = System::Drawing::Color::White;
            this->label_New_Property->Location = System::Drawing::Point(182, 15);
            this->label_New_Property->Name = L"label_New_Property";
            this->label_New_Property->Size = System::Drawing::Size(295, 38);
            this->label_New_Property->TabIndex = 1;
            this->label_New_Property->Text = L"EDIT PROPERTY";
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::Color::CadetBlue;
            this->button11->FlatAppearance->BorderSize = 0;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button11->Location = System::Drawing::Point(379, 420);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(142, 44);
            this->button11->TabIndex = 7;
            this->button11->Text = L"ADD";
            this->button11->UseVisualStyleBackColor = false;
            // 
            // label80
            // 
            this->label80->AutoSize = true;
            this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label80->ForeColor = System::Drawing::Color::White;
            this->label80->Location = System::Drawing::Point(54, 300);
            this->label80->Name = L"label80";
            this->label80->Size = System::Drawing::Size(112, 20);
            this->label80->TabIndex = 1;
            this->label80->Text = L"Description:";
            // 
            // label81
            // 
            this->label81->AutoSize = true;
            this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label81->ForeColor = System::Drawing::Color::White;
            this->label81->Location = System::Drawing::Point(57, 214);
            this->label81->Name = L"label81";
            this->label81->Size = System::Drawing::Size(87, 20);
            this->label81->TabIndex = 1;
            this->label81->Text = L"Location:";
            // 
            // label82
            // 
            this->label82->AutoSize = true;
            this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label82->ForeColor = System::Drawing::Color::White;
            this->label82->Location = System::Drawing::Point(57, 75);
            this->label82->Name = L"label82";
            this->label82->Size = System::Drawing::Size(55, 20);
            this->label82->TabIndex = 1;
            this->label82->Text = L"Type:";
            // 
            // label83
            // 
            this->label83->AutoSize = true;
            this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label83->ForeColor = System::Drawing::Color::White;
            this->label83->Location = System::Drawing::Point(337, 145);
            this->label83->Name = L"label83";
            this->label83->Size = System::Drawing::Size(190, 20);
            this->label83->TabIndex = 1;
            this->label83->Text = L"Number of bedrooms:";
            // 
            // label84
            // 
            this->label84->AutoSize = true;
            this->label84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label84->ForeColor = System::Drawing::Color::White;
            this->label84->Location = System::Drawing::Point(58, 145);
            this->label84->Name = L"label84";
            this->label84->Size = System::Drawing::Size(54, 20);
            this->label84->TabIndex = 1;
            this->label84->Text = L"Area:";
            // 
            // label85
            // 
            this->label85->AutoSize = true;
            this->label85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label85->ForeColor = System::Drawing::Color::White;
            this->label85->Location = System::Drawing::Point(337, 75);
            this->label85->Name = L"label85";
            this->label85->Size = System::Drawing::Size(59, 20);
            this->label85->TabIndex = 1;
            this->label85->Text = L"Price:";
            // 
            // Moderate_users_panel
            // 
            this->Moderate_users_panel->Controls->Add(this->Search_textbox);
            this->Moderate_users_panel->Controls->Add(this->label103);
            this->Moderate_users_panel->Controls->Add(this->user_details);
            this->Moderate_users_panel->Controls->Add(this->panel6);
            this->Moderate_users_panel->Controls->Add(this->panel5);
            this->Moderate_users_panel->Controls->Add(this->pictureBox2);
            this->Moderate_users_panel->Controls->Add(this->Search_combobox);
            this->Moderate_users_panel->Controls->Add(this->pictureBox9);
            this->Moderate_users_panel->Location = System::Drawing::Point(3, 88);
            this->Moderate_users_panel->Name = L"Moderate_users_panel";
            this->Moderate_users_panel->Size = System::Drawing::Size(974, 622);
            this->Moderate_users_panel->TabIndex = 3;
            this->Moderate_users_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Moderate_users_panel_Paint);
            // 
            // Search_textbox
            // 
            this->Search_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->Search_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Search_textbox->ForeColor = System::Drawing::Color::SlateGray;
            this->Search_textbox->Location = System::Drawing::Point(303, 15);
            this->Search_textbox->Name = L"Search_textbox";
            this->Search_textbox->Size = System::Drawing::Size(365, 19);
            this->Search_textbox->TabIndex = 1;
            this->Search_textbox->TextChanged += gcnew System::EventHandler(this, &AdminForm::Search_textbox_TextChanged);
            // 
            // label103
            // 
            this->label103->AutoSize = true;
            this->label103->BackColor = System::Drawing::Color::White;
            this->label103->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
            this->label103->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->label103->Location = System::Drawing::Point(282, 9);
            this->label103->Name = L"label103";
            this->label103->Size = System::Drawing::Size(23, 30);
            this->label103->TabIndex = 21;
            this->label103->Text = L"|";
            // 
            // user_details
            // 
            this->user_details->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->user_details->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->user_details->Controls->Add(this->label104);
            this->user_details->Controls->Add(this->label96);
            this->user_details->Controls->Add(this->label97);
            this->user_details->Controls->Add(this->label102);
            this->user_details->Controls->Add(this->label98);
            this->user_details->Controls->Add(this->label99);
            this->user_details->Controls->Add(this->label100);
            this->user_details->Controls->Add(this->label101);
            this->user_details->Controls->Add(this->button12);
            this->user_details->Controls->Add(this->label105);
            this->user_details->Controls->Add(this->label107);
            this->user_details->Controls->Add(this->label109);
            this->user_details->Controls->Add(this->label110);
            this->user_details->Controls->Add(this->label111);
            this->user_details->Controls->Add(this->label112);
            this->user_details->Controls->Add(this->label113);
            this->user_details->Location = System::Drawing::Point(152, 103);
            this->user_details->Name = L"user_details";
            this->user_details->Size = System::Drawing::Size(662, 482);
            this->user_details->TabIndex = 20;
            this->user_details->Visible = false;
            // 
            // label104
            // 
            this->label104->AutoSize = true;
            this->label104->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label104->ForeColor = System::Drawing::Color::LightGray;
            this->label104->Location = System::Drawing::Point(223, 10);
            this->label104->Name = L"label104";
            this->label104->Size = System::Drawing::Size(208, 38);
            this->label104->TabIndex = 1;
            this->label104->Text = L"User Details";
            // 
            // label96
            // 
            this->label96->AutoSize = true;
            this->label96->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label96->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label96->Location = System::Drawing::Point(351, 102);
            this->label96->Name = L"label96";
            this->label96->Size = System::Drawing::Size(85, 17);
            this->label96->TabIndex = 8;
            this->label96->Text = L"Place_holder";
            // 
            // label97
            // 
            this->label97->AutoSize = true;
            this->label97->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label97->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label97->Location = System::Drawing::Point(351, 246);
            this->label97->Name = L"label97";
            this->label97->Size = System::Drawing::Size(85, 17);
            this->label97->TabIndex = 8;
            this->label97->Text = L"Place_holder";
            this->label97->Click += gcnew System::EventHandler(this, &AdminForm::label97_Click);
            // 
            // label102
            // 
            this->label102->AutoSize = true;
            this->label102->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label102->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label102->Location = System::Drawing::Point(71, 327);
            this->label102->Name = L"label102";
            this->label102->Size = System::Drawing::Size(85, 17);
            this->label102->TabIndex = 8;
            this->label102->Text = L"Place_holder";
            // 
            // label98
            // 
            this->label98->AutoSize = true;
            this->label98->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label98->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label98->Location = System::Drawing::Point(70, 246);
            this->label98->Name = L"label98";
            this->label98->Size = System::Drawing::Size(85, 17);
            this->label98->TabIndex = 8;
            this->label98->Text = L"Place_holder";
            // 
            // label99
            // 
            this->label99->AutoSize = true;
            this->label99->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label99->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label99->Location = System::Drawing::Point(351, 177);
            this->label99->Name = L"label99";
            this->label99->Size = System::Drawing::Size(85, 17);
            this->label99->TabIndex = 8;
            this->label99->Text = L"Place_holder";
            // 
            // label100
            // 
            this->label100->AutoSize = true;
            this->label100->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label100->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label100->Location = System::Drawing::Point(70, 177);
            this->label100->Name = L"label100";
            this->label100->Size = System::Drawing::Size(85, 17);
            this->label100->TabIndex = 8;
            this->label100->Text = L"Place_holder";
            // 
            // label101
            // 
            this->label101->AutoSize = true;
            this->label101->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label101->ForeColor = System::Drawing::Color::PaleGoldenrod;
            this->label101->Location = System::Drawing::Point(70, 102);
            this->label101->Name = L"label101";
            this->label101->Size = System::Drawing::Size(85, 17);
            this->label101->TabIndex = 8;
            this->label101->Text = L"Place_holder";
            // 
            // button12
            // 
            this->button12->BackColor = System::Drawing::Color::CadetBlue;
            this->button12->FlatAppearance->BorderSize = 0;
            this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button12->Location = System::Drawing::Point(263, 420);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(142, 44);
            this->button12->TabIndex = 7;
            this->button12->Text = L"Close";
            this->button12->UseVisualStyleBackColor = false;
            this->button12->Click += gcnew System::EventHandler(this, &AdminForm::button12_Click);
            // 
            // label105
            // 
            this->label105->AutoSize = true;
            this->label105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label105->ForeColor = System::Drawing::Color::White;
            this->label105->Location = System::Drawing::Point(54, 300);
            this->label105->Name = L"label105";
            this->label105->Size = System::Drawing::Size(83, 20);
            this->label105->TabIndex = 1;
            this->label105->Text = L"Balance:";
            // 
            // label107
            // 
            this->label107->AutoSize = true;
            this->label107->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label107->ForeColor = System::Drawing::Color::White;
            this->label107->Location = System::Drawing::Point(57, 214);
            this->label107->Name = L"label107";
            this->label107->Size = System::Drawing::Size(186, 20);
            this->label107->TabIndex = 1;
            this->label107->Text = L"Properties in Market:";
            // 
            // label109
            // 
            this->label109->AutoSize = true;
            this->label109->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label109->ForeColor = System::Drawing::Color::White;
            this->label109->Location = System::Drawing::Point(337, 145);
            this->label109->Name = L"label109";
            this->label109->Size = System::Drawing::Size(67, 20);
            this->label109->TabIndex = 1;
            this->label109->Text = L"Phone:";
            // 
            // label110
            // 
            this->label110->AutoSize = true;
            this->label110->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label110->ForeColor = System::Drawing::Color::White;
            this->label110->Location = System::Drawing::Point(58, 145);
            this->label110->Name = L"label110";
            this->label110->Size = System::Drawing::Size(62, 20);
            this->label110->TabIndex = 1;
            this->label110->Text = L"Email:";
            // 
            // label111
            // 
            this->label111->AutoSize = true;
            this->label111->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label111->ForeColor = System::Drawing::Color::White;
            this->label111->Location = System::Drawing::Point(337, 214);
            this->label111->Name = L"label111";
            this->label111->Size = System::Drawing::Size(161, 20);
            this->label111->TabIndex = 1;
            this->label111->Text = L"Bought Properties";
            // 
            // label112
            // 
            this->label112->AutoSize = true;
            this->label112->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label112->ForeColor = System::Drawing::Color::White;
            this->label112->Location = System::Drawing::Point(54, 75);
            this->label112->Name = L"label112";
            this->label112->Size = System::Drawing::Size(63, 20);
            this->label112->TabIndex = 1;
            this->label112->Text = L"Name:";
            // 
            // label113
            // 
            this->label113->AutoSize = true;
            this->label113->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label113->ForeColor = System::Drawing::Color::White;
            this->label113->Location = System::Drawing::Point(337, 75);
            this->label113->Name = L"label113";
            this->label113->Size = System::Drawing::Size(30, 20);
            this->label113->TabIndex = 1;
            this->label113->Text = L"Id:";
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->panel6->Controls->Add(this->button14);
            this->panel6->Controls->Add(this->pictureBox24);
            this->panel6->Controls->Add(this->label54);
            this->panel6->Controls->Add(this->label55);
            this->panel6->Controls->Add(this->label56);
            this->panel6->Controls->Add(this->label57);
            this->panel6->Controls->Add(this->label58);
            this->panel6->Controls->Add(this->label59);
            this->panel6->Controls->Add(this->label60);
            this->panel6->Controls->Add(this->label61);
            this->panel6->Location = System::Drawing::Point(158, 219);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(682, 119);
            this->panel6->TabIndex = 4;
            // 
            // button14
            // 
            this->button14->BackColor = System::Drawing::Color::CadetBlue;
            this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button14->FlatAppearance->BorderSize = 0;
            this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button14->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button14->Location = System::Drawing::Point(572, 11);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(97, 30);
            this->button14->TabIndex = 19;
            this->button14->Text = L"DETAILS";
            this->button14->UseVisualStyleBackColor = false;
            // 
            // pictureBox24
            // 
            this->pictureBox24->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
            this->pictureBox24->Location = System::Drawing::Point(575, 48);
            this->pictureBox24->Name = L"pictureBox24";
            this->pictureBox24->Size = System::Drawing::Size(82, 67);
            this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox24->TabIndex = 1;
            this->pictureBox24->TabStop = false;
            // 
            // label54
            // 
            this->label54->AutoSize = true;
            this->label54->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label54->ForeColor = System::Drawing::Color::White;
            this->label54->Location = System::Drawing::Point(377, 70);
            this->label54->Name = L"label54";
            this->label54->Size = System::Drawing::Size(81, 21);
            this->label54->TabIndex = 3;
            this->label54->Text = L"$10,000";
            // 
            // label55
            // 
            this->label55->AutoSize = true;
            this->label55->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label55->ForeColor = System::Drawing::Color::White;
            this->label55->Location = System::Drawing::Point(364, 21);
            this->label55->Name = L"label55";
            this->label55->Size = System::Drawing::Size(172, 21);
            this->label55->TabIndex = 3;
            this->label55->Text = L"mostafa@gmail.com";
            // 
            // label56
            // 
            this->label56->AutoSize = true;
            this->label56->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label56->ForeColor = System::Drawing::Color::White;
            this->label56->Location = System::Drawing::Point(77, 21);
            this->label56->Name = L"label56";
            this->label56->Size = System::Drawing::Size(147, 21);
            this->label56->TabIndex = 3;
            this->label56->Text = L"Mostafa (Frozen)";
            // 
            // label57
            // 
            this->label57->AutoSize = true;
            this->label57->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label57->ForeColor = System::Drawing::Color::White;
            this->label57->Location = System::Drawing::Point(303, 70);
            this->label57->Name = L"label57";
            this->label57->Size = System::Drawing::Size(78, 21);
            this->label57->TabIndex = 3;
            this->label57->Text = L"Balance:";
            // 
            // label58
            // 
            this->label58->AutoSize = true;
            this->label58->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label58->ForeColor = System::Drawing::Color::White;
            this->label58->Location = System::Drawing::Point(41, 69);
            this->label58->Name = L"label58";
            this->label58->Size = System::Drawing::Size(28, 21);
            this->label58->TabIndex = 3;
            this->label58->Text = L"10";
            // 
            // label59
            // 
            this->label59->AutoSize = true;
            this->label59->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label59->ForeColor = System::Drawing::Color::White;
            this->label59->Location = System::Drawing::Point(303, 21);
            this->label59->Name = L"label59";
            this->label59->Size = System::Drawing::Size(61, 21);
            this->label59->TabIndex = 3;
            this->label59->Text = L"Email: ";
            // 
            // label60
            // 
            this->label60->AutoSize = true;
            this->label60->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label60->ForeColor = System::Drawing::Color::White;
            this->label60->Location = System::Drawing::Point(15, 69);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(32, 21);
            this->label60->TabIndex = 3;
            this->label60->Text = L"Id: ";
            // 
            // label61
            // 
            this->label61->AutoSize = true;
            this->label61->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label61->ForeColor = System::Drawing::Color::White;
            this->label61->Location = System::Drawing::Point(15, 20);
            this->label61->Name = L"label61";
            this->label61->Size = System::Drawing::Size(64, 21);
            this->label61->TabIndex = 3;
            this->label61->Text = L"Name: ";
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
                static_cast<System::Int32>(static_cast<System::Byte>(105)));
            this->panel5->Controls->Add(this->button13);
            this->panel5->Controls->Add(this->pictureBox23);
            this->panel5->Controls->Add(this->label46);
            this->panel5->Controls->Add(this->label47);
            this->panel5->Controls->Add(this->label48);
            this->panel5->Controls->Add(this->label49);
            this->panel5->Controls->Add(this->label50);
            this->panel5->Controls->Add(this->label51);
            this->panel5->Controls->Add(this->label52);
            this->panel5->Controls->Add(this->label53);
            this->panel5->Location = System::Drawing::Point(158, 73);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(682, 119);
            this->panel5->TabIndex = 4;
            // 
            // button13
            // 
            this->button13->BackColor = System::Drawing::Color::CadetBlue;
            this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button13->FlatAppearance->BorderSize = 0;
            this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button13->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button13->Location = System::Drawing::Point(565, 8);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(97, 30);
            this->button13->TabIndex = 18;
            this->button13->Text = L"DETAILS";
            this->button13->UseVisualStyleBackColor = false;
            // 
            // pictureBox23
            // 
            this->pictureBox23->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
            this->pictureBox23->Location = System::Drawing::Point(575, 48);
            this->pictureBox23->Name = L"pictureBox23";
            this->pictureBox23->Size = System::Drawing::Size(82, 67);
            this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox23->TabIndex = 1;
            this->pictureBox23->TabStop = false;
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->ForeColor = System::Drawing::Color::White;
            this->label46->Location = System::Drawing::Point(377, 70);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(81, 21);
            this->label46->TabIndex = 3;
            this->label46->Text = L"$10,000";
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->ForeColor = System::Drawing::Color::White;
            this->label47->Location = System::Drawing::Point(364, 21);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(172, 21);
            this->label47->TabIndex = 3;
            this->label47->Text = L"mostafa@gmail.com";
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->ForeColor = System::Drawing::Color::White;
            this->label48->Location = System::Drawing::Point(77, 21);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(150, 21);
            this->label48->TabIndex = 3;
            this->label48->Text = L"Mostafa (Normal)";
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->ForeColor = System::Drawing::Color::White;
            this->label49->Location = System::Drawing::Point(303, 70);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(78, 21);
            this->label49->TabIndex = 3;
            this->label49->Text = L"Balance:";
            // 
            // label50
            // 
            this->label50->AutoSize = true;
            this->label50->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label50->ForeColor = System::Drawing::Color::White;
            this->label50->Location = System::Drawing::Point(41, 69);
            this->label50->Name = L"label50";
            this->label50->Size = System::Drawing::Size(28, 21);
            this->label50->TabIndex = 3;
            this->label50->Text = L"10";
            // 
            // label51
            // 
            this->label51->AutoSize = true;
            this->label51->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->ForeColor = System::Drawing::Color::White;
            this->label51->Location = System::Drawing::Point(303, 21);
            this->label51->Name = L"label51";
            this->label51->Size = System::Drawing::Size(61, 21);
            this->label51->TabIndex = 3;
            this->label51->Text = L"Email: ";
            // 
            // label52
            // 
            this->label52->AutoSize = true;
            this->label52->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label52->ForeColor = System::Drawing::Color::White;
            this->label52->Location = System::Drawing::Point(15, 69);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(32, 21);
            this->label52->TabIndex = 3;
            this->label52->Text = L"Id: ";
            // 
            // label53
            // 
            this->label53->AutoSize = true;
            this->label53->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label53->ForeColor = System::Drawing::Color::White;
            this->label53->Location = System::Drawing::Point(15, 20);
            this->label53->Name = L"label53";
            this->label53->Size = System::Drawing::Size(64, 21);
            this->label53->TabIndex = 3;
            this->label53->Text = L"Name: ";
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::White;
            this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(717, 8);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(42, 33);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 3;
            this->pictureBox2->TabStop = false;
            // 
            // Search_combobox
            // 
            this->Search_combobox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Search_combobox->FormattingEnabled = true;
            this->Search_combobox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Email", L"Name" });
            this->Search_combobox->Location = System::Drawing::Point(229, 12);
            this->Search_combobox->Name = L"Search_combobox";
            this->Search_combobox->Size = System::Drawing::Size(58, 24);
            this->Search_combobox->TabIndex = 2;
            this->Search_combobox->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::comboBox1_SelectedIndexChanged);
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(215, 5);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(561, 39);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox9->TabIndex = 0;
            this->pictureBox9->TabStop = false;
            // 
            // Requests_panel
            // 
            this->Requests_panel->Controls->Add(this->panel4);
            this->Requests_panel->Location = System::Drawing::Point(3, 88);
            this->Requests_panel->Name = L"Requests_panel";
            this->Requests_panel->Size = System::Drawing::Size(979, 609);
            this->Requests_panel->TabIndex = 9;
            this->Requests_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Requests_panel_Paint);
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->panel4->Controls->Add(this->label38);
            this->panel4->Controls->Add(this->label39);
            this->panel4->Controls->Add(this->label40);
            this->panel4->Controls->Add(this->label41);
            this->panel4->Controls->Add(this->button7);
            this->panel4->Controls->Add(this->label42);
            this->panel4->Controls->Add(this->label43);
            this->panel4->Controls->Add(this->label44);
            this->panel4->Controls->Add(this->button8);
            this->panel4->Controls->Add(this->label45);
            this->panel4->Controls->Add(this->button9);
            this->panel4->Location = System::Drawing::Point(161, 58);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(682, 119);
            this->panel4->TabIndex = 2;
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->ForeColor = System::Drawing::Color::White;
            this->label38->Location = System::Drawing::Point(414, 72);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(81, 21);
            this->label38->TabIndex = 3;
            this->label38->Text = L"$10,000";
            this->label38->Click += gcnew System::EventHandler(this, &AdminForm::label38_Click);
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->ForeColor = System::Drawing::Color::White;
            this->label39->Location = System::Drawing::Point(415, 23);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(45, 21);
            this->label39->TabIndex = 3;
            this->label39->Text = L"Villa";
            this->label39->Click += gcnew System::EventHandler(this, &AdminForm::label39_Click);
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->ForeColor = System::Drawing::Color::White;
            this->label40->Location = System::Drawing::Point(135, 20);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(77, 21);
            this->label40->TabIndex = 3;
            this->label40->Text = L"Mostafa";
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->ForeColor = System::Drawing::Color::White;
            this->label41->Location = System::Drawing::Point(354, 72);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(54, 21);
            this->label41->TabIndex = 3;
            this->label41->Text = L"Price:";
            this->label41->Click += gcnew System::EventHandler(this, &AdminForm::label41_Click);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::Crimson;
            this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button7->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button7->Location = System::Drawing::Point(572, 81);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(99, 30);
            this->button7->TabIndex = 17;
            this->button7->Text = L"REJECT";
            this->button7->UseVisualStyleBackColor = false;
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->ForeColor = System::Drawing::Color::White;
            this->label42->Location = System::Drawing::Point(41, 69);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(28, 21);
            this->label42->TabIndex = 3;
            this->label42->Text = L"10";
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->ForeColor = System::Drawing::Color::White;
            this->label43->Location = System::Drawing::Point(354, 23);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(58, 21);
            this->label43->TabIndex = 3;
            this->label43->Text = L"Type: ";
            this->label43->Click += gcnew System::EventHandler(this, &AdminForm::label43_Click);
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->ForeColor = System::Drawing::Color::White;
            this->label44->Location = System::Drawing::Point(15, 69);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(32, 21);
            this->label44->TabIndex = 3;
            this->label44->Text = L"Id: ";
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::MediumSeaGreen;
            this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button8->Location = System::Drawing::Point(572, 46);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(97, 30);
            this->button8->TabIndex = 16;
            this->button8->Text = L"APPROVE";
            this->button8->UseVisualStyleBackColor = false;
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->ForeColor = System::Drawing::Color::White;
            this->label45->Location = System::Drawing::Point(15, 20);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(123, 21);
            this->label45->TabIndex = 3;
            this->label45->Text = L"Owner Name: ";
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::CadetBlue;
            this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button9->FlatAppearance->BorderSize = 0;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button9->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button9->Location = System::Drawing::Point(572, 9);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(97, 30);
            this->button9->TabIndex = 15;
            this->button9->Text = L"DETAILS";
            this->button9->UseVisualStyleBackColor = false;
            // 
            // Add_admin_panel
            // 
            this->Add_admin_panel->Controls->Add(this->button1);
            this->Add_admin_panel->Controls->Add(this->addAdminButton);
            this->Add_admin_panel->Controls->Add(this->phoneTextBox);
            this->Add_admin_panel->Controls->Add(this->passwordTextBox);
            this->Add_admin_panel->Controls->Add(this->emailTextBox);
            this->Add_admin_panel->Controls->Add(this->nameTextBox);
            this->Add_admin_panel->Controls->Add(this->label7);
            this->Add_admin_panel->Controls->Add(this->label6);
            this->Add_admin_panel->Controls->Add(this->label5);
            this->Add_admin_panel->Controls->Add(this->label4);
            this->Add_admin_panel->Controls->Add(this->label1);
            this->Add_admin_panel->Controls->Add(this->pictureBox19);
            this->Add_admin_panel->Location = System::Drawing::Point(2, 83);
            this->Add_admin_panel->Name = L"Add_admin_panel";
            this->Add_admin_panel->Size = System::Drawing::Size(977, 608);
            this->Add_admin_panel->TabIndex = 10;
            this->Add_admin_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Add_admin_panel_Paint);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::CadetBlue;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button1->Location = System::Drawing::Point(761, 470);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(161, 61);
            this->button1->TabIndex = 8;
            this->button1->Text = L"Clear";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
            // 
            // addAdminButton
            // 
            this->addAdminButton->BackColor = System::Drawing::Color::CadetBlue;
            this->addAdminButton->FlatAppearance->BorderSize = 0;
            this->addAdminButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->addAdminButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->addAdminButton->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->addAdminButton->Location = System::Drawing::Point(568, 470);
            this->addAdminButton->Name = L"addAdminButton";
            this->addAdminButton->Size = System::Drawing::Size(161, 61);
            this->addAdminButton->TabIndex = 8;
            this->addAdminButton->Text = L"ADD";
            this->addAdminButton->UseVisualStyleBackColor = false;
            this->addAdminButton->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click);
            // 
            // phoneTextBox
            // 
            this->phoneTextBox->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold));
            this->phoneTextBox->Location = System::Drawing::Point(105, 507);
            this->phoneTextBox->Name = L"phoneTextBox";
            this->phoneTextBox->Size = System::Drawing::Size(327, 28);
            this->phoneTextBox->TabIndex = 1;
            // 
            // passwordTextBox
            // 
            this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold));
            this->passwordTextBox->Location = System::Drawing::Point(105, 390);
            this->passwordTextBox->Name = L"passwordTextBox";
            this->passwordTextBox->Size = System::Drawing::Size(327, 28);
            this->passwordTextBox->TabIndex = 1;
            // 
            // emailTextBox
            // 
            this->emailTextBox->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold));
            this->emailTextBox->Location = System::Drawing::Point(105, 266);
            this->emailTextBox->Name = L"emailTextBox";
            this->emailTextBox->Size = System::Drawing::Size(327, 28);
            this->emailTextBox->TabIndex = 1;
            // 
            // nameTextBox
            // 
            this->nameTextBox->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nameTextBox->Location = System::Drawing::Point(105, 158);
            this->nameTextBox->Name = L"nameTextBox";
            this->nameTextBox->Size = System::Drawing::Size(327, 28);
            this->nameTextBox->TabIndex = 1;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 13.8F, System::Drawing::FontStyle::Bold));
            this->label7->ForeColor = System::Drawing::Color::White;
            this->label7->Location = System::Drawing::Point(69, 455);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(91, 28);
            this->label7->TabIndex = 0;
            this->label7->Text = L"Phone: ";
            this->label7->Click += gcnew System::EventHandler(this, &AdminForm::label4_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 13.8F, System::Drawing::FontStyle::Bold));
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(69, 335);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(132, 28);
            this->label6->TabIndex = 0;
            this->label6->Text = L"Password: ";
            this->label6->Click += gcnew System::EventHandler(this, &AdminForm::label4_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 13.8F, System::Drawing::FontStyle::Bold));
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(69, 214);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(81, 28);
            this->label5->TabIndex = 0;
            this->label5->Text = L"Email: ";
            this->label5->Click += gcnew System::EventHandler(this, &AdminForm::label4_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(69, 105);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(86, 28);
            this->label4->TabIndex = 0;
            this->label4->Text = L"Name: ";
            this->label4->Click += gcnew System::EventHandler(this, &AdminForm::label4_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(301, 23);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(343, 52);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Add New Admin";
            // 
            // pictureBox19
            // 
            this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
            this->pictureBox19->Location = System::Drawing::Point(592, 132);
            this->pictureBox19->Name = L"pictureBox19";
            this->pictureBox19->Size = System::Drawing::Size(330, 310);
            this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox19->TabIndex = 9;
            this->pictureBox19->TabStop = false;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::White;
            this->label9->Location = System::Drawing::Point(55, 90);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(95, 31);
            this->label9->TabIndex = 26;
            this->label9->Text = L"Name: ";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold));
            this->label8->ForeColor = System::Drawing::Color::White;
            this->label8->Location = System::Drawing::Point(55, 198);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(90, 31);
            this->label8->TabIndex = 25;
            this->label8->Text = L"Email: ";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(51, 302);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(101, 31);
            this->label2->TabIndex = 21;
            this->label2->Text = L"Phone: ";
            // 
            // label90
            // 
            this->label90->AutoSize = true;
            this->label90->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold));
            this->label90->ForeColor = System::Drawing::Color::White;
            this->label90->Location = System::Drawing::Point(55, 405);
            this->label90->Name = L"label90";
            this->label90->Size = System::Drawing::Size(139, 31);
            this->label90->TabIndex = 23;
            this->label90->Text = L"Password:";
            // 
            // user_password
            // 
            this->user_password->AutoSize = true;
            this->user_password->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold));
            this->user_password->ForeColor = System::Drawing::Color::White;
            this->user_password->Location = System::Drawing::Point(200, 408);
            this->user_password->Name = L"user_password";
            this->user_password->Size = System::Drawing::Size(131, 31);
            this->user_password->TabIndex = 24;
            this->user_password->Text = L"*************";
            this->user_password->Click += gcnew System::EventHandler(this, &AdminForm::user_password_Click);
            // 
            // user_name
            // 
            this->user_name->AutoSize = true;
            this->user_name->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold));
            this->user_name->ForeColor = System::Drawing::Color::White;
            this->user_name->Location = System::Drawing::Point(151, 90);
            this->user_name->Name = L"user_name";
            this->user_name->Size = System::Drawing::Size(155, 31);
            this->user_name->TabIndex = 20;
            this->user_name->Text = L"Placeholder";
            // 
            // user_email
            // 
            this->user_email->AutoSize = true;
            this->user_email->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold));
            this->user_email->ForeColor = System::Drawing::Color::White;
            this->user_email->Location = System::Drawing::Point(151, 198);
            this->user_email->Name = L"user_email";
            this->user_email->Size = System::Drawing::Size(155, 31);
            this->user_email->TabIndex = 19;
            this->user_email->Text = L"Placeholder";
            // 
            // user_phone
            // 
            this->user_phone->AutoSize = true;
            this->user_phone->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold));
            this->user_phone->ForeColor = System::Drawing::Color::White;
            this->user_phone->Location = System::Drawing::Point(151, 302);
            this->user_phone->Name = L"user_phone";
            this->user_phone->Size = System::Drawing::Size(155, 31);
            this->user_phone->TabIndex = 17;
            this->user_phone->Text = L"Placeholder";
            // 
            // EditFieldPanel
            // 
            this->EditFieldPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
                static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->EditFieldPanel->Controls->Add(this->save_edit);
            this->EditFieldPanel->Controls->Add(this->button3);
            this->EditFieldPanel->Controls->Add(this->label89);
            this->EditFieldPanel->Controls->Add(this->editBox);
            this->EditFieldPanel->Controls->Add(this->editLabel);
            this->EditFieldPanel->Location = System::Drawing::Point(475, 136);
            this->EditFieldPanel->Name = L"EditFieldPanel";
            this->EditFieldPanel->Size = System::Drawing::Size(453, 264);
            this->EditFieldPanel->TabIndex = 30;
            // 
            // save_edit
            // 
            this->save_edit->BackColor = System::Drawing::Color::CadetBlue;
            this->save_edit->FlatAppearance->BorderSize = 0;
            this->save_edit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->save_edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->save_edit->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->save_edit->Location = System::Drawing::Point(284, 204);
            this->save_edit->Name = L"save_edit";
            this->save_edit->Size = System::Drawing::Size(141, 44);
            this->save_edit->TabIndex = 42;
            this->save_edit->Text = L"SAVE";
            this->save_edit->UseVisualStyleBackColor = false;
            this->save_edit->Click += gcnew System::EventHandler(this, &AdminForm::save_edit_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::CadetBlue;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->button3->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->button3->Location = System::Drawing::Point(39, 204);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(141, 44);
            this->button3->TabIndex = 41;
            this->button3->Text = L"CANCEL";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
            // 
            // label89
            // 
            this->label89->AutoSize = true;
            this->label89->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label89->ForeColor = System::Drawing::Color::White;
            this->label89->Location = System::Drawing::Point(185, 22);
            this->label89->Name = L"label89";
            this->label89->Size = System::Drawing::Size(61, 31);
            this->label89->TabIndex = 15;
            this->label89->Text = L"Edit";
            // 
            // editBox
            // 
            this->editBox->Location = System::Drawing::Point(166, 125);
            this->editBox->Name = L"editBox";
            this->editBox->Size = System::Drawing::Size(250, 24);
            this->editBox->TabIndex = 11;
            this->editBox->TextChanged += gcnew System::EventHandler(this, &AdminForm::editBox_TextChanged);
            // 
            // editLabel
            // 
            this->editLabel->AutoSize = true;
            this->editLabel->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->editLabel->ForeColor = System::Drawing::Color::White;
            this->editLabel->Location = System::Drawing::Point(32, 122);
            this->editLabel->Name = L"editLabel";
            this->editLabel->Size = System::Drawing::Size(95, 31);
            this->editLabel->TabIndex = 10;
            this->editLabel->Text = L"Name: ";
            // 
            // pictureBox27
            // 
            this->pictureBox27->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
            this->pictureBox27->Location = System::Drawing::Point(352, 81);
            this->pictureBox27->Name = L"pictureBox27";
            this->pictureBox27->Size = System::Drawing::Size(80, 47);
            this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox27->TabIndex = 34;
            this->pictureBox27->TabStop = false;
            this->pictureBox27->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox27_Click);
            // 
            // change_password_panel
            // 
            this->change_password_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
                static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
            this->change_password_panel->Controls->Add(this->save_pass);
            this->change_password_panel->Controls->Add(this->cancel_pass);
            this->change_password_panel->Controls->Add(this->new_pass);
            this->change_password_panel->Controls->Add(this->label_new_pass);
            this->change_password_panel->Controls->Add(this->label92);
            this->change_password_panel->Controls->Add(this->old_pass);
            this->change_password_panel->Controls->Add(this->label93);
            this->change_password_panel->Location = System::Drawing::Point(465, 151);
            this->change_password_panel->Name = L"change_password_panel";
            this->change_password_panel->Size = System::Drawing::Size(453, 288);
            this->change_password_panel->TabIndex = 33;
            // 
            // save_pass
            // 
            this->save_pass->BackColor = System::Drawing::Color::CadetBlue;
            this->save_pass->FlatAppearance->BorderSize = 0;
            this->save_pass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->save_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->save_pass->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->save_pass->Location = System::Drawing::Point(285, 232);
            this->save_pass->Name = L"save_pass";
            this->save_pass->Size = System::Drawing::Size(141, 44);
            this->save_pass->TabIndex = 39;
            this->save_pass->Text = L"SAVE";
            this->save_pass->UseVisualStyleBackColor = false;
            this->save_pass->Click += gcnew System::EventHandler(this, &AdminForm::save_pass_Click);
            // 
            // cancel_pass
            // 
            this->cancel_pass->BackColor = System::Drawing::Color::CadetBlue;
            this->cancel_pass->FlatAppearance->BorderSize = 0;
            this->cancel_pass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->cancel_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold));
            this->cancel_pass->ForeColor = System::Drawing::Color::WhiteSmoke;
            this->cancel_pass->Location = System::Drawing::Point(41, 234);
            this->cancel_pass->Name = L"cancel_pass";
            this->cancel_pass->Size = System::Drawing::Size(141, 44);
            this->cancel_pass->TabIndex = 38;
            this->cancel_pass->Text = L"CANCEL";
            this->cancel_pass->UseVisualStyleBackColor = false;
            this->cancel_pass->Click += gcnew System::EventHandler(this, &AdminForm::cancel_pass_Click);
            // 
            // new_pass
            // 
            this->new_pass->Location = System::Drawing::Point(234, 163);
            this->new_pass->Name = L"new_pass";
            this->new_pass->Size = System::Drawing::Size(197, 24);
            this->new_pass->TabIndex = 17;
            // 
            // label_new_pass
            // 
            this->label_new_pass->AutoSize = true;
            this->label_new_pass->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label_new_pass->ForeColor = System::Drawing::Color::White;
            this->label_new_pass->Location = System::Drawing::Point(26, 162);
            this->label_new_pass->Name = L"label_new_pass";
            this->label_new_pass->Size = System::Drawing::Size(200, 31);
            this->label_new_pass->TabIndex = 16;
            this->label_new_pass->Text = L"New Password:";
            // 
            // label92
            // 
            this->label92->AutoSize = true;
            this->label92->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label92->ForeColor = System::Drawing::Color::White;
            this->label92->Location = System::Drawing::Point(120, 21);
            this->label92->Name = L"label92";
            this->label92->Size = System::Drawing::Size(229, 31);
            this->label92->TabIndex = 15;
            this->label92->Text = L"Change Password";
            // 
            // old_pass
            // 
            this->old_pass->Location = System::Drawing::Point(234, 97);
            this->old_pass->Name = L"old_pass";
            this->old_pass->Size = System::Drawing::Size(197, 24);
            this->old_pass->TabIndex = 11;
            // 
            // label93
            // 
            this->label93->AutoSize = true;
            this->label93->Font = (gcnew System::Drawing::Font(L"Nexa Bold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label93->ForeColor = System::Drawing::Color::White;
            this->label93->Location = System::Drawing::Point(27, 94);
            this->label93->Name = L"label93";
            this->label93->Size = System::Drawing::Size(185, 31);
            this->label93->TabIndex = 10;
            this->label93->Text = L"Old Password:";
            // 
            // Profile_panel
            // 
            this->Profile_panel->Controls->Add(this->pictureBox30);
            this->Profile_panel->Controls->Add(this->pictureBox29);
            this->Profile_panel->Controls->Add(this->pictureBox28);
            this->Profile_panel->Controls->Add(this->pictureBox27);
            this->Profile_panel->Controls->Add(this->user_phone);
            this->Profile_panel->Controls->Add(this->user_email);
            this->Profile_panel->Controls->Add(this->user_name);
            this->Profile_panel->Controls->Add(this->user_password);
            this->Profile_panel->Controls->Add(this->label90);
            this->Profile_panel->Controls->Add(this->label2);
            this->Profile_panel->Controls->Add(this->label8);
            this->Profile_panel->Controls->Add(this->label9);
            this->Profile_panel->Controls->Add(this->change_password_panel);
            this->Profile_panel->Controls->Add(this->EditFieldPanel);
            this->Profile_panel->Location = System::Drawing::Point(4, 88);
            this->Profile_panel->Name = L"Profile_panel";
            this->Profile_panel->Size = System::Drawing::Size(979, 606);
            this->Profile_panel->TabIndex = 11;
            this->Profile_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::Profile_panel_Paint);
            // 
            // pictureBox30
            // 
            this->pictureBox30->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
            this->pictureBox30->Location = System::Drawing::Point(352, 384);
            this->pictureBox30->Name = L"pictureBox30";
            this->pictureBox30->Size = System::Drawing::Size(80, 47);
            this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox30->TabIndex = 38;
            this->pictureBox30->TabStop = false;
            this->pictureBox30->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox30_Click);
            // 
            // pictureBox29
            // 
            this->pictureBox29->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
            this->pictureBox29->Location = System::Drawing::Point(350, 288);
            this->pictureBox29->Name = L"pictureBox29";
            this->pictureBox29->Size = System::Drawing::Size(80, 47);
            this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox29->TabIndex = 36;
            this->pictureBox29->TabStop = false;
            this->pictureBox29->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox29_Click);
            // 
            // pictureBox28
            // 
            this->pictureBox28->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
            this->pictureBox28->Location = System::Drawing::Point(350, 182);
            this->pictureBox28->Name = L"pictureBox28";
            this->pictureBox28->Size = System::Drawing::Size(80, 47);
            this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox28->TabIndex = 35;
            this->pictureBox28->TabStop = false;
            this->pictureBox28->Click += gcnew System::EventHandler(this, &AdminForm::pictureBox28_Click);
            // 
            // AdminForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(65)));
            this->ClientSize = System::Drawing::Size(977, 705);
            this->Controls->Add(this->Navigationbar_panel);
            this->Controls->Add(this->Profile_panel);
            this->Controls->Add(this->Moderate_users_panel);
            this->Controls->Add(this->Add_admin_panel);
            this->Controls->Add(this->Dashboard_panel);
            this->Controls->Add(this->Browse_panel);
            this->Controls->Add(this->Requests_panel);
            this->Name = L"AdminForm";
            this->Text = L"AdminForm";
            this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
            this->Navigationbar_panel->ResumeLayout(false);
            this->Navigationbar_panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->Dashboard_panel->ResumeLayout(false);
            this->Dashboard_panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->Browse_panel->ResumeLayout(false);
            this->Details_Panel->ResumeLayout(false);
            this->Details_Panel->PerformLayout();
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBedrooms))->EndInit();
            this->Edit_property->ResumeLayout(false);
            this->Edit_property->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            this->Moderate_users_panel->ResumeLayout(false);
            this->Moderate_users_panel->PerformLayout();
            this->user_details->ResumeLayout(false);
            this->user_details->PerformLayout();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->Requests_panel->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->Add_admin_panel->ResumeLayout(false);
            this->Add_admin_panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
            this->EditFieldPanel->ResumeLayout(false);
            this->EditFieldPanel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
            this->change_password_panel->ResumeLayout(false);
            this->change_password_panel->PerformLayout();
            this->Profile_panel->ResumeLayout(false);
            this->Profile_panel->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {

        change_password_panel->Visible = false; 
        EditFieldPanel->Visible = false; 
        Details_Panel->Visible = false;
        Edit_property->Visible = false;
        user_details->Visible = false;
        Dashboard->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
    }
    private: System::Void Requests_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void Navigationbar_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
           
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
private: System::Void Profile_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Browse_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Dashboard_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Requests_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Moderate_Users_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Add_Admin_Click(System::Object^ sender, System::EventArgs^ e) {
    ChangePanelAndButtonColor((Control^)sender);
    }
private: System::Void Browse_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void Dashboard_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void Moderate_users_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void Add_admin_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
private: System::Void Profile_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }

       void ChangePanelAndButtonColor(Control^ clickedControl)
       {
           // Hide all panels
           Dashboard_panel->Visible = false;
           Browse_panel->Visible = false;
           Requests_panel->Visible = false;
           Moderate_users_panel->Visible = false;
           Add_admin_panel->Visible = false;
           Profile_panel->Visible = false;

           Dashboard->BackColor = System::Drawing::Color::Transparent;
           Browse->BackColor = System::Drawing::Color::Transparent;
           Requests->BackColor = System::Drawing::Color::Transparent;
           Moderate_Users->BackColor = System::Drawing::Color::Transparent;
           Add_Admin->BackColor = System::Drawing::Color::Transparent;

           if (clickedControl == Dashboard)
           {
               Dashboard_panel->Visible = true;
               Dashboard->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == Browse)
           {
               Browse_panel->Visible = true;
               Browse->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == Requests)
           {
               Requests_panel->Visible = true;
               Requests->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == Moderate_Users)
           {
               Moderate_users_panel->Visible = true;
               Moderate_Users->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }
           else if (clickedControl == Add_Admin)
           {
               Add_admin_panel->Visible = true;
               Add_Admin->BackColor = System::Drawing::Color::FromArgb(159, 201, 191);
           }

           
           if (clickedControl == Profile || clickedControl == pictureBox1)
           {
               Profile_panel->Visible = true;
           }
       }
       // word search appear and disappear
       private: System::Void Search_textbox_Enter(System::Object^ sender, System::EventArgs^ e) {
           if (Search_textbox->Text == "Search") {
               Search_textbox->Text = "";
               Search_textbox->ForeColor = System::Drawing::Color::SlateGray; // Or any typing color you prefer
           }
       }

       private: System::Void Search_textbox_Leave(System::Object^ sender, System::EventArgs^ e) {
           if (String::IsNullOrWhiteSpace(Search_textbox->Text)) {
               Search_textbox->Text = "Search";
               Search_textbox->ForeColor = System::Drawing::Color::SlateGray;
           }
       }



private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Search_textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    this->Search_textbox->Enter += gcnew System::EventHandler(this, &AdminForm::Search_textbox_Enter);
    this->Search_textbox->Leave += gcnew System::EventHandler(this, &AdminForm::Search_textbox_Leave);

}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    ResetControlsInPanel(Add_admin_panel);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


    std::string name = msclr::interop::marshal_as<std::string>(nameTextBox->Text);
    std::string email = msclr::interop::marshal_as<std::string>(emailTextBox->Text);
    std::string password = msclr::interop::marshal_as<std::string>(passwordTextBox->Text);
    std::string phone = msclr::interop::marshal_as<std::string>(phoneTextBox->Text);

    // Call the function
    int result = Global::currUser.add_admin(name, email, password, phone);

    // Show feedback to the user
    switch (result) {
    case 0:
        MessageBox::Show("Admin added successfully!");
        break;
    case 1:
        MessageBox::Show("Password must be at least 8 characters.");
        break;
    case 2:
        MessageBox::Show("Email already in use.");
        break;
    default:
        MessageBox::Show("Unknown error.");
        break;
    }
}


private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click_1(System::Object^ sender, System::EventArgs^ e) {
    textBox5->Clear();
    TypeCompo->Text = ""; 
    textBox6->Clear();
    textBox7->Clear();
    textBox8->Clear();
    numBedrooms->Text = "";
    textBox9->Clear(); 


}
private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label39_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label43_Click(System::Object^ sender, System::EventArgs^ e) {
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
        private: void ShowEditFieldPanel(String^ fieldName, String^ currentValue) {
            currentField = fieldName;  // track the current field being edited
            editLabel->Text = "Edit " + fieldName + ":";  // set label text
            editBox->Text = currentValue;  // set the textbox with the current value
            editBox->Focus();  // optional: focus on the textbox
            EditFieldPanel->Visible = true;  // make the Edit Field Panel visible
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


private: System::Void pictureBox27_Click(System::Object^ sender, System::EventArgs^ e) {
    EditFieldPanel->Visible = true;
       ShowEditFieldPanel("Name", marshal_as<String^>(Global::currUser.getName()));

}
private: System::Void pictureBox28_Click(System::Object^ sender, System::EventArgs^ e) {
    EditFieldPanel->Visible = true;
        ShowEditFieldPanel("Email", marshal_as<String^>(Global::currUser.getEmail()));

}
private: System::Void pictureBox29_Click(System::Object^ sender, System::EventArgs^ e) {
    EditFieldPanel->Visible = true;
        ShowEditFieldPanel("Phone", marshal_as<String^>(Global::currUser.getPhoneNumber()));
}
private: System::Void cancel_pass_Click(System::Object^ sender, System::EventArgs^ e) {
    ResetControlsInPanel(change_password_panel);
    change_password_panel->Visible = false;
}
private: System::Void pictureBox30_Click(System::Object^ sender, System::EventArgs^ e) {
    change_password_panel->Visible = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    ResetControlsInPanel(EditFieldPanel);
    EditFieldPanel->Visible = false;
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}

       // Save button click event to save the edited values
    private: System::Void save_edit_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ newValue = editBox->Text;  // Get new value from TextBox
        int id = Global::currUser.getId(); // Current user ID

        if (currentField == "Name") {
            std::string name = marshal_as<std::string>(newValue);
            Global::currUser.setName(name);
            Global::users[id].setName(name);
            Profile->Text = newValue;
            user_name->Text = newValue;
        }
        else if (currentField == "Email") {
            std::string email = marshal_as<std::string>(newValue);
            Global::currUser.setEmail(email);
            Global::users[id].setEmail(email);
            user_email->Text = newValue;

        }

        else if (currentField == "Phone") {
            try {
                int phoneInt = System::Convert::ToInt32(newValue);
                Global::currUser.setPhoneNumber(phoneInt);
                Global::users[id].setPhoneNumber(phoneInt);
                user_phone->Text = newValue;
            }
            catch (FormatException^) {
                MessageBox::Show("Please enter a valid phone number.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
        }

        // Show a success message
        MessageBox::Show(currentField + " updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Hide the edit panel
        EditFieldPanel->Visible = false;
    }

private: System::Void delete_btn_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label79_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button100_Click(System::Object^ sender, System::EventArgs^ e) {
    Details_Panel->Visible = false; 
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    ResetControlsInPanel(Edit_property); 
    Edit_property->Visible = false; 
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
    user_details->Visible = false;
}
private: System::Void label97_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void save_pass_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get values from textboxes
    String^ oldPassStr = old_pass->Text;
    String^ newPassStr = new_pass->Text;

    std::string oldPass = marshal_as<std::string>(oldPassStr);
    std::string newPass = marshal_as<std::string>(newPassStr);

    // Get current user ID
    int id = Global::currUser.getId();

    // Check if old password matches
    if (oldPass != Global::currUser.getPassword()) {
        MessageBox::Show("Old password is incorrect.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }

    // Check if new password is valid (at least 8 characters long)
    if (newPass.length() < 8) {
        MessageBox::Show("New password must be at least 8 characters long.", "Invalid Password", MessageBoxButtons::OK, MessageBoxIcon::Warning);
        return;
    }

    // Update password
    Global::currUser.setPassword(newPass);
    Global::users[id].setPassword(newPass);
    std::string password = Global::currUser.getPassword();
    std::string masked(password.length(), '*');
    user_password->Text = gcnew String(masked.c_str());
    // Success message
    MessageBox::Show("Password updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

    // Clear fields (optional)
    old_pass->Text = "";
    new_pass->Text = "";
    change_password_panel->Visible = false; 
}
       

private: System::Void user_password_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void editBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
