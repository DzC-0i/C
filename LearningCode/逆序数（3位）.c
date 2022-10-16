#include<stdio.h>

int main()
{
	int input, a, b, c;
	scanf("%d", &input);
	
	a = input/100;
	b = input%10;
	c = (input-a*100-b)/10;
	printf("%d",b*100+c*10+a);
	return 0;
}
