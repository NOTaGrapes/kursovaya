//Created By NOTaGrape
//---------------------------------------------------------------------------
#ifndef diffusionCoreCodeH
#define diffusionCoreCodeH
//---------------------------------------------------------------------------
#include <vector>
#include "irregularFractalCode.h"
#include "matrixCode.h"
//---------------------------------------------------------------------------
struct StructPoint
{
	int x;		// X ���������� �����
	int y;		// Y ���������� �����
};

class DiffusionCore
{
public:
	DiffusionCore();
	DiffusionCore(irregularFractal&,int,int);
	int reinit(irregularFractal&,int,int);

	int	makeSubStep(irregularFractal&);
	int makeMainStep(irregularFractal&);


	StructPoint startCheck(irregularFractal&,StructPoint,int);
	int	collisionCheck(irregularFractal&,StructPoint);
	int borderCheck(StructPoint);


	int showIterMain();
	int showIterSub();
	int changeSubSize(int);
	int preproduction();
	double showMemoryRecord(int);
	StructPoint showPoint();
	StructPoint showPosesRecord(int);
        std::vector <double>& sendMemory();
private:
	Matrix fractal_;
	std::vector <double> memory_;
	std::vector <StructPoint> poses_;
	int sizeGrid_;
	int iterSubSteps_;
	int sizeSubSteps_;
	int iterMainSteps_;
	int sizeMainSteps_;
	StructPoint point_;
};
//---------------------------------------------------------------------------
#endif
