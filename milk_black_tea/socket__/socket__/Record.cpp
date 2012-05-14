#include "stdafx.h"
#include "Record.h"
#include <algorithm>
#include <vector>
#include <fstream>
#include <time.h>
#include <Windows.h>
#include <stdio.h>
//#include "Form1.h"





using namespace System::Runtime::InteropServices;

Record::Record(std::string  filename)
	:filename_(filename)
{

	time_t rawtime;
	struct tm * timeinfo;
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );

	RealTimeInTheWorld += asctime (timeinfo);
	//ctor
}

Record::~Record()
{
	//dtor
}

void Record::Scatter(double x , double y ,int CSGID)
{

	std::vector<CSGData>::iterator itCSGData;

	CSGData CSG_Data;

	CSG_Data.x = x ;
	CSG_Data.y = y ;
	CSG_Data.CSGID = CSGID ;

	CSGvec.push_back(CSG_Data);
}

void Record::OutputScatter()
{
	SYSTEMTIME ST;
	std::ofstream Scatter_file;
	char buf[20] = {0};
	std::string str ;
	//extern std::string direction_;

	GetLocalTime(&ST);

	sprintf(buf ,"%d_%02d_%02d_%02d-%02d-%02d",ST.wYear,
											ST.wMonth,
											ST.wDay,
											ST.wHour,
											ST.wMinute,
											ST.wSecond);

	str = buf;


	std::string fileName_Scatter = filename_ + str  +".xls"; //¿…¶W

	Scatter_file.open( fileName_Scatter, std::ios::out);


	for(std::vector<CSGData>::iterator itCSGData=CSGvec.begin(); itCSGData!=CSGvec.end(); itCSGData++)
	{
		Scatter_file<<itCSGData->x<<'\t'<<itCSGData->y<<'\t'<<itCSGData->CSGID<<'\t'<<std::endl;
	}

	Scatter_file.close();
}
