#pragma once
#include "VisualComponent.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

ref class Chart : VisualComponent
{
public:
	Chart(void);
	Chart(System::Windows::Forms::DataVisualization::Charting::Series^ s);
	Chart(System::Windows::Forms::DataVisualization::Charting::Chart^ c);
	System::Windows::Forms::DataVisualization::Charting::Series^ series;
	System::Windows::Forms::DataVisualization::Charting::Chart^ charAdd;
	/*virtual*/
	 virtual void draw() override;
	 virtual void drop() override;
};

