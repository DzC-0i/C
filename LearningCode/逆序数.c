#include <stdio.h>

int main(){
	int x, digit, ret = 0;
	scanf("%d", &x);
	while(x > 0){
		digit = x%10;          //ȡ��x�����һλ 
		printf("%d", digit);   //������һλ 
		x/=10;                //��ȥx�����һλ 
	}
	//do {
	//	digit = x%10; 
	//	ret = ret*10 + digit; 
	//	x /= 10;
	//}while ( x>0 );
	//printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);
	
	return 0;
} 
