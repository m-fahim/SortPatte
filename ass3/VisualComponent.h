#pragma once
#include <iostream>

ref class VisualComponent abstract
{
public:
	VisualComponent(void);
	virtual void draw() = 0;
	virtual void drop() = 0;
};

