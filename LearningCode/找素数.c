#include <stdio.h>
//输出[a,b]区间内所有素数，输出格式为10个素数一行，素数间以一个空格分隔。请设计函数void prime(int a,int b)完成上述功能。
//主函数中输入若干整数对，表示有若干组数据，每组数据先输出区间，再输出区间内所有素数，每组输出间有一个空行。
int isprime(int n);
void prime(int a,int b);
int main (){
	int min,max;
    scanf("%d %d",&min,&max);
    prime(min,max);
	while (scanf("%d",&min) !=EOF){
        scanf("%d",&max);
        printf("\n");
        prime(min,max);	
    }
	return 0;
}
void prime(int a,int b)
{
	int i,j=0;
	printf("[%d,%d]\n",a,b);
	for(i=a;i<=b;i++){
		if(isprime(i)){
			if(j==0){
				printf("%d",i);
			}else{
				printf(" %d",i);
			}
			j++;
			if(j==10){
				printf("\n");
				j=0;
			}
		}
	}
	if(j!=0){
		printf("\n");
	}
}
int isprime(int n)
{
	int i,s=1;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			s=0;
			break;
		}
	}
	return s;
}
