#include "HangarApplication.h"

int main()
{
	HangarApplication hangarWindow;

	hangarWindow.InitializeWindow(800, 600);

	Debugger::print = true;

	hangarWindow.Render();

	return -1;
}