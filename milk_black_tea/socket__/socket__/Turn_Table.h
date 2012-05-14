#pragma once

#using <mscorlib.dll>
#using "chamber_core.dll"

namespace socket__ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace chamber_core;

	/// <summary>
	/// Turn_Table 的摘要
	/// </summary>
	public ref class Turn_Table : public System::Windows::Forms::Form
	{
	public:
		Turn_Table(void)
		{
			InitializeComponent();

			Hori_dll  = gcnew GPIB_2_PHI() ;
			Vert_dll = gcnew GPIB_2_THETA();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Turn_Table()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox6;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  VLower;

	private: System::Windows::Forms::TextBox^  VUpper;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  HLower;

	private: System::Windows::Forms::TextBox^  HUpper;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  VGo;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  HGo;

	private: System::Windows::Forms::Label^  label7;
	private: System::ComponentModel::IContainer^  components;

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
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->VLower = (gcnew System::Windows::Forms::TextBox());
			this->VUpper = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->HLower = (gcnew System::Windows::Forms::TextBox());
			this->HUpper = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->VGo = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->HGo = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox6->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->VLower);
			this->groupBox6->Controls->Add(this->VUpper);
			this->groupBox6->Controls->Add(this->label4);
			this->groupBox6->Controls->Add(this->label3);
			this->groupBox6->Controls->Add(this->HLower);
			this->groupBox6->Controls->Add(this->HUpper);
			this->groupBox6->Controls->Add(this->label2);
			this->groupBox6->Controls->Add(this->label1);
			this->groupBox6->Controls->Add(this->textBox2);
			this->groupBox6->Controls->Add(this->textBox1);
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Controls->Add(this->label5);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox6->Location = System::Drawing::Point(12, 12);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(345, 172);
			this->groupBox6->TabIndex = 13;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Current Angle";
			// 
			// VLower
			// 
			this->VLower->Location = System::Drawing::Point(290, 119);
			this->VLower->Name = L"VLower";
			this->VLower->Size = System::Drawing::Size(49, 29);
			this->VLower->TabIndex = 11;
			// 
			// VUpper
			// 
			this->VUpper->Location = System::Drawing::Point(290, 79);
			this->VUpper->Name = L"VUpper";
			this->VUpper->Size = System::Drawing::Size(49, 29);
			this->VUpper->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(173, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Lower_Bound:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(171, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Upper_Bound:";
			// 
			// HLower
			// 
			this->HLower->Location = System::Drawing::Point(120, 116);
			this->HLower->Name = L"HLower";
			this->HLower->Size = System::Drawing::Size(50, 29);
			this->HLower->TabIndex = 7;
			// 
			// HUpper
			// 
			this->HUpper->Location = System::Drawing::Point(120, 76);
			this->HUpper->Name = L"HUpper";
			this->HUpper->Size = System::Drawing::Size(50, 29);
			this->HUpper->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Lower_Bound:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Upper_Bound:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(290, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 29);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(120, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(50, 29);
			this->textBox1->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(214, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Vertical:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 20);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Horizontal:";
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &Turn_Table::timer1_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->VGo);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->HGo);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(12, 200);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(345, 109);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"TurnTable";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(290, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 32);
			this->button1->TabIndex = 13;
			this->button1->Text = L"GO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Turn_Table::button1_Click);
			// 
			// VGo
			// 
			this->VGo->Location = System::Drawing::Point(290, 37);
			this->VGo->Name = L"VGo";
			this->VGo->Size = System::Drawing::Size(49, 29);
			this->VGo->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(214, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Vertical:";
			// 
			// HGo
			// 
			this->HGo->Location = System::Drawing::Point(120, 37);
			this->HGo->Name = L"HGo";
			this->HGo->Size = System::Drawing::Size(50, 29);
			this->HGo->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Horizontal:";
			// 
			// Turn_Table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(369, 312);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox6);
			this->Name = L"Turn_Table";
			this->Text = L"Turn_Table";
			this->Load += gcnew System::EventHandler(this, &Turn_Table::Turn_Table_Load);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		private:
			System::Boolean Check_null(System::String ^sst,std::string str);
			System::String^ StlWStringToString (std::string const& os);

			GPIB_2_PHI^ Hori_dll ;
			GPIB_2_THETA^ Vert_dll;

	private: System::Void Turn_Table_Load(System::Object^  sender, System::EventArgs^  e) ;
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) ;
};
}
