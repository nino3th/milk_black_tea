#include "stdafx.h"
#include "G_Setup.h"
#include "Form1.h"

using namespace socket__;
using namespace std; 
using namespace System::Runtime::InteropServices;


System::Void G_Setup::G_Setup_Load(System::Object^  sender, System::EventArgs^  e){

	extern string direction_;

	textBox1->Text = StlWStringToString(direction_);
}

System::Void G_Setup::button1_Click(System::Object^  sender, System::EventArgs^  e) {

	folderBrowserDialog1->ShowDialog();
	textBox1->Text = folderBrowserDialog1->SelectedPath->ToString();
}

System::Void G_Setup::button3_Click(System::Object^  sender, System::EventArgs^  e) {

	Close();
}

System::Void G_Setup::button2_Click(System::Object^  sender, System::EventArgs^  e) {

	extern string direction_;

	
	if( !Check_null(GPIB1->Text,GPIB_address) )
		return;

	if( !Check_null(GPIB2->Text,GPIB_port) )
		return;

	if( !Check_null(textBox1->Text,Direction ) )
		return;
	
	StringToStlWString(textBox1->Text , direction_);

	Close();

}



System::Boolean G_Setup::Check_null( System::String^ name ,int inter){

	if (!name->CompareTo(""))
	{
		switch( inter )
		{

		case GPIB_address: 
			MessageBox::Show("GPIB_address is null");
			return false;


		case GPIB_port :
			MessageBox::Show("GPIB_port is null");
			return false;


		case Direction:
			MessageBox::Show("Direction is null");
			return false;


		}

		
	}
	return true;

}

System::Void G_Setup::StringToStlWString ( System::String const^ s, std::string& os) 
{ 
	String^ string = const_cast<String^>(s); 
	const char* chars = reinterpret_cast<const char*>((Marshal::StringToHGlobalUni(string)).ToPointer()); 
	os = chars; 
	Marshal::FreeHGlobal(IntPtr((void*)chars)); 
} 

System::String^ G_Setup::StlWStringToString (std::string const& os) { 

	String^ str = gcnew String(os.c_str()); 
	return str; 
} 
