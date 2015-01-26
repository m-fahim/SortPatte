#pragma once
#include "SortStrat.h"
class ConStratBubbleSort : public SortStrat
{
public:
	ConStratBubbleSort(void);
	virtual int* sort( int v[], int n );
};

