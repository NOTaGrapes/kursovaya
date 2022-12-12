//---------------------------------------------------------------------------

#ifndef mainFormCodeH
#define mainFormCodeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <VCLTee.Chart.hpp>
#include <VCLTee.Series.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeProcs.hpp>
//---------------------------------------------------------------------------
class TmainForm : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *SettingsString;
	TMenuItem *FileString;
	TMenuItem *N2;
	TMenuItem *ExitString;
	TStatusBar *StatusBar1;
	TPaintBox *PaintBox1;
	TGroupBox *GroupBox2;
	TButton *buttonPaint;
	TButton *buttonReset;
	TGroupBox *groupDiff;
	TButton *buttonOneStart;
	TButton *buttonDiffChart;
	TChart *Chart1;
	TLineSeries *Series1;
	TButton *buttonCycStart;
	TProgressBar *ProgressBar1;
	TLabel *Label1;
	TButton *Button1;
	TButton *buttonPaintReg;
	TChart *Chart2;
	TLabel *Label2;
	TLineSeries *LineSeries1;
	TGroupBox *GroupBox1;
	TLabeledEdit *editPerc;
	TLabeledEdit *editIter;
	TLabeledEdit *editCount;
	void __fastcall SettingsStringClick(TObject *Sender);
	void __fastcall ExitStringClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall PaintBox1Paint(TObject *Sender);
	void __fastcall buttonPaintClick(TObject *Sender);
	void __fastcall buttonResetClick(TObject *Sender);
	void __fastcall buttonOneStartClick(TObject *Sender);
	void __fastcall buttonDiffStopClick(TObject *Sender);
	void __fastcall buttonCycStartClick(TObject *Sender);
	void __fastcall buttonDiffChartClick(TObject *Sender);
	void __fastcall buttonPaintRegClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmainForm *mainForm;
//---------------------------------------------------------------------------
#endif
