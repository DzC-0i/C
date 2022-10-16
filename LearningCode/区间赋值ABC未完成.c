#include <stdio.h> 
int main(){
	
}
void fun(int *d,int n){   //完善函数，使之能够高效的对百分制分类进行分类求和。 分类原则A:【80，100】，B：（80，60】，C:（60，0】
    int i,Num[3]={0,0,0};   // int i,Num[3]=;
    for(i=0;i<n;i++)
        Num[2-d[i]/60-d[i]/80]++;    //  Num[]++;
    for(i=0;i<3;i++)
        printf("%c:%d\n",'A'+i,Num[i]);
}
