//Created By NOTaGrape
//---------------------------------------------------------------------------
#ifndef matrixCodeH
#define matrixCodeH
//---------------------------------------------------------------------------
#include "strCode.h"
#include <vector>
//---------------------------------------------------------------------------
class Matrix
{
public:
	Matrix();
	Matrix(int);
	int resize(int);
	int size();
	Str& operator [](const int index)
	{
		return fields_[index]; 
	};
private:
	std::vector <Str> fields_;
};
//---------------------------------------------------------------------------
#endif