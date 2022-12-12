//Created By NOTaGrape
//---------------------------------------------------------------------------
#ifndef irregularFractalCodeH
#define irregularFractalCodeH
//---------------------------------------------------------------------------
#include "matrixCode.h"
#include <vector>
//---------------------------------------------------------------------------
class irregularFractal
{
public:
	//basic func's
	irregularFractal();
	irregularFractal(int,double,int);
	//additional func's
	int reinit(int,double,int);
	int size();
	int cut(int,int,int,int);
	int calcPartReg(int,int,int,int,int);
	int calcPartIreg(int,int,int,int,int);
	int calcStartReg();

	int calcStartIreg();
	double boxCount();
	int percCounter();

	int calcStartLoop(int);
	//visible fields
	Matrix carpet;
    Memory moves;
private:
	int iter_;
	double perc_;
};
//---------------------------------------------------------------------------
#endif