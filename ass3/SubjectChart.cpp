#include "StdAfx.h"
#include "SubjectChart.h"
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

SubjectChart::SubjectChart(void)
{
}

void SubjectChart::Attach(ConObserverChartSec *cSec)
{
	list.push_back(cSec);
}
void SubjectChart::Detach(ConObserverChartSec *cSec)
{    
	list.erase(std::remove(list.begin(), list.end(), cSec), list.end());    
}

void SubjectChart::Notify(int v[])
{
	for(vector<ConObserverChartSec*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
	{
		if(*iter != 0)
		{
			(*iter)->Update(v);
		}
	}
}

std::vector<class ConObserverChartSec*> SubjectChart::getList()
{    
	return  list;
}
