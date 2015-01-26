#include "StdAfx.h"
#include "Decorator.h"


Decorator::Decorator(void)
{
}

Decorator::Decorator(VisualComponent ^v)
{
	vid = v;
}

/*virtual*/
void Decorator::draw()
{
	vid->draw(); 
}

void Decorator::drop()
{
	vid->drop(); 
}