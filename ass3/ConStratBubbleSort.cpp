#include "StdAfx.h"
#include "ConStratBubbleSort.h"
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>


using namespace std;
	using std::cout; 
	using std::endl;

ConStratBubbleSort::ConStratBubbleSort(void)
{
}

int* ConStratBubbleSort::sort( int v[], int n ) {
      for (int i=n-1; i > 0; --i)
         for (int j=0; j < i; ++j)
            if (v[j] > v[j+1]) {
               int t = v[j];
               v[j] = v[j+1];
               v[j+1] = t;
            }
	  return v;
   }
