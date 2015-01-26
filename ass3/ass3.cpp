// ass3.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
//Form1 frm1;

using namespace ass3;


[STAThreadAttribute]


//extern Form1^ frm
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Form1^ frm =gcnew Form1();
	Application::Run(frm);
	//extern Form1^ frm1;
	return 0;
}
