#include "StdAfx.h"
#include "BorderDecorator.h"
#include <iostream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

BorderDecorator::BorderDecorator(void)
{
}

BorderDecorator::BorderDecorator(VisualComponent ^v, System::Windows::Forms::DataVisualization::Charting::Chart^ c): Decorator(v){
	this->charAdd = c;
}

/*virtual*/
void BorderDecorator::draw()
{
	Decorator::draw();
	this->charAdd->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
}

void BorderDecorator::drop()
{
	Decorator::drop();
	this->charAdd->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
}