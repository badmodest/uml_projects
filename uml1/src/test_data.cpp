#include "IntData.h"
int main()
IntData data1;
IntData data2(10);
IntData * pData1 = new IntData;
IntData * pData2 = new IntData(20);


datal.print();
data2.print();
pData1->print();
pData2->print();
delete pData1;
delete pData2;
return 0;