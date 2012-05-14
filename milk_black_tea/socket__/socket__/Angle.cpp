#include "stdafx.h"
#include "Angle.h"

using namespace socket__;
using namespace std; 

extern int Maxmim ;
extern double Threadhold ;

System::Void Angle::Sure_Click(System::Object^  sender, System::EventArgs^  e) {

	if ( checkBox1->Checked  )
	{
		Maxmim = Convert::ToInt32(textBox3->Text);
	}

	if ( checkBox2->Checked  )
	{
		Threadhold = Convert::ToInt32(textBox4->Text);
	}

	try{
		Convert::ToUInt32(textBox3->Text);
		Convert::ToDouble(textBox4->Text);

	}
	catch(...)
	{
		MessageBox::Show("½Ð¿é¤J¼Æ¦r");
		return;
	}

	Close();
}

System::Void Angle::button1_Click(System::Object^  sender, System::EventArgs^  e) {

	Close();
}

System::Void Angle::checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if ( checkBox1->Checked )
	{
		textBox3->Enabled = true;
	}
	else
	{
		textBox3->Enabled = false;
	}

}

System::Void Angle::checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e){ 

	if ( checkBox2->Checked )
	{
		textBox4->Enabled = true;
	}
	else
	{
		textBox4->Enabled = false;
	}
}

System::Void Angle::Angle_Load(System::Object^  sender, System::EventArgs^  e){

	textBox3->Text = Convert::ToString(Maxmim); 
	textBox4->Text = Convert::ToString(Threadhold); 

}