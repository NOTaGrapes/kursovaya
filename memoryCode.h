//Created By NOTaGrape
//---------------------------------------------------------------------------
#ifndef memoryCodeH
#define memoryCodeH
//---------------------------------------------------------------------------
#include "matrixCode.h"
#include <vector>
//---------------------------------------------------------------------------
struct piece
{
	double perc_;
	double dim_;
};
class Memory
{
public:
	Memory();
	Memory(int);
	int resize(int);
	int size();
    int add();
	vector& operator [](const int index)
	{
		return field_[index];
	};
private:
	std::vector <piece> field_;
};
//---------------------------------------------------------------------------
#endif
