#ifndef __BASEDATA_H__
#define __BASEDATA_H__
#include <cstdio>
class BaseData {
public:
	BaseData();
	virtual ~BaseData();
	virtual void print()=0;
};

#endif
