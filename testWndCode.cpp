//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "testWndCode.h"
//my additional classes
#include "irregularFractalCode.h"
#include "matrixCode.h"
#include "strCode.h"
#include "randomizerCode.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TtestWnd *testWnd;
irregularFractal testCarpet;
int size = 90;
//---------------------------------------------------------------------------
__fastcall TtestWnd::TtestWnd(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TtestWnd::testButtonClick(TObject *Sender)
{
   /*	testPaintBox->Canvas->CleanupInstance;
	testPaintBox->Canvas->Brush->Color=clBlack;
        testPaintBox->Canvas->Pen->Color=clWhite;
	testPaintBox->Canvas->FillRect(Rect(0,0,size,size));
        testCarpet.reinit(size,1);
        testCarpet.calcStart();
        for(int n=0;n!=size;n++)
        {
                for(int m=0;m!=size;m++)
        	{
                	if(testCarpet.carpet[n][m]==1)
                        {
                        	testPaintBox->Canvas->MoveTo(n,m);
                                testPaintBox->Canvas->LineTo(n,m);

                        }

			}
		}          */
}
//---------------------------------------------------------------------------


void __fastcall TtestWnd::testPaintBoxPaint(TObject *Sender)
{
  /*	testPaintBox->Canvas->CleanupInstance;
	testPaintBox->Canvas->Brush->Color=clBlack;
        testPaintBox->Canvas->Pen->Color=clWhite;
	testPaintBox->Canvas->FillRect(Rect(0,0,600,600));*/
}
//---------------------------------------------------------------------------

