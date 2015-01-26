#pragma once
#include "VisualComponent.h"

ref class Decorator : VisualComponent
{
	VisualComponent ^vid; 
public:
	Decorator(void);
	Decorator(VisualComponent ^v);

	/*virtual*/
	 virtual void draw() override;
	 virtual void drop() override;
};

