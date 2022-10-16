#include <stdio.h>

int main(void)
{
	int input, squire, length;
	scanf("%d", &input);
	
	squire = input*input;
    length = input*4;
	printf ("周长 = %d,面积 = %d\n", length, squire);
	
	return 0;
}
