#include <stdio.h>
int main ()
{
	int x;
	scanf("%d", &x);
	switch(x/10){
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("E");
			break;
		default:
			printf("X");
	}
	return 0;
 } 

