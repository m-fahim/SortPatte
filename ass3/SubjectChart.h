#pragma once
#include <iostream>
#include <vector>
#include <list>
#include "ConObserverChartSec.h"

 class SubjectChart
{
	std::vector<class ConObserverChartSec*> list;

public:
	SubjectChart(void);
	void Attach(ConObserverChartSec *cSec);
	void Detach(ConObserverChartSec *cSec);
	void Notify(int v[]); 
	std::vector<class ConObserverChartSec*> getList();
};

