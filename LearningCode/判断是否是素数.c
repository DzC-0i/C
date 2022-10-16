#include <stdio.h>

int main (void) {
	int x, i, isPrime = 1;
	printf ("输入需要判断的数：");
	scanf("%d", &x);
	for ( i=2; i<=x/2; i++ ) {
		if ( x % i == 0 ) {
			isPrime = 0;
			break;
		}
	}
	if ( isPrime == 1 ) {
		printf ("是素数\n");
	}else{
		printf ("不是素数\n");
	}
	return 0;
} 
