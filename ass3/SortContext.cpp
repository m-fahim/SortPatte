#include "StdAfx.h"
#include "SortContext.h"
#include "ConStratBubbleSort.h"
#include "ConStratInsertionSort.h"


SortContext::SortContext(void)
{
	imp_strat = new ConStratBubbleSort();
}

int* SortContext::readVector( int v[], int n ) {
     v = imp_strat->sort( v, n );    
	 return v;
}

void SortContext::reqBS() {
      destroyPointer();
      imp_strat = new ConStratBubbleSort();
}

void SortContext::reqIS() {
      destroyPointer();
      imp_strat = new ConStratInsertionSort();
} 

void SortContext::destroyPointer()
{
  delete imp_strat;
}

SortContext::~SortContext(void)
{
	delete imp_strat;
}

