#include <stdio.h>

void sum(int begin, int end)
{
	int i;
	int sum = 0;
	for ( i=begin; i<=end; i++ ) {
		sum += i;
	}
	printf("从 %d 到 %d 的和是 %d ", begin, end, sum);
}

int main()
{
	sum(1,10);
	sum(20,50);
	sum(35,70);
	
	return 0;
} 
