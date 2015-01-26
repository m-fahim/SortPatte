#include "StdAfx.h"
#include "ConStratInsertionSort.h"
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;
	using std::cout; 
	using std::endl;

ConStratInsertionSort::ConStratInsertionSort(void)
{
}

int* ConStratInsertionSort::sort( int v[], int n ) {
	int temp = v[0];
	for(int i = 1; i < n; i++)  // ar[i] is element to insert
		   {
		        temp = v[i];
		        int j = 0;
		       for(j = i; j > 0; j--)
		            if(temp < v[j - 1])
		               v[j] = v[j - 1];
		            else break;
		        v[j] =  temp;
		    }
	  return v;
   }
