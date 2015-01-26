#include "StdAfx.h"
#include "ConObserverChartSec.h"

using namespace System;

ConObserverChartSec::ConObserverChartSec(void)
{
}

ConObserverChartSec::ConObserverChartSec(std::string name)
{
	this->name = name;

}

void ConObserverChartSec::Update(int v[]){
	for (int i = 0 ; i < 10 ; i++){
		this->v[i] = v[i];
	}
	//Form1->
	//Lets print on console just to test the working
	//std::cout << "Price at "<< name << " is now "<< price << "\n";

}

int* ConObserverChartSec::getData(){
	return this->v;
}

string ConObserverChartSec::getName(){
	return this->name;
}
