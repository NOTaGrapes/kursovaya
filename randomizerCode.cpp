//Created By NOTaGrape
//---------------------------------------------------------------------------
#include "randomizerCode.h"
#include <random>
#include <cmath>
#include <iostream>
#include <time.h>
//---------------------------------------------------------------------------

int randomizer(double inputPerc)
{
	srand(time(NULL));
	int localPerc = inputPerc*100;
	int percs[100];
	for (int i=0; i!=100; i++)
	{
		if(i<=localPerc-1)
		{
			percs[i]=1;
		}
		else
		{
			percs[i]=0;
		}

	}
	int result = percs[rand() % 100];
	return result;
}
int randomizerSteps()
{
	int answer[4]={1,2,3,4};
	return answer[rand() % 4];
}
//---------------------------------------------------------------------------