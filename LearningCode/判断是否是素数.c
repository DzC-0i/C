#include <stdio.h>

int main (void) {
	int x, i, isPrime = 1;
	printf ("������Ҫ�жϵ�����");
	scanf("%d", &x);
	for ( i=2; i<=x/2; i++ ) {
		if ( x % i == 0 ) {
			isPrime = 0;
			break;
		}
	}
	if ( isPrime == 1 ) {
		printf ("������\n");
	}else{
		printf ("��������\n");
	}
	return 0;
} 
