#include "stdafx.h"
#include "Form1.h"

using namespace socket__;
using namespace std; 
using namespace System::Runtime::InteropServices;

System::Void Form1::Excute(Object ^soc)
{
	char buf_[128]={0};
	bool GetData = false;
	//remoteCommandStruct ss;


	Socket ^s =(Socket ^)soc ;

	while (true)
	{
		//GetData = s->Read((char*)&ss, strlen(buf_),test);

		if ( GetData != false )
		{
			Date_Deal( buf_, strlen(buf_) );
			GetData = false;
		}
	}
	
}



System::Boolean Form1::Date_Deal(char *buffer,  long len)
{
	remoteCommandStruct* rmc = (remoteCommandStruct*)buffer;

	switch(rmc->command_header.packet_type)
	{
		case PACKET_TYPE_RESULT:

			break;

		case PACKET_TYPE_ERROR:
			break;

		case PACKET_TYPE_INFO:
			break;
	}



	return true;
}

remoteCommandStruct  Form1::Send_Data()
 {
	 remoteCommandStruct cmS ;

	 cmS.command_header.packet_type = PACKET_TYPE_TEST_ITEM ;
	 cmS.command_header.packet_length = sizeof(remoteCommandStruct);

	 cmS.comand_test_item.vendor = module;
	 cmS.comand_test_item.module = Form1::comboBox2->SelectedIndex ;

	 cmS.comand_test_item.chain  = Form1::comboBox1->SelectedIndex;


	 cmS.comand_test_item.band   = band;

	 return cmS;
 }

System::Void Form1::Set_Command()
{


}




