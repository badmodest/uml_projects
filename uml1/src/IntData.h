#ifndef __INTDATA_H__
#define __INTDATA_H__

#include "BaseData.h"

class IntData : public BaseData {
private:
int m_data;
public:
IntData(int data=0);
~IntData();
void print();
};
#endif