#pragma once
#include "stdafx.h"
#include "socket.h"
#include "Angle.h"
#include "G_Setup.h" 
#include "Turn_Table.h"

#using <mscorlib.dll>
#using "chamber_core.dll"


namespace socket__ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace chamber_core;


	using std::cout;
	using std::endl;


	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();

			Horizonal_dll  = gcnew GPIB_2_PHI() ;
			Vertical_dll = gcnew GPIB_2_THETA();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  Ralink;

	private: System::Windows::Forms::RadioButton^  Realtek;
	private: System::Windows::Forms::RadioButton^  Atheros;



	private: System::Windows::Forms::GroupBox^  groupBox3;




	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  設定ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::ComboBox^  comboBox2;


	private: System::Windows::Forms::ToolStripMenuItem^  angleToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  setupToolStripMenuItem;
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RadioButton^  All;
	private: System::Windows::Forms::RadioButton^  TIS;
	private: System::Windows::Forms::RadioButton^  TRP;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::GroupBox^  Angle_Interval;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Label^  Vertical;
	private: System::Windows::Forms::Label^  Level;
	public: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Button^  Control;
	public: 

	public: 
	private: 


















	private: 

	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->All = (gcnew System::Windows::Forms::RadioButton());
			this->TIS = (gcnew System::Windows::Forms::RadioButton());
			this->TRP = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->Ralink = (gcnew System::Windows::Forms::RadioButton());
			this->Realtek = (gcnew System::Windows::Forms::RadioButton());
			this->Atheros = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->設定ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->angleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setupToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Angle_Interval = (gcnew System::Windows::Forms::GroupBox());
			this->Control = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->Vertical = (gcnew System::Windows::Forms::Label());
			this->Level = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->Angle_Interval->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(12, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(133, 386);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 52);
			this->button2->TabIndex = 3;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(151, 50);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->All);
			this->groupBox1->Controls->Add(this->TIS);
			this->groupBox1->Controls->Add(this->TRP);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(187, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(261, 50);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"TRP-TIS";
			// 
			// All
			// 
			this->All->AutoSize = true;
			this->All->Location = System::Drawing::Point(198, 20);
			this->All->Name = L"All";
			this->All->Size = System::Drawing::Size(46, 24);
			this->All->TabIndex = 8;
			this->All->TabStop = true;
			this->All->Text = L"All";
			this->All->UseVisualStyleBackColor = true;
			this->All->CheckedChanged += gcnew System::EventHandler(this, &Form1::All_CheckedChanged);
			// 
			// TIS
			// 
			this->TIS->AutoSize = true;
			this->TIS->Location = System::Drawing::Point(105, 20);
			this->TIS->Name = L"TIS";
			this->TIS->Size = System::Drawing::Size(50, 24);
			this->TIS->TabIndex = 7;
			this->TIS->TabStop = true;
			this->TIS->Text = L"TIS";
			this->TIS->UseVisualStyleBackColor = true;
			this->TIS->CheckedChanged += gcnew System::EventHandler(this, &Form1::TIS_CheckedChanged);
			// 
			// TRP
			// 
			this->TRP->AutoSize = true;
			this->TRP->Location = System::Drawing::Point(6, 20);
			this->TRP->Name = L"TRP";
			this->TRP->Size = System::Drawing::Size(56, 24);
			this->TRP->TabIndex = 5;
			this->TRP->TabStop = true;
			this->TRP->Text = L"TRP";
			this->TRP->UseVisualStyleBackColor = true;
			this->TRP->CheckedChanged += gcnew System::EventHandler(this, &Form1::TRP_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->Ralink);
			this->groupBox2->Controls->Add(this->Realtek);
			this->groupBox2->Controls->Add(this->Atheros);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(12, 90);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(243, 155);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Module";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"WCBN4500AB", L"WCBN3501A"});
			this->comboBox2->Location = System::Drawing::Point(103, 26);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(134, 28);
			this->comboBox2->TabIndex = 3;
			// 
			// Ralink
			// 
			this->Ralink->AutoSize = true;
			this->Ralink->Location = System::Drawing::Point(6, 86);
			this->Ralink->Name = L"Ralink";
			this->Ralink->Size = System::Drawing::Size(73, 24);
			this->Ralink->TabIndex = 2;
			this->Ralink->TabStop = true;
			this->Ralink->Text = L"Ralink";
			this->Ralink->UseVisualStyleBackColor = true;
			this->Ralink->CheckedChanged += gcnew System::EventHandler(this, &Form1::Ralink_CheckedChanged);
			// 
			// Realtek
			// 
			this->Realtek->AutoSize = true;
			this->Realtek->Location = System::Drawing::Point(6, 56);
			this->Realtek->Name = L"Realtek";
			this->Realtek->Size = System::Drawing::Size(83, 24);
			this->Realtek->TabIndex = 1;
			this->Realtek->TabStop = true;
			this->Realtek->Text = L"Realtek";
			this->Realtek->UseVisualStyleBackColor = true;
			this->Realtek->CheckedChanged += gcnew System::EventHandler(this, &Form1::Realtek_CheckedChanged);
			// 
			// Atheros
			// 
			this->Atheros->AutoSize = true;
			this->Atheros->Location = System::Drawing::Point(6, 26);
			this->Atheros->Name = L"Atheros";
			this->Atheros->Size = System::Drawing::Size(86, 24);
			this->Atheros->TabIndex = 0;
			this->Atheros->TabStop = true;
			this->Atheros->Text = L"Atheros";
			this->Atheros->UseVisualStyleBackColor = true;
			this->Atheros->CheckedChanged += gcnew System::EventHandler(this, &Form1::Atheros_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox3->Location = System::Drawing::Point(12, 252);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(243, 67);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Band";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(135, 28);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(69, 24);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"5GHz";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(7, 28);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 24);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"2.4GHz";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox4->Location = System::Drawing::Point(12, 315);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(243, 65);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Chain";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"CHAIN_1T_1R", L"CHAIN_1T_2R", L"CHAIN_2T_1R", 
				L"CHAIN_2T_2R"});
			this->comboBox1->Location = System::Drawing::Point(7, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(216, 28);
			this->comboBox1->TabIndex = 0;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->label1);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox5->Location = System::Drawing::Point(261, 325);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(319, 113);
			this->groupBox5->TabIndex = 10;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Time";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(151, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Completed Time:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(151, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Current Time :";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->設定ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(970, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// 設定ToolStripMenuItem
			// 
			this->設定ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->angleToolStripMenuItem, 
				this->setupToolStripMenuItem});
			this->設定ToolStripMenuItem->Name = L"設定ToolStripMenuItem";
			this->設定ToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->設定ToolStripMenuItem->Text = L"設定";
			// 
			// angleToolStripMenuItem
			// 
			this->angleToolStripMenuItem->Name = L"angleToolStripMenuItem";
			this->angleToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->angleToolStripMenuItem->Text = L"Angle";
			this->angleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::angleToolStripMenuItem_Click);
			// 
			// setupToolStripMenuItem
			// 
			this->setupToolStripMenuItem->Name = L"setupToolStripMenuItem";
			this->setupToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->setupToolStripMenuItem->Text = L"Setup";
			this->setupToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::setupToolStripMenuItem_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->textBox2);
			this->groupBox6->Controls->Add(this->textBox1);
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Controls->Add(this->label5);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox6->Location = System::Drawing::Point(261, 90);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(319, 70);
			this->groupBox6->TabIndex = 12;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Current Angle";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(236, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 29);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(104, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(50, 29);
			this->textBox1->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(160, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Vertical:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Horizontal:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(601, 90);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(361, 352);
			this->listBox1->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(485, 55);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 444);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(950, 23);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 14;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 10;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// Angle_Interval
			// 
			this->Angle_Interval->Controls->Add(this->Control);
			this->Angle_Interval->Controls->Add(this->label7);
			this->Angle_Interval->Controls->Add(this->label8);
			this->Angle_Interval->Controls->Add(this->label9);
			this->Angle_Interval->Controls->Add(this->textBox3);
			this->Angle_Interval->Controls->Add(this->textBox4);
			this->Angle_Interval->Controls->Add(this->trackBar2);
			this->Angle_Interval->Controls->Add(this->Vertical);
			this->Angle_Interval->Controls->Add(this->Level);
			this->Angle_Interval->Controls->Add(this->trackBar1);
			this->Angle_Interval->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Angle_Interval->Location = System::Drawing::Point(261, 172);
			this->Angle_Interval->Name = L"Angle_Interval";
			this->Angle_Interval->Size = System::Drawing::Size(319, 147);
			this->Angle_Interval->TabIndex = 15;
			this->Angle_Interval->TabStop = false;
			this->Angle_Interval->Text = L"Angle_Interval";
			// 
			// Control
			// 
			this->Control->Location = System::Drawing::Point(224, 106);
			this->Control->Name = L"Control";
			this->Control->Size = System::Drawing::Size(87, 31);
			this->Control->TabIndex = 9;
			this->Control->Text = L"Control";
			this->Control->UseVisualStyleBackColor = true;
			this->Control->Click += gcnew System::EventHandler(this, &Form1::Control_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(287, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 20);
			this->label7->TabIndex = 8;
			this->label7->Text = L"度";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(287, 80);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"度";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(287, 34);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(222, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(59, 29);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"30";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(222, 25);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(59, 29);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"30";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(61, 74);
			this->trackBar2->Maximum = 90;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(155, 45);
			this->trackBar2->TabIndex = 3;
			this->trackBar2->TickFrequency = 5;
			this->trackBar2->Value = 30;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Form1::trackBar2_Scroll);
			// 
			// Vertical
			// 
			this->Vertical->AutoSize = true;
			this->Vertical->Location = System::Drawing::Point(7, 74);
			this->Vertical->Name = L"Vertical";
			this->Vertical->Size = System::Drawing::Size(41, 20);
			this->Vertical->TabIndex = 2;
			this->Vertical->Text = L"垂直";
			// 
			// Level
			// 
			this->Level->AutoSize = true;
			this->Level->Location = System::Drawing::Point(7, 28);
			this->Level->Name = L"Level";
			this->Level->Size = System::Drawing::Size(41, 20);
			this->Level->TabIndex = 1;
			this->Level->Text = L"水平";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(61, 28);
			this->trackBar1->Maximum = 90;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(155, 45);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->TickFrequency = 5;
			this->trackBar1->Value = 30;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(970, 483);
			this->Controls->Add(this->Angle_Interval);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->Angle_Interval->ResumeLayout(false);
			this->Angle_Interval->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: //System::Void Excute();
		System::Void Excute(Object ^soc);
		System::Boolean Date_Deal(char *buffer,  long len);
		remoteCommandStruct Send_Data();
		System::Void checkbox_check();
		System::Void Set_Command();


		int module ;
		int trp_tis ;
		int band ;

		GPIB_2_PHI^ Horizonal_dll ;
		GPIB_2_THETA^ Vertical_dll;






	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void Atheros_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Realtek_CheckedChanged(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void Ralink_CheckedChanged(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void TIS_CheckedChanged(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void TRP_CheckedChanged(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void Single_CheckedChanged(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void Dual_CheckedChanged(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) ;
	private: System::Void angleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);

	private: System::Void setupToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void All_CheckedChanged(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);


	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e);


private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) ;
private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) ;	 
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) ;	 
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) ;
		 
private: System::Void Control_Click(System::Object^  sender, System::EventArgs^  e) ;
};
}



