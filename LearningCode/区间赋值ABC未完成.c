#include <stdio.h> 
int main(){
	
}
void fun(int *d,int n){   //���ƺ�����ʹ֮�ܹ���Ч�Ķ԰ٷ��Ʒ�����з�����͡� ����ԭ��A:��80��100����B����80��60����C:��60��0��
    int i,Num[3]={0,0,0};   // int i,Num[3]=;
    for(i=0;i<n;i++)
        Num[2-d[i]/60-d[i]/80]++;    //  Num[]++;
    for(i=0;i<3;i++)
        printf("%c:%d\n",'A'+i,Num[i]);
}
