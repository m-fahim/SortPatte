#include "StdAfx.h"
#include "LabelDecorator.h"
#include <iostream>
using namespace std;

LabelDecorator::LabelDecorator(void)
{
}

LabelDecorator::LabelDecorator(VisualComponent ^v, System::Windows::Forms::DataVisualization::Charting::Series^ s ): Decorator(v){
	this->series = s;
}

/*virtual*/
void LabelDecorator::draw()
{
	Decorator::draw();
	this->series->IsValueShownAsLabel = true;
}

void LabelDecorator::drop()
{
	Decorator::drop();
	this->series->IsValueShownAsLabel = false;
}