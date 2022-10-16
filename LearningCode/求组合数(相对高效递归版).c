#include <stdio.h>

// 求组合数(递归版)
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
	double m;
	if( x < 0 || y < 0 || y > x )
	{
		m = 0;
	}
	else if( y == 0 )
	{
		m = 1;
	}
	else if( y > x / 2 )
	{
		y = x - y;
		m = Cmb( x , y );
	}
	else
	{
		m = x * Cmb( x - 1, y - 1) / y;
	}
	return m;
}
