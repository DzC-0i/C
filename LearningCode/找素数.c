#include <stdio.h>
//���[a,b]���������������������ʽΪ10������һ�У���������һ���ո�ָ�������ƺ���void prime(int a,int b)����������ܡ�
//���������������������ԣ���ʾ�����������ݣ�ÿ��������������䣬���������������������ÿ���������һ�����С�
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
