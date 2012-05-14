#pragma once

#include "Form1.h"
#include "Paint_File.h"
#include "Class.h"

namespace socket__ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Start 的摘要
	/// </summary>
	public ref class Start : public System::Windows::Forms::Form
	{
	public:
		Start(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Start()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Passive;
	protected: 
	private: System::Windows::Forms::Button^  Active;
	private: System::Windows::Forms::Button^  Plot;

	protected: 

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->Passive = (gcnew System::Windows::Forms::Button());
			this->Active = (gcnew System::Windows::Forms::Button());
			this->Plot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Passive
			// 
			this->Passive->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Passive->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Passive->Location = System::Drawing::Point(12, 12);
			this->Passive->Name = L"Passive";
			this->Passive->Size = System::Drawing::Size(119, 124);
			this->Passive->TabIndex = 0;
			this->Passive->Text = L"Passive";
			this->Passive->UseVisualStyleBackColor = true;
			this->Passive->Click += gcnew System::EventHandler(this, &Start::Passive_Click);
			// 
			// Active
			// 
			this->Active->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Active->Location = System::Drawing::Point(137, 12);
			this->Active->Name = L"Active";
			this->Active->Size = System::Drawing::Size(119, 124);
			this->Active->TabIndex = 1;
			this->Active->Text = L"Active";
			this->Active->UseVisualStyleBackColor = true;
			this->Active->Click += gcnew System::EventHandler(this, &Start::Active_Click);
			// 
			// Plot
			// 
			this->Plot->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->Plot->Location = System::Drawing::Point(262, 12);
			this->Plot->Name = L"Plot";
			this->Plot->Size = System::Drawing::Size(119, 124);
			this->Plot->TabIndex = 2;
			this->Plot->Text = L"Plot";
			this->Plot->UseVisualStyleBackColor = true;
			this->Plot->Click += gcnew System::EventHandler(this, &Start::Plot_Click);
			// 
			// Start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(395, 159);
			this->Controls->Add(this->Plot);
			this->Controls->Add(this->Active);
			this->Controls->Add(this->Passive);
			this->Name = L"Start";
			this->Text = L"Start";
			this->Load += gcnew System::EventHandler(this, &Start::Start_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Start_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Passive_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Active_Click(System::Object^  sender, System::EventArgs^  e) {

				 Class^ about = gcnew Class;
				 about->ShowDialog();


			 }
	private: System::Void Plot_Click(System::Object^  sender, System::EventArgs^  e) {

				 Paint_File ^pf = gcnew Paint_File(); 
				 pf->ShowDialog();
			 }
};
}
