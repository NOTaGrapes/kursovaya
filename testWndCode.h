//---------------------------------------------------------------------------

#ifndef testWndCodeH
#define testWndCodeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TtestWnd : public TForm
{
__published:	// IDE-managed Components
	TPaintBox *testPaintBox;
	TButton *testButton;
	void __fastcall testButtonClick(TObject *Sender);
	void __fastcall testPaintBoxPaint(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TtestWnd(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TtestWnd *testWnd;
//---------------------------------------------------------------------------
#endif