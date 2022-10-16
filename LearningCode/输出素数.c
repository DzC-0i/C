#include <stdio.h>

int main ()
{
	int x, a;
	printf ("输入需要输出到几：");
	scanf("%d", &a);
	for ( x = 2; x<=a/2; x++ ) {
		int i, isPrime = 1;
		for ( i=2; i<x; i++ ) {
			if ( x % i == 0 ) {
				isPrime = 0;
				break;
			}
		}
		if ( isPrime == 1 ) {
			printf ("%d ",x );
		}
	}
	printf("\n");
	
	return 0;
} 
