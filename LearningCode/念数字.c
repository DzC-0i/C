#include <stdio.h>
//读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
int main()
{
    int x;
    int mask = 1;                          //用来判断位数 
    do{
	    scanf("%d", &x);
	}while ( x>100000 || x<-100000 );             //判断是否在输入范围内 
    if ( x<0 ) {
    	printf("fu ");
    	x = -x;
	}                                    //正负 
    int b = x;                             //暂时寄存x 
    while ( b>9 ) {
    	b /= 10;
    	mask *= 10;
	}
	int a;
	while ( mask>0 ) {
		a = x/mask;                         //用来分解x 
		x %= mask;                           
		mask /= 10;
		switch ( a ) {
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
			    break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
		}
	        if ( mask>0 )
			printf(" ");                         //最后一位数后面不输出空格 
	}
return 0;
}
