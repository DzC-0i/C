#include<stdio.h>
int main(){
	int total, temp = 1;
	scanf("%d",&total);
	do{
		printf("%d",temp);
		temp +=2;
	}while (temp <= total);
	getch();//���ڳ���������ͣ������������˳� 
	return 0;
}//��ź��пո�
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
}        ����м��пո� 
*/ 
