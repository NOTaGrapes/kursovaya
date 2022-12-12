//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "settingsFormCode.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TsettingsForm *settingsForm;
//---------------------------------------------------------------------------
__fastcall TsettingsForm::TsettingsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TsettingsForm::FormClose(TObject *Sender, TCloseAction &Action)
{
    //stuff
}
//---------------------------------------------------------------------------


