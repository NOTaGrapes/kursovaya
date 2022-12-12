//---------------------------------------------------------------------------
#include "serpinskyCarpetCode.h"
#include "matrixCode.h"
#include "randomizerCode.h"
#include <string.h>
//---------------------------------------------------------------------------
SerpinskyCarpet::SerpinskyCarpet()
{
	this->size_=0;
	this->iter_=0;
	this->matrixCarpet.reinit();
}

SerpinskyCarpet::~SerpinskyCarpet()
{
	this->matrixCarpet.~Matrix();
}

int SerpinskyCarpet::size()
{
	return this->size_;
}

int SerpinskyCarpet::iterations()
{
	return this->iter_;
}

int SerpinskyCarpet::changeValue(char* name, double value)
{
	if (stricmp(name, "iterations") == 0)
	{
		this->iter_ = value;
		return 0;
	}
	if (stricmp(name, "size") == 0)
	{
		this->size_ = value;
		return 0;
	}
	return 1;
}

int SerpinskyCarpet::reinit()
{
	this->size_=0;
	this->iter_=0;
	this->matrixCarpet.reinit();
	return 0;
}

int SerpinskyCarpet::reinit(int size, int iter)
{
	this->size_=size;
	this->iter_=iter;
	this->matrixCarpet.reinit();
	return 0;
}

int SerpinskyCarpet::calcPart(int X0, int Y0,int X3, int Y3,int iter)
{
	if(iter > 0)
	{
		//calculating
		int X1=(int)(X3/3);
		int X2=(int)((2*X3)/3);
		int Y1=(int)(Y3/3);
		int Y2=(int)((2*Y3)/3);
		//cut'nd send
		int part=randomizer(1,9);
		if(part==1)
		{
			for (int m=X0;m!=X1;m++)
			{
				for (int n=Y0; n!=Y1; n++)
				{
					this->matrixCarpet[m][n]=1;
				}
			}
			//this->calcPart(X0,Y0,X1,Y1,iter--);//1
			this->calcPart(X1,Y0,X2,Y1,iter--);//2
			this->calcPart(X2,Y0,X3,Y1,iter--);//3

			this->calcPart(X0,Y1,X1,Y2,iter--);//4
			this->calcPart(X1,Y1,X2,Y2,iter--);//5
			this->calcPart(X2,Y1,X3,Y2,iter--);//6

			this->calcPart(X0,Y2,X1,Y3,iter--);//7
			this->calcPart(X1,Y2,X2,Y3,iter--);//8
			this->calcPart(X2,Y2,X3,Y3,iter--);//9
			return 0;
		}
		if(part==2)
		{
			for (int m=X1;m!=X2;m++)
			{
				for (int n=Y0; n!=Y1; n++)
				{
					this->matrixCarpet[m][n]=1;
				}
			}
			this->calcPart(X0,Y0,X1,Y1,iter--);//1
			//this->calcPart(X1,Y0,X2,Y1,iter--);//2
			this->calcPart(X2,Y0,X3,Y1,iter--);//3

			this->calcPart(X0,Y1,X1,Y2,iter--);//4
			this->calcPart(X1,Y1,X2,Y2,iter--);//5
			this->calcPart(X2,Y1,X3,Y2,iter--);//6

			this->calcPart(X0,Y2,X1,Y3,iter--);//7
			this->calcPart(X1,Y2,X2,Y3,iter--);//8
			this->calcPart(X2,Y2,X3,Y3,iter--);//9
			return 0;
		}
		if(part==3)
		{
			for (int m=X2;m!=X3;m++)
			{
				for (int n=Y0; n!=Y1; n++)
				{
					this->matrixCarpet[m][n]=1;
				}
			}
			this->calcPart(X0,Y0,X1,Y1,iter--);//1
			this->calcPart(X1,Y0,X2,Y1,iter--);//2
			//this->calcPart(X2,Y0,X3,Y1,iter--);//3

			this->calcPart(X0,Y1,X1,Y2,iter--);//4
			this->calcPart(X1,Y1,X2,Y2,iter--);//5
			this->calcPart(X2,Y1,X3,Y2,iter--);//6

			this->calcPart(X0,Y2,X1,Y3,iter--);//7
			this->calcPart(X1,Y2,X2,Y3,iter--);//8
			this->calcPart(X2,Y2,X3,Y3,iter--);//9
			return 0;
		}
		if(part==4)
		{
			for (int m=X0;m!=X1;m++)
			{
				for (int n=Y1; n!=Y2; n++)
				{
					this->matrixCarpet[m][n]=1;
				}
			}
			this->calcPart(X0,Y0,X1,Y1,iter--);//1
			this->calcPart(X1,Y0,X2,Y1,iter--);//2
			this->calcPart(X2,Y0,X3,Y1,iter--);//3

			//this->calcPart(X0,Y1,X1,Y2,iter--);//4
			this->calcPart(X1,Y1,X2,Y2,iter--);//5
			this->calcPart(X2,Y1,X3,Y2,iter--);//6

			this->calcPart(X0,Y2,X1,Y3,iter--);//7
			this->calcPart(X1,Y2,X2,Y3,iter--);//8
			this->calcPart(X2,Y2,X3,Y3,iter--);//9
			return 0;
		}
		if(part==5)
		{
			for (int m=X1;m!=X2;m++)
			{
				for (int n=Y1; n!=Y2; n++)
				{
					this->matrixCarpet[m][n]=1;
				}
			}
			this->calcPart(X0,Y0,X1,Y1,iter--);//1
			this->calcPart(X1,Y0,X2,Y1,iter--);//2
			this->calcPart(X2,Y0,X3,Y1,iter--);//3

			this->calcPart(X0,Y1,X1,Y2,iter--);//4
			//this->calcPart(X1,Y1,X2,Y2,iter--);//5
			this->calcPart(X2,Y1,X3,Y2,iter--);//6

			this->calcPart(X0,Y2,X1,Y3,iter--);//7
			this->calcPart(X1,Y2,X2,Y3,iter--);//8
			this->calcPart(X2,Y2,X3,Y3,iter--);//9
			return 0;
		}
		if(part==6)
		{
			for (int m=X2;m!=X3;m++)
			{
				for (int n=Y1; n!=Y2; n++)
				{
					this->matrixCarpet[m][n]=1;
				}
			}
			this->calcPart(X0,Y0,X1,Y1,iter--);//1
			this->calcPart(X1,Y0,X2,Y1,iter--);//2
			this->calcPart(X2,Y0,X3,Y1,iter--);//3

			this->calcPart(X0,Y1,X1,Y2,iter--);//4
			this->calcPart(X1,Y1,X2,Y2,iter--);//5
			//this->calcPart(X2,Y1,X3,Y2,iter--);//6

			this->calcPart(X0,Y2,X1,Y3,iter--);//7
			this->calcPart(X1,Y2,X2,Y3,iter--);//8
			this->calcPart(X2,Y2,X3,Y3,iter--);//9
			return 0;
		}
		if(part==7)
		{
			for (int m=X0;m!=X1;m++)
			{
				for (int n=Y2; n!=Y3; n++)
				{
					this->matrixCarpet[m][n]=1;
				}
			}
			this->calcPart(X0,Y0,X1,Y1,iter--);//1
			this->calcPart(X1,Y0,X2,Y1,iter--);//2
			this->calcPart(X2,Y0,X3,Y1,iter--);//3

			this->calcPart(X0,Y1,X1,Y2,iter--);//4
			this->calcPart(X1,Y1,X2,Y2,iter--);//5
			this->calcPart(X2,Y1,X3,Y2,iter--);//6

			//this->calcPart(X0,Y2,X1,Y3,iter--);//7
			this->calcPart(X1,Y2,X2,Y3,iter--);//8
			this->calcPart(X2,Y2,X3,Y3,iter--);//9
			return 0;
		}
		if(part==8)
		{
			for (int m=X1;m!=X2;m++)
			{
				for (int n=Y2; n!=Y3; n++)
				{
					this->matrixCarpet[m][n]=1;
				}
			}
			this->calcPart(X0,Y0,X1,Y1,iter--);//1
			this->calcPart(X1,Y0,X2,Y1,iter--);//2
			this->calcPart(X2,Y0,X3,Y1,iter--);//3

			this->calcPart(X0,Y1,X1,Y2,iter--);//4
			this->calcPart(X1,Y1,X2,Y2,iter--);//5
			this->calcPart(X2,Y1,X3,Y2,iter--);//6

			this->calcPart(X0,Y2,X1,Y3,iter--);//7
			//this->calcPart(X1,Y2,X2,Y3,iter--);//8
			this->calcPart(X2,Y2,X3,Y3,iter--);//9
			return 0;
		}
		if(part==9)
		{
			for (int m=X2;m!=X3;m++)
			{
				for (int n=Y2; n!=Y3; n++)
				{
					this->matrixCarpet[m][n]=1;
				}
			}
			this->calcPart(X0,Y0,X1,Y1,iter--);//1
			this->calcPart(X1,Y0,X2,Y1,iter--);//2
			this->calcPart(X2,Y0,X3,Y1,iter--);//3

			this->calcPart(X0,Y1,X1,Y2,iter--);//4
			this->calcPart(X1,Y1,X2,Y2,iter--);//5
			this->calcPart(X2,Y1,X3,Y2,iter--);//6

			this->calcPart(X0,Y2,X1,Y3,iter--);//7
			this->calcPart(X1,Y2,X2,Y3,iter--);//8
			//this->calcPart(X2,Y2,X3,Y3,iter--);//9
			return 0;
		}
    }
	return 1;
}
int SerpinskyCarpet::calcStart()
{
        this->calcPart(0,0,this->size_,this->size_,this->iter_);
    	return 0;
}


