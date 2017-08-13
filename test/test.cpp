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

	char *Foo = "This is the first thing we have actually printed.\r\n";
	// This is basically bypassing the macro so we can print an ASCII string.
	OutputDebugStringA(
		"This is the first thing we have actually printed.\n"); // setting a breakpoint on this line doesn't seem to work...
	
	OutputDebugStringA(
		"Line 0\\Line 1\n");
}


int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	char SmallS; // 8 bits  -  256 different values (-128 to 127)
	char unsigned SmallU; // 8 bits unsigned  -  256 diff values (0 to 255)

	short MediumS; // 16 bits  - 65536
	short unsigned  MediumU;
	
	int LargeS; // 32 bits -  4 billion
	int unsigned LargeU;

	int Integer;

	char unsigned Test;
	Test = 255;
	Test = Test + 1;

	// Funny story about = meaning 'assignment' not 'equals'
	Integer = 5;
	Integer = 5 + 2;

	Integer = Integer + 5;

	foo();
}


