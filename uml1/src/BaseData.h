#ifndef _BASEDATA_H__
#define _BASEDATA_H_
#include <cstdio>
class BaseData {
public:
BaseData();
virtual ~BaseData();
virtual void print()=0;
};
#endif
