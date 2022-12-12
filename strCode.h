//Created By NOTaGrape
//---------------------------------------------------------------------------
#ifndef strCodeH
#define strCodeH
//---------------------------------------------------------------------------
#include <vector>

class Str
{
public:
	Str();
	Str(int);
	int size();
	int resize(int);
	int& operator[](const int index)
	{
		return field_[index];
	}
private:
	std::vector <int> field_;
};
//---------------------------------------------------------------------------
#endif