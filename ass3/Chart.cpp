#include "StdAfx.h"
#include "Chart.h"
#include <iostream>
using namespace std;

Chart::Chart(void)
{
}

Chart::Chart(System::Windows::Forms::DataVisualization::Charting::Series^ s)
{
	this->series = s;
}

Chart::Chart(System::Windows::Forms::DataVisualization::Charting::Chart^ c)
{
	this->charAdd = c;
}

/*virtual*/
void Chart::draw()
{
	MessageBox::Show("New Decorator is Added Successfully","Progress", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}

/*virtual*/
void Chart::drop()
{
	MessageBox::Show("Decorator is Dropped Successfully","Progress", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}