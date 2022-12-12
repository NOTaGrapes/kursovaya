//Created By NOTaGrape
//---------------------------------------------------------------------------
#include "strCode.h"
//---------------------------------------------------------------------------

Str::Str()
{
	field_.resize(1);
	for(int i=0;i!= field_.size();i++)
	{
		field_[i]=0;
	}
}
Str::Str(int size)
{
	field_.resize(size);
	for(int i=0;i!= field_.size();i++)
	{
		field_[i]=0;
	}
}
int Str::size()
{
	return  field_.size();
}
int Str::resize(int size)
{
	field_.clear();
	field_.resize(size);
	for(int i=0;i!= field_.size();i++)
	{
		field_[i]=0;
	}
	return 0;
}