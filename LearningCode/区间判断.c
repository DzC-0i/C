#include <stdio.h>

int main()
{
    double a, b, x;
    printf("�ж�����Ϊ(a,b]\n");
    printf("�����жϵ������м��Կո��������") ;
    scanf("%lg%lg", &a, &b);
    printf("����Ҫ�жϵ���ֵ��") ;
    scanf("%lg", &x);
    if (x<=a||x>b)
	{
        puts("Out");
    }
	else
	{
       	puts("In");
    }
    
    return 0;
}
