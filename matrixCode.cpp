//Created By NOTaGrape
//---------------------------------------------------------------------------
#include "matrixCode.h"
#include "strCode.h"
//---------------------------------------------------------------------------

Matrix::Matrix()
{
	fields_.resize(1);
	for (int i=0;i!= fields_.size();i++)
	{
		fields_[i].resize(1);
	}
}
Matrix::Matrix(int size)
{
	fields_.resize(size);
	for (int i=0;i!= fields_.size();i++)
	{
		fields_[i].resize(size);
	}
}
int Matrix::size()
{
	return  fields_.size();
}
int Matrix::resize(int size)
{
	fields_.resize(size);
	for (int i=0;i!= fields_.size();i++)
	{
		fields_[i].resize(size);
	}
	return 0;
}