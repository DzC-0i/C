#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int number = rand()%100+1 , count = 0, a = 0;
	printf ("我已经准备好了一个1-100的数，赶快猜猜吧！\n请输入：");
	do{
		scanf ("%d", &a);
		count ++;
		if (a > number){
			printf("你猜的数大了！！");
		} else if (a < number){
			printf("你猜的数小了！！");
		}
	}while (a != number);
	printf("太棒了！被你用了 %d 次，猜对了（%d）！\n按任意键结束",count ,number);
	getch(); 
	return 0;
}
