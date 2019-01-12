#include <iostream>
#include <conio.h>
#define RZĘDY 6
#define ZNAKI 6

int main (void)
{
	int rzad;
	char ch;

	for (rzad =0; rzad<RZAD; rzad ++)
		{for (ch = ('A' + rzad); ch< ('A' + ZNAKI); ch ++)
			printf ("%c*", ch);
			printf ("\n");
		}
return 0;
}

