#include <windows.h>

/*
multi-line comment
*/

// Function declaration
void foo(void);

void foo(void) // Function signature or prototype... or definition
{
	// 'A' means ASCII (or ANSI?)  -->  8-bit
	// 'W' means wide (Unicode)    --> 16-bit

	// This is basically bypassing the macro so we can print an ASCII string.
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


