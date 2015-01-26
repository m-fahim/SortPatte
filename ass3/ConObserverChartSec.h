#pragma once
#include <iostream>
#include <string>
#include "ObserverChartSec.h"
//#include "Form1.h"


using namespace std;

class ConObserverChartSec : public ObserverChartSec
{
	std::string name;
	int v[10];
	//ass3::Form1->textBox0->Text ="g";
	//float price;
public:
	ConObserverChartSec(void);
	ConObserverChartSec(std::string name);
	void Update(int v[]); 
	int* getData();
	string getName();

};

