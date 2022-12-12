//---------------------------------------------------------------------------
#ifndef serpinskyCarpetCodeH
#define serpinskyCarpetCodeH
//---------------------------------------------------------------------------
#include "matrixCode.h"
//---------------------------------------------------------------------------
class SerpinskyCarpet
{
public:
	//basic func's
	SerpinskyCarpet();
	~SerpinskyCarpet();

	//additional func's
	int reinit();
	int reinit(int,int);
	int changeValue(char*,double);
	int size();
	int iterations();
        int calcStart();
	int calcPart(int,int,int,int,int);

	//visible variables
	Matrix matrixCarpet;

private:
	int size_;
	int iter_;
};
//---------------------------------------------------------------------------
#endif
