#include <stdio.h>

int main(){
	int x, digit, ret = 0;
	scanf("%d", &x);
	while(x > 0){
		digit = x%10;          //取出x的最后一位 
		printf("%d", digit);   //输出最后一位 
		x/=10;                //丢去x的最后一位 
	}
	//do {
	//	digit = x%10; 
	//	ret = ret*10 + digit; 
	//	x /= 10;
	//}while ( x>0 );
	//printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);
	
	return 0;
} 
