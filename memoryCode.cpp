//Created By NOTaGrape
//---------------------------------------------------------------------------
#include "memoryCode.h"
#include "matrixCode.h"
//---------------------------------------------------------------------------
 Memory::Memory()
{
	field_.resize(1);
	for (int i=0;i!= field_.size();i++)
	{
		field_[i].resize(1);
	}
}
Memory::Memory(int size)
{
	field_.resize(size);
	for (int i=0;i!= field_.size();i++)
	{
		field_[i].resize(size);
	}
}
int Memory::size()
{
	return  field_.size();
}
int Memory::resize(int size)
{
	field_.resize(size);
	for (int i=0;i!= field_.size();i++)
	{
		field_[i].resize(size);
	}
	return 0;
}

int Memory::add()
{
	field_.pushback
	return 0;
}
