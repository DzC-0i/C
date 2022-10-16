#include <stdio.h>
//输入量不确定的[0,9]范围内的整数，统计每一种数字出现的次数，输入-1表示停止
 int main()
 {
 	const int number = 10;      //const int number   定义一个固定的常量 
 	int x;
 	int count[number];
 	int i;
 	
 	for ( i=0; i<number; i++ ) {        //初始化数组 
 		count[i] = 0;
	 }
	 scanf("%d",&x);
	 while ( x!= -1 ) {
	 	if ( x>=0 && x<=9 ) {
	 		count[x]++;        //数组参与运算 
		 }
		 scanf("%d",&x);
	 }
	 for ( i=0; i<number; i++ ) {
	 	printf("%d:%d\n", i, count[i]);
	}
	return 0;
 }
