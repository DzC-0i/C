#include <stdio.h>

int main ()
{
	int x = 2, a, cont = 0;
	printf ("������Ҫ�����λ��");
	scanf("%d", &a);
	while ( cont<a ) {
		int i, isPrime = 1;
		for ( i=2; i<=x/2; i++ ) {
			if ( x % i == 0 ) {
				isPrime = 0;
				break;  //����ѭ������ 
			}
		}
		if ( isPrime == 1 ) {
			printf ("%d ",x );
			cont++;
		}
		x++;
	}
	printf("\n");
	
	return 0;
} 
