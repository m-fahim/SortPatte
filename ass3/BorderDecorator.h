#pragma once
#include "Decorator.h"

ref class BorderDecorator : Decorator
{
public:
	BorderDecorator(void);
	BorderDecorator(VisualComponent ^v, System::Windows::Forms::DataVisualization::Charting::Chart^ c);

	System::Windows::Forms::DataVisualization::Charting::Chart^ charAdd;

	/*virtual*/
	virtual void draw() override;
	virtual void drop() override;
};

