#include "StdAfx.h"
#include "Turn_Table.h"

using namespace socket__;
using namespace std; 

System::Void Turn_Table::Turn_Table_Load(System::Object^  sender, System::EventArgs^  e) {

	
}

System::Void Turn_Table::timer1_Tick(System::Object^  sender, System::EventArgs^  e){

	try{
		textBox1->Text = Convert::ToString(Hori_dll->Inquiry_position());
		textBox2->Text = Convert::ToString(Vert_dll->Inquiry_position());
	}
	catch(...)
	{
		MessageBox::Show("Please Check Turn_Table!");
	}
}


System::Boolean Turn_Table::Check_null(System::String ^sst,std::string str)
{
	if (sst == "")
	{
		MessageBox::Show(StlWStringToString(str) + " data is null");
		return false;
	}

	try{
		Convert::ToUInt32(sst);
	}
	catch(...)
	{
		MessageBox::Show(StlWStringToString(str)+" is not integer");
		return false;
	}


	return true;
}

System::String^ Turn_Table::StlWStringToString (std::string const& os) { 

	String^ str = gcnew String(os.c_str()); 
	return str; 
} 

System::Void Turn_Table::button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Check_null(HUpper->Text,"Horizontal upper bound");
	Check_null(HLower->Text,"Horizontal lower bound");
	Check_null(VUpper->Text,"Vertical upper bound");
	Check_null(VLower->Text,"Vertical lower bound");
	Check_null(HGo->Text,"Horizontal Target" );
	Check_null(VGo->Text, "Vertical Target" );
}


