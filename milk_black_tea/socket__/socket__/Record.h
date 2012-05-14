#ifndef RECORD_H
#define RECORD_H
#include <vector>
#include <string>


typedef struct
{

	int index;
	int Count;
} DataNum;

typedef struct
{

	double x;
	double y;
	int CSGID;
} CSGData;


struct findIndex
{
	int index_;
	findIndex(int index):index_(index) {}

	bool operator () (const DataNum& b) const
	{

		return b.index == index_;
	}

};

struct sortByIndex
{

	bool operator () (const DataNum& d1, const DataNum& d2) const
	{

		return d1.index < d2.index;
	}

};


class Record
{
public:
	Record(std::string filename);
	virtual ~Record();

	void Scatter(double x , double y ,int CSGID);

	void OutputScatter();



protected:
private:

	std::string RealTimeInTheWorld;

	std::vector<DataNum> PDF;
	std::string filename_;
	std::vector<CSGData> CSGvec;


};

#endif // RECORD_H
