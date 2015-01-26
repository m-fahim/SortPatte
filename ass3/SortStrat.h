#pragma once

class SortStrat 
{
public:
	SortStrat(void);
	virtual int* sort(int v[], int n)=0;
};

