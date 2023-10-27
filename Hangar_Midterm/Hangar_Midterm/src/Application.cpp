#include "HangarApplication.h"

int main()
{
	HangarApplication hangarWindow;

	hangarWindow.InitializeWindow(1366, 728);

	Debugger::print = true;

	hangarWindow.Render();

	return -1;
}