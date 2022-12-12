//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("settingsFormCode.cpp", settingsForm);
USEFORM("testWndCode.cpp", testWnd);
USEFORM("mainFormCode.cpp", mainForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->Title = "ImageLarge";
		Application->CreateForm(__classid(TmainForm), &mainForm);
		Application->CreateForm(__classid(TsettingsForm), &settingsForm);
		Application->CreateForm(__classid(TtestWnd), &testWnd);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
