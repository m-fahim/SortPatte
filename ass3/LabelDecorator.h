#pragma once
#include "Decorator.h"
ref class LabelDecorator : public Decorator
{
public:
	LabelDecorator(void);
	LabelDecorator(VisualComponent ^v, System::Windows::Forms::DataVisualization::Charting::Series^ s);

	System::Windows::Forms::DataVisualization::Charting::Series^ series;

	/*virtual*/
	 virtual void draw() override;
	 virtual void drop() override;
};

