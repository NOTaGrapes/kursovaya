//Created By NOTaGrape
//---------------------------------------------------------------------------
#include "irregularFractalCode.h"
#include "randomizerCode.h"
#include <random>
#include <math.h>
#include <time.h>
#include <string.h>
#include <iostream>
//---------------------------------------------------------------------------

irregularFractal::irregularFractal()
{
	iter_=0;
	perc_=0;
	carpet.resize(1);
}

irregularFractal::irregularFractal(int iter, double perc, int size)
{
	iter_=iter;
	perc_=perc;
	carpet.resize(size);
}

int irregularFractal::reinit(int iter, double perc, int size)
{
	iter_=iter;
	perc_=perc;
	carpet.resize(size);
	return 0;
}

int irregularFractal::size() //����� �������� ������� �������� � ������ ������ �������
{
	return carpet.size();
}

int irregularFractal::cut(int x0,int y0, int x1, int y1) //��������� ����� ��������
{
	for(int m=x0;m!=x1;m++)
	{
		for(int n=y0;n!=y1;n++)
		{
			carpet[m][n]=1;
		}
	}
	return 0;
}

int irregularFractal::calcPartIreg(int x0,int y0, int x3, int y3, int iter)
{
	//���������� ����� ����������� �� �������������� ������.
	//����-�� �������� ����� ���������� iter_
	//������ ����� �������� � �������� ����� �����������!
	////////////////////////////////////////////////////////////////////////////
	//		    x0     x1     x2     x3
	//		  y0 #------#------#------# y0
	//		     |  1   |  2   |  3   |
	//		     |      |      |      |
	//		  y1 #------#------#------# y1
	//		     |  4   |  5   |  6   |
	//		     |      |      |      |
	//		  y2 #------#------#------# y2
	//		     |  7   |  8   |  9   |
	//		     |      |      |      |
	//		  y3 #------#------#------# y3
	//		     x0     x1     x2     x3
	////////////////////////////////////////////////////////////////////////////
	int x1=(int)((x3-x0)/3)+x0;
	int y1=(int)((y3-y0)/3)+y0;
	int x2=(int)(2*(x3-x0)/3)+x0;
	int y2=(int)(2*(y3-y0)/3)+y0;
	srand(time(NULL));
	int percs[100];
	int perc[9]={0,0,0,0,0,0,0,0,0};
	for (int i=0; i!=100; i++)
	{
		if(i<=(perc_*100)-1)
		{
			percs[i]=1;
		}
		else
		{
			percs[i]=0;
		}

	}
	for (int i = 0; i != 9; i++)
	{
		perc[i]=percs[rand() % 100];
	}
//1  2  3
	iter--;
	if(iter!=0)
	{
		if(perc[0]==1)
		{
			cut(x0,y0,x1,y1);//1
		}
		else
		{
			calcPartIreg(x0,y0,x1,y1,iter);//1
		}
		if(perc[1]==1)
		{
			cut(x0,y1,x1,y2);//2
		}
		else
		{
			calcPartIreg(x0,y1,x1,y2,iter);//2
		}
		if(perc[2]==1)
		{
			cut(x0,y2,x1,y3);//3
		}
		else
		{
			calcPartIreg(x0,y2,x1,y3,iter);//3
		}
//4  5  6
		if(perc[3]==1)
		{
			cut(x1,y0,x2,y1);//4
		}
		else
		{
			calcPartIreg(x1,y0,x2,y1,iter);//4
		}
		if(perc[4]==1)
		{
			cut(x1,y1,x2,y2);//5
		}
		else
		{
			calcPartIreg(x1,y1,x2,y2,iter);//5
		}
		if(perc[5]==1)
		{
			cut(x1,y2,x2,y3);//6
		}
		else
		{
			calcPartIreg(x1,y2,x2,y3,iter);//6
		}
//7  8  9
		if(perc[6]==1)
		{
			cut(x2,y0,x3,y1);//7
		}
		else
		{
			calcPartIreg(x2,y0,x3,y1,iter);//7
		}
		if(perc[7]==1)
		{
			cut(x2,y1,x3,y2);//8
		}
		else
		{
			calcPartIreg(x2,y1,x3,y2,iter);//8
		}
		if(perc[8]==1)
		{
			cut(x2,y2,x3,y3);//9
		}
		else
		{
			calcPartIreg(x2,y2,x3,y3,iter);//9
		}
	}

	return 0;
}

int irregularFractal::calcPartReg(int x0,int y0, int x3, int y3, int iter)
{
	//���������� ����� ����������� �� �������������� ������.
	//����-�� �������� ����� ���������� iter_
	//������ ����� �������� � �������� ����� �����������!
	////////////////////////////////////////////////////////////////////////////
	//		    x0     x1     x2     x3
	//		  y0 #------#------#------# y0
	//		     |  1   |  2   |  3   |
	//		     |      |      |      |
	//		  y1 #------#------#------# y1
	//		     |  4   |  5   |  6   |
	//		     |      |      |      |
	//		  y2 #------#------#------# y2
	//		     |  7   |  8   |  9   |
	//		     |      |      |      |	
	//		  y3 #------#------#------# y3
	//		     x0     x1     x2     x3
	////////////////////////////////////////////////////////////////////////////
	int x1=(int)((x3-x0)/3)+x0;
	int y1=(int)((y3-y0)/3)+y0;

	int x2=(int)(2*(x3-x0)/3)+x0;
	int y2=(int)(2*(y3-y0)/3)+y0;
    iter--;
	cut(x1,y1,x2,y2);
	if (iter!=0)
	{
		//1  2  3
		calcPartReg(x0,y0,x1,y1,iter);//1
		calcPartReg(x0,y1,x1,y2,iter);//2
		calcPartReg(x0,y2,x1,y3,iter);//3
		//4  5  6
		calcPartReg(x1,y0,x2,y1,iter);//4
		//calcPartReg(x1,y1,x2,y2,iter);//5
		calcPartReg(x1,y2,x2,y3,iter);//6
		//7  8  9
		calcPartReg(x2,y0,x3,y1,iter);//7
		calcPartReg(x2,y1,x3,y2,iter);//8
		calcPartReg(x2,y2,x3,y3,iter);//9
	}

	return 0;
}

int irregularFractal::calcStartIreg()
{
	if (iter_>0)
	{
		calcPartIreg(0,0,carpet.size(),carpet.size(),iter_+1);
		return 0;
	}
	else
	{
		return 1;
	}
}

int irregularFractal::calcStartReg()
{
	if (iter_>0)
	{
		calcPartReg(0,0,carpet.size(),carpet.size(),iter_);
		return 0;
	}
	else
	{
		return 1;
	}
}

double irregularFractal::boxCount()
{
	int stepsHang[7] = {60,50,30,15,10,6,5};
	int stepsIter = 0;
	long int stepNCount = 0;
	int stepNHang[7] = {0,0,0,0,0,0,0};
	for (stepsIter = 0; stepsIter != 7; stepsIter++)//���� ����� �������� �����
	{
		for(int i=0; i!=600-stepsHang[stepsIter]; i+=stepsHang[stepsIter])//���� �������� ���������� �� ����� �� �
		{
			for(int j=0; j!=600-stepsHang[stepsIter]; j+=stepsHang[stepsIter])//���� �������� ���������� �� �����  �� �
			{
				stepNCount = 0;
				for(int ii=i; ii!=i+stepsHang[stepsIter]; ii++)//���� ������� �� � � ������
				{
					for(int jj=j; jj!=j+stepsHang[stepsIter]; jj++)//���� ������� �� � � ������
					{
						if(carpet[ii][jj]==0)
						{
							stepNCount+=1;
						}
					}
				}
				if(stepNCount>=10)
				{
					stepNHang[stepsIter]++;
				}
			}
					}
		stepNCount = 0;
	}
	//��� ��� �� ��������, �� ��� ��� ���� ���...
	double answer = 0.0;
	for(int i=1;i!=7;i++)
	{
		/*summNE-=(stepNHang[i]*(1.0/stepsHang[i]));
		summN-=stepNHang[i];
		summE+=(1.0/stepsHang[i]);
		summE2+=((1.0/stepsHang[i])*(1.0/stepsHang[i]));  */
		answer+= -log(stepNHang[i])/log(1.0/stepsHang[i]);
	}
	/*answer = ((7*summNE)-(summN*summE))/((7*summE2)-(summE*summE));*/
	return (answer/7)-1;//-log(stepNHang[2])/log(1.0/stepsHang[2]);

}

int irregularFractal::calcStartLoop(int loops)
{
	if (iter_>0)
	{
		calcPartIreg(0,0,carpet.size(),carpet.size(),iter_+1);
        boxCount();
		return 0;
	}
	else
	{
		return 1;
	}
}

}
