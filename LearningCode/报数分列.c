#include<stdio.h>
int main(){
	int total, temp = 1;
	scanf("%d",&total);
	do{
		printf("%d",temp);
		temp +=2;
	}while (temp <= total);
	getch();//用于程序最后的暂停，输入任意键退出 
	return 0;
}//编号后有空格
/*
#include<stdio.h>
int main()
{
int n, i=1 ,x;
scanf("%d", &n);
printf("%d",i);
for (x = 3; x <= n; x += 2)
{
printf(" %d",x);
}
return 0;
}        编号中间有空格 
*/ 
