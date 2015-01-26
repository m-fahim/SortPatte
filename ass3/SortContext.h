#pragma once
#include "SortStrat.h"
class SortContext
{
public:
	SortContext(void);

   int* readVector( int v[], int n );
   void reqBS();
   void reqIS();
   void destroyPointer();

   ~SortContext(void);

private:
   SortStrat* imp_strat;
};

