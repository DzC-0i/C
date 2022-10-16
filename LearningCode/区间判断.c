#include <stdio.h>

int main()
{
    double a, b, x;
    printf("判断类型为(a,b]\n");
    printf("输入判断的区域（中间以空格隔开）：") ;
    scanf("%lg%lg", &a, &b);
    printf("输入要判断的数值：") ;
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
