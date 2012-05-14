#include "StdAfx.h"
#include "Paint_File.h"
#include "Start.h"

using namespace socket__;
using namespace std; 

System::Void Paint_File::button1_Click(System::Object^  sender, System::EventArgs^  e) {

	openFileDialog1->ShowDialog();
	textBox1->Text = openFileDialog1->SafeFileName->ToString();
}

System::Void Paint_File::button3_Click(System::Object^  sender, System::EventArgs^  e) {


	//Start->ShowDialog();
	Close();
}