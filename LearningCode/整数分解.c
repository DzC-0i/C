#include <stdio.h>

int main()
{
	int x, mask = 1, t, d;   //x为输入值，mask为对x做位数计算（十位，百位。。。），t为临时储存，d为分解出的位数最前为（输出值） 
	scanf("%d", &x);
	t = x;
	while ( t>9 ) {
		t /= 10;
		mask *= 10;
	}
	printf("x=%d, mask=%d\n", x, mask);    //中间查看过程 
	do {
		d = x / mask;
		printf("%d", d);
		if ( mask > 9 ) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	}while ( mask > 0 );
	return 0;
 } 
