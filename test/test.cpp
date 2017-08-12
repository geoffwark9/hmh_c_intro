#include <windows.h>

/*
multi-line comment
*/

// Function declaration
void foo(void);

void foo(void) // Function signature or prototype... or definition
{
	OutputDebugStringA(
		"This is the first thing we have actually printed.\n");
}


int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	foo();
}


