#include <windows.h>
#include <stdio.h>

/*
multi-line comment
*/

void bar(void)
{
	int Barvariable;
	
	Barvariable = 100;
}

// Function declaration
void foo(void);

void foo(void) // Function signature or prototype... or definition
{
	/*
	// 'A' means ASCII (or ANSI?)  -->  8-bit
	// 'W' means wide (Unicode)    --> 16-bit

	char *Foo = "This is the first thing we have actually printed.\r\n";
	// This is basically bypassing the macro so we can print an ASCII string.
	OutputDebugStringA(
		"This is the first thing we have actually printed.\n"); // setting a breakpoint on this line doesn't seem to work...
	
	OutputDebugStringA(
		"Line 0\\Line 1\n");
	// WINDOWS - \r\n
	// Unix - \n
	// This gets translated by Windows so you don't need the \r in most cases.

	printf("\nThis is a thing.\n");
	*/

	int Foovariable;
	
	Foovariable = 200;

	bar();
}

// pragma
// __attribute__
// use above to do the memory they way you want (aka 'pack tightly')
// not really discussed tonight
struct projectile
{
	// NOTE(geoff): These are the members, or "fields", of this structure!

	
	short Damage; // NOTE(geoff): This is how much damage it does on impact
	char Two;
	short ParticlesPerSecond; // NOTE(geoff): For special effects
	char One; // NOTE(geoff): 1 if it's on fire, 8 if it's not
	char Three;
	

	// 1 byte + 4 bytes + 4 bytes + 2 bytes = 11 bytes
	// EXPECTED, but ACTUAL is 16 bytes

};


int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	/*
	char SmallS; // 8 bits  -  256 different values (-128 to 127)
	signed char SmallU; // 8 bits unsigned  -  256 diff values (0 to 255)

	short MediumS; // 16 bits  - 65536
	short unsigned  MediumU;

	int LargeS; // 32 bits -  4 billion
	int unsigned LargeU;
	*/
	//int Integer;

	/*
	char unsigned Test;
	char unsigned *TestPointer;

	TestPointer = &Test;

	Test = 255;
	Test = Test + 1;

	// Funny story about = meaning 'assignment' not 'equals'
	/*
	Integer = 5;
	Integer = 5 + 2;

	Integer = Integer + 5;
	*/

	//foo();
	/*

	 0 - 0
	 1 - 1
	 2 - 2
	 3 - 3
	 4 - 4
	 5 - 5
	 6 - 6
	 7 - 7
	 8 - 8
	 9 - 9
	10 - A
	11 - B
	12 - C
	13 - D
	14 - E
	15 - F

	0xA = 10
	0xAA = 16*10 + 10 = 170
	0xAAA = 16*16*10 + 16*10 + 10 =

	444 = 4*100 + 4*10 + 4

	*/

	projectile Test;

	/*int SizeOfChar = sizeof(char unsigned);
	int SizeOfInt = sizeof(int);
	int SizeOfProjectile = sizeof(projectile);
	int SizeOfTest = sizeof(Test);


	Test.IsThisOnFire = 1;
	Test.Damage = 2;// + Test.IsThisOnFire; //if this came before the value of
											   //Test.IsThisOnFire would be w/e it
											   //was in memory (a bug)
	Test.ParticlesPerSecond = 3;
	Test.HowManyCooks = 4;

	//projectile *ProjectilePointer = &Test;
	unsigned short *MrPointerMan = (unsigned short *)&Test;

	projectile Projectiles[40];

	/*  For next stream
	int WhichProjectile = 1;
	if (WhichProjectile == 1)
	{
		// do something projectile 1
	}
	else
	{
		// do it to projectile 0
	};*/

	/*int WhichProjectile = 4;
	Projectiles[WhichProjectile];

	projectile *ProjectilePointer = Projectiles;

	int SizeOfProjectiles = sizeof(Projectiles); // 16*40
	int SizeOfProjectilePointer = sizeof(ProjectilePointer); // 4

	Projectiles[30].Damage = 60;
	(ProjectilePointer + 30)->Damage = 100;
	((projectile *)((char *)ProjectilePointer + 30 * sizeof(projectile)))->Damage = 200;

	char *BytePointer = (char *)ProjectilePointer;
	BytePointer = BytePointer + 30 * sizeof(projectile);
	projectile *Thirty = (projectile *)BytePointer;
	Thirty->Damage = 300;

	// .   for actual thing
	// ->  for pointer
	// compiler always tells you which to use if you fuck up


	// little endian - x86, arm, x64
	// big endian - powerpc

//	Test = 2*1000*1000*1000;
	//        52 1
	//        15 2631
	//        26 8426 8421
	// 0000 0001 1111 0100 - little endian*/

	/*
	int X = 16;
	short Y = (short)X;
	char Z = (char)X;

	int *xPtr = &X;
	short *yPtr = (short *)&X;
	*/

	//int x = 5;
	//int y = 10;
	//int z = 12;

	//PEMDAS
	// can't infer - aka can't do (x+y)z must do (x+y)*z
	//x = -y + (z + x)*z + y/z - z; // can't do powers (need to use function 'pow')

	//     8421
	// 00000001
	// 00000100

	// hex - shift bits
	/*x = 0xA; // A = 10
	x = x << 1;
	x = x << 1;
	x = x << 1;
	x = x >> 1;
	x = x >> 1;
	x = x >> 1;
	x = x << 1;
	x = x >> 4;
	x = x >> 4;
	x = x << 4;
	x = x << 4;
	x = x << 4;
	x = x << 4;
	x = x << 4;
	x = x << 4;*/

	// bitwise operators

	//x = (1 << 4) | (1 << 8) | (1 << 10) | (1 << 20);
	//x = ~x; // inversion
	/*x = x | (1 << 4);
	x = x | (1 << 8);

	x = x | (1 << 3);
	x = x | (1 << 14);
	x = x | (1 << 23);
	x = x | (1 << 30);
	x = x | (1 << 1);

	y = ((1 << 4) | (1 << 31));
	x = x & y;*/
	//x = x ^ (1 << 8);

	/*x = (1 << 4) | (1 << 8);
	y = (1 << 8) | (1 << 16);
	x = x^y; // xor
	x = x^y;*/


	// boolean (true or false)
	//int x = 0; // FALSE  NOT TRUE  NOT SET
	/*int y = 1; // TRUE  SET VALUE
	int z = 9999; // TRUE  SET VALUE
	int w = -1; // TRUE  SET VALUE

	// Things are either zero or they are not.
	int less = (z < w);
	int greater = (z > w);
	int equal = (z == w);
	int notequal = (z != w);
	int and = (less && greater);
	//int xor = (less ^^ greater); logical xor?? this doesn't work
	int xor = (less != greater);
	// compiler may not be required to produce a 1 for true - could be any non-zero

	// control flow - can use logical ops
	/*if (xor)
	{
		OutputDebugStringA("Z is less than W\n");
	}
	else if (greater)
	{
		OutputDebugStringA("Z is greater than W\n");
	}
	else if (equal)
	{
		OutputDebugStringA("Z is equal to W\n");
	}
	else
	{
		OutputDebugStringA("WHAT???");
	}*/

	// loops
	/*x = 0xa;

	int condition = (x != 0);
	//do
	while (1)
	{
		x = x << 4;
		//condition = (x != 0);
		if (x != 0)
		{
			break;
		}
	} //while (x == 0);
	*/

	/*int x;

	for (x = 0xa; // Once at the beginning
		(x != 0); // This is the condition for the loop
		x = x << 4) // The thing to do every iteration
	{
		// More stuff happens here!
		OutputDebugStringA("We are in the loop\n");
	}

	// same thing as the for above
	x = 0xa;
	while (x != 0)
	{
		OutputDebugStringA("We are in the loop\n");
		x = x << 4;
	}*/

	// switch statements
	//int x = 3;
	/*
	// just a jump - doesn't stop executing - need to use break
	switch (x)
	{
	case 0:
		OutputDebugStringA("Case 0\n");
		break;
	case 1:
		OutputDebugStringA("Case 1\n");
		break;
	case 2:
		OutputDebugStringA("Case 2\n");
		break;
	case 3:
		OutputDebugStringA("Case 3\n");
		//break;
		// NOTE(geoff): this falls through!
	case 4:
		OutputDebugStringA("Case 4\n");
		break;
	case 5:
		OutputDebugStringA("Case 5\n");
		break;
	case 6:
		OutputDebugStringA("Case 6\n");
		break;
	default:
		OutputDebugStringA("Case is unknown\n");
		break;
	}*/

	int y = 5;
	int *ptr = 0;
	// *ptr is int at the location of pointer
	int **ptrptr = 0;

	int *yptr0 = 0;
	int *yptr1 = 0;

	yptr0 = &y;

	if (y == 5)
	{
		int x = 6; // only changed in the block
		int y = 4;//diff y - "shadow" a var

		yptr1 = &y;

		ptr = &x;
		ptrptr = &ptr;
	} // compiler no longer obligated to use the space for shit above

	y = (**ptrptr);
	//(*ptr) = 5; // * as a prefix means 'talking about things this points to'
	// indent doesn't matter for C just for humans
	

}


