
#include"Unit.h"
#include"Common.h"
#include"Definition.h"

Unit::Unit()
{
	status._hp = 0;
	status._tec = 0;
	status._luc = 0;
	status._str = 0;
	status._spd = 0;
	status._mde = 0;
	status._mag = 0;
	status._def = 0;
}
Unit::~Unit()
{

}
void Unit::PrintStatus()
{
	printf("UnitのHPは%dです\n", status._hp);
	printf("UnitのTECは%dです\n", status._tec);
	printf("UnitのLUCは%dです\n", status._luc);
	printf("UnitのSTRは%dです\n", status._str);
	printf("UnitのSPDは%dです\n", status._spd);
	printf("UnitのMDEは%dです\n", status._mde);
	printf("UnitのMAGは%dです\n", status._mag);
	printf("UnitのDEFは%dです\n", status._def);
}
