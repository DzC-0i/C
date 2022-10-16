#include <stdio.h>

int main()
{
	int n, i;
	double sum = 0.0;
	//形如 1-1/2+1/3...+1/n   int sign = 1;    或者double sign; 
	printf("f(n)=1+1/2+...+1/n ,输入n:"); 
	scanf("%d", &n);
	for ( i = 1; i<=n; i++ ) {
		sum += 1.0/i;   //  sum += sign*1.0/i;    sum += sign/i;
		               //   sign = -sign;         sign = -sign;
	}
	printf("f(%d)=%f", n, sum );
	return 0;
 } 
