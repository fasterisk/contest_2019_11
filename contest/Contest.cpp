#include "Contest.h"

struct InputObject
{
	PI p1;
	PI p2;
};

ofstream &operator <<(ofstream & output, const InputObject & outputobject)
{
	output << outputobject.p1;
	output << endl;
	output << outputobject.p2;
	
	return output;
}

ifstream &operator >> (ifstream & input, InputObject & inputobject)
{
	input >> inputobject.p1;
	input >> inputobject.p2;
	return input;
}

/***********************************************************************************
************************************************************************************/
void Contest::Run(std::ifstream & input, std::ofstream & output)
{
	InputObject i1;
	input >> i1;

	VII vectorofintpairs;
	io::readVector(input, 5, vectorofintpairs);

	MII mapintint;
	io::readMap(input, 5, mapintint);

	SI intset;
	io::readSet(input, 5, intset);

	output << i1;
}