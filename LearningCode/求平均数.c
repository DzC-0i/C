#include <stdio.h>
 
int main ()
{
	int x, cnt = 0, i, number[100];   //定义数组number[100] ：可存100个数    可以定义任意一个大小的数组number[cnt] 
	double sum = 0, average;          //为int number[  ] ， double number[   ]
	printf ("输入 -1 时停止读取：");
	scanf ("%d", &x);
	while ( x!= -1 ) {
		number[cnt] = x;             //定义在赋值后的cnt后 ，前面的定义数组可以替换为， int number[cnt] = x; 
		sum += x;
		cnt++;
		printf ("输入 -1 时停止读取：");
		scanf ("%d", &x);
	}
	if ( cnt > 0 ) {
		average = sum / cnt;
		printf ("平均数为：%g \n大于平均数的有：", average);
		for ( i=0; i<cnt; i++ ) {
			if (number[i] > average ) {
				printf (" %d", number[i] );
			}
		}
	}
	return 0;
}
