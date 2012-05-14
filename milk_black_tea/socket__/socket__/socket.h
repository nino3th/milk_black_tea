#ifndef __SOCKET_H__  
#define __SOCKET_H__  

#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")  

typedef enum TestItem{
	TEST_ITEM_POWER,
	TEST_ITEM_SENSITIVITY
};

typedef enum PacketType{
	PACKET_TYPE_TEST_ITEM,
	PACKET_TYPE_RESULT,
	PACKET_TYPE_ERROR,
	PACKET_TYPE_INFO
};

typedef enum Vendor{
	ATHEROS,
	RALLINK,
	REALTEK
} ;

typedef enum Module{
	AUTO,
	WCBN4500AB,
	WCBN3501A,

} ;

typedef enum Band{
	SINGLE_BAND,
	DAUL_BAND
};

typedef enum Chain{
	CHAIN_1T_1R,
	CHAIN_1T_2R,
	CHAIN_2T_1R,
	CHAIN_2T_2R
};




typedef struct CommandHeader{
	char packet_type;  // 1:testitem, 2:result, 3:error, 4:info
	char preserve;    
	short packet_length;
}commandheader;

typedef struct CommandTestItem{
	char vendor;	 // Atheros, Realtek, Rallink
	char module;	 // module name 
//	char test_type;   // Tx or Rx
//	char test_items;  // Power or sensitivity
//	int channel;     // frequence, MHz
//	char rata_rate;	 //
	char band;		 // single/daul band
	char chain;      // or call "path" for Tx/Rx
//	char HT40;		 // is HT40 or not
}commandTestItem;

typedef struct CommandResult{
	int channel;     // frequence, MHz
	char test_items; // Power or sensitivity
	char rata_rate;	 //
	char chain;      // or call "path" for Tx/Rx
	char ht40;		 // is HT40 or not
	double result;   // this result can be power or sensitivity
}commandResult;

typedef struct RemoteCommandStruct{
	CommandHeader command_header;
	CommandTestItem comand_test_item;
	CommandResult command_result;
	char error_code;
	char info;	//
}remoteCommandStruct;


ref class Socket
{
private:
 SOCKET m_Socket;

public:
 static bool Initialize(void);
 static void Terminate(void);
 static bool IsLocalHost(const char* hostname);
 static bool GetHostIP(const char* hostname, int &ip1, int &ip2, int &ip3, int &ip4);


public:
 Socket(void);
 ~Socket();
 bool IsOpened(void) ;
 void SetSocket(SOCKET socket);
 bool Open(const char* hostname, int port);
 void Close(void);
 bool WaitInputData(int seconds);
 bool Read(void* buffer, long len, long &ret_len);
 bool Write(const void* buffer, long len);
 bool Listen(int port);
 bool Accept(SOCKET &socket);
 bool SetNoDelay(void);

 //void thread(void);
};
#endif