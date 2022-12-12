//---------------------------------------------------------------------------

#pragma hdrstop

#include "outputPictureCode.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

OutputPicture::OutputPicture(irregularFractal* baseCarpet)
{
       T1 colorBlack=();
       T2 colorWhite=();
        for(int m=0;m!=baseCarpet.size();m++)
        {
            for(int n=0;n!=baseCarpet.size();n++)
            {
                if()
                {
                        image[m][n] = colorWhite;
                }
                else
                {
                        image[m][n] = colorBlack;
                }
            }
        }
}
