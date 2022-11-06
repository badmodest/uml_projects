#include "IntData.h"

IntData::IntData(int data)
{
	m_data = data;
}
IntData::~IntData()
{
}
void IntData::print()
{
printf ("%d\n",m_data) ;
}
