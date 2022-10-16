#include <stdio.h>

int isPrime(int i)
{
	int ret = 1;
	int k;
	for ( k=2; k<=(i-1)/2; k++ ) {
		if ( i%k == 0) {
			ret = 0;
			break; 
		}
	}
	return ret;
}

int main()
{
	int m, n;
	int sum = 0;
	int cnt = 0;
	int i;
	
	printf("输入开始值m，到结束值n：");
	scanf("%d %d", &m, &n);
	if ( m==1 ) m=2;
	for ( i=m; i<=n; i++ ) {
		if ( isPrime(i) ) {
			sum += i;
			cnt++;
		}
	}
	printf("有%d个素数 相加等于%d\n", cnt, sum);
	
	return 0;
 } 
