#include "StdAfx.h"
#include "Form1.h"
#include "Record.h"
#include "Turn_Table.h"


using namespace socket__;
using namespace std; 


//==================Global=====================//
int level			= 30;
int vertical		= 30;
int Maxmim			= 0;
double Threadhold	= 0;

Record Received_Data("");
string direction_	="";




//==================Global======================//

System::Void Form1::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	/*
	int i = 0;
	char* nam;
	Socket ^soc = gcnew Socket();
	Thread^ soc_=gcnew Thread(gcnew ParameterizedThreadStart(this,&Form1::Excute));

	checkbox_check();

	//pBar1.PerformStep();
	
	while(!soc->IsOpened() )
	{
		i++;
		//soc->Open("192.168.100.2",3742);
		soc->Open("127.0.0.1",3742);

		if (i >= 10)
		{
			MessageBox::Show("Connect ERROR!");
			return;
		}
	}

	nam = (char*)(&Send_Data());

	soc_->Name=gcnew String("socke_read");
	soc_->IsBackground=false;
	soc_->Start( soc );

	soc->Write( nam ,sizeof( remoteCommandStruct ) );
	*/
	timer2->Stop();
	Sleep(50);
	if(Horizonal_dll->Inquiry_Status() !=false  && Vertical_dll->Inquiry_Status() !=false)
		Horizonal_dll->Run_Target(0.0);

	if(Horizonal_dll->Inquiry_Status() !=false  && Vertical_dll->Inquiry_Status() !=false)
		Vertical_dll->Run_Target(0.0);
	Sleep(50);
	timer2->Start();



	for(int i = 0; i <360/vertical ; i ++)
	{
		for(int j = 0 ; j < 360/level ; j++)
		{
			timer2->Stop();
			Sleep(50);
			if(Horizonal_dll->Inquiry_Status() !=false  && Vertical_dll->Inquiry_Status() !=false)
				Horizonal_dll->Run_Target(Horizonal_dll->Inquiry_position()+level);
			Sleep(50);
			timer2->Start();
		}
		timer2->Stop();
		Sleep(50);
		if(Horizonal_dll->Inquiry_Status() !=false  && Vertical_dll->Inquiry_Status() !=false)
			Vertical_dll->Run_Target(Vertical_dll->Inquiry_position()+vertical);
		Sleep(50);
		timer2->Start();
	}

	
}

System::Void Form1::button2_Click(System::Object^  sender, System::EventArgs^  e) {

	Close();
}

System::Void Form1::Form1_Load(System::Object^  sender, System::EventArgs^  e) {

	extern string direction_;

	timer2->Start();
	this->TRP->Checked = true;
	this->Atheros->Checked = true;
	this->comboBox1->Text       = "CHAIN_1T_1R";
	this->comboBox2->Text       = "Auto";
	this->label2->Text = System::DateTime::Now.ToString("HH:mm:ss");
	//this->textBox1->Text = Convert::ToString(direction_);
	module = 0;
	trp_tis =0;
	band =0;

	//Received_Data.Scatter(1.0,2.0,3);
	//Received_Data.OutputScatter();

}

System::Void Form1::Atheros_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	this->comboBox2->Items->Clear();
	this->comboBox2->Items->Add("Auto");
	this->comboBox2->Items->Add("WCBN4500AB");
	this->comboBox2->Items->Add("WCBN3501A");
	this->comboBox2->Text      ="Auto";
	module = ATHEROS;

}
System::Void Form1::Realtek_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	this->comboBox2->Items->Clear();
	this->comboBox2->Items->Add("Auto");
	this->comboBox2->Text      ="Auto";
	module = REALTEK;
}
System::Void Form1::Ralink_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	this->comboBox2->Items->Clear();
	this->comboBox2->Items->Add("Auto");
	this->comboBox2->Text      ="Auto";
	module = RALLINK;

}

System::Void Form1::TIS_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	trp_tis = TEST_ITEM_SENSITIVITY;
}
System::Void Form1::TRP_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	trp_tis = TEST_ITEM_POWER;
}

System::Void Form1::All_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	trp_tis = 2;//all
}


System::Void Form1::Single_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	band = SINGLE_BAND;
}
System::Void Form1::Dual_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	band = DAUL_BAND;
}
System::Void Form1::button3_Click(System::Object^  sender, System::EventArgs^  e) {




}
System::Void Form1::menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}

System::Void Form1::angleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	Angle^ angle = gcnew Angle();

	angle->ShowDialog();

}

System::Void Form1::setupToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	G_Setup^ setup = gcnew G_Setup();

	setup->ShowDialog();
}
System::Void Form1::timer1_Tick(System::Object^  sender, System::EventArgs^  e){

	this->label2->Text = System::DateTime::Now.ToString("HH:mm:ss"); 

}



System::Void Form1::timer2_Tick(System::Object^  sender, System::EventArgs^  e){

	
	try{
		textBox1->Text = Convert::ToString(Horizonal_dll->Inquiry_position());
		textBox2->Text = Convert::ToString(Vertical_dll->Inquiry_position());
	}
	catch(...)
	{
	
	}

}
System::Void Form1::checkbox_check(){

	if(!checkBox1->Checked && !checkBox2->Checked)
		MessageBox::Show("½Ð½T»{Band!");

}

System::Void Form1::textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e){


	if (textBox4->Text == "")
	{
		textBox4->Text = "0";
	}

	int num = Convert::ToUInt32( textBox4->Text );

	if ( num > 90 || num < 0 )
	{
		MessageBox::Show("LEVEL OUT OF RANGE!");
	}
	else
	{
		trackBar1->Value = num;
		level = trackBar1->Value ;
	}
}
System::Void Form1::textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	if (textBox3->Text == "")
	{
		textBox3->Text = "0";
	}

	int num = Convert::ToUInt32( textBox3->Text );

	if ( num > 90 || num < 0 )
	{
		MessageBox::Show("LEVEL OUT OF RANGE!");
	}
	else
	{
		trackBar2->Value = num;
		vertical = trackBar2->Value ;
	}

}
System::Void Form1::trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {

	textBox4->Text = trackBar1->Value.ToString();
}

System::Void Form1::trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e){

	textBox3->Text = trackBar2->Value.ToString();
}
System::Void Form1::Control_Click(System::Object^  sender, System::EventArgs^  e) {

	Turn_Table^ turn = gcnew Turn_Table();

	turn->ShowDialog();

}