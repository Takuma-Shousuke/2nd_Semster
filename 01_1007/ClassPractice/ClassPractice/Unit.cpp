#include"Unit.h"
#include"Common.h"

Unit::Unit()
{
	m_hp = 0;
	m_tec = 0;
	m_luc = 0;
	m_str = 0;
	m_spd = 0;
	m_mde = 0;
	m_mag = 0;
	m_def = 0;
}
Unit::~Unit()
{

}
void Unit::PrintStatus()
{
	printf("UnitのHPは%dです\n", m_hp);
	printf("UnitのTECは%dです\n", m_tec);
	printf("UnitのLUCは%dです\n", m_luc);
	printf("UnitのSTRは%dです\n", m_str);
	printf("UnitのSPDは%dです\n", m_spd);
	printf("UnitのMDEは%dです\n", m_mde);
	printf("UnitのMAGは%dです\n", m_mag);
	printf("UnitのDEFは%dです\n", m_def);
}