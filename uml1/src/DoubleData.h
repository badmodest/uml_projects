#ifndef __DOUBLEDATA_H__
#define __DOUBLEDATA_H__

#include "BaseData.h"

class DoubleData : public BaseData {
private:
double d_data;
public:
DoubleData(double data=0);
~DoubleData();
void print();
};
#endif
