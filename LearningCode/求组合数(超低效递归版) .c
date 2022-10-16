#include <stdio.h>

// 求组合数(超低效递归版)
double Cmb(int x, int y);

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%g\n", Cmb(m, n));
    return 0;
}
double Cmb(int x, int y)
{
	if( x < 0 || y < 0 || x < y )
	{
		return 0;
	}
	if( y == 0 || x == y )
	{
		return 1;
	}
	if( x >= y && y >= 0 )
	{
		return Cmb( x - 1, y ) + Cmb( x - 1, y - 1 );
	}
}
