#include <stdio.h>

int main()
{
	int x, d;
	scanf ("%d", &x);
	do {
		d = x % 10;
		printf ("%d", d);
		if ( x >= 10)
			printf (" ");
		x /= 10;
	}while ( x > 0 );
	printf ("\n");
	
	return 0;
 } 
