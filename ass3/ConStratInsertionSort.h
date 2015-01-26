#pragma once
#include "SortStrat.h"
class ConStratInsertionSort : public SortStrat
{
public:
	ConStratInsertionSort(void);
	virtual int* sort( int v[], int n );
};

