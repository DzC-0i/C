#include <stdio.h>

int main()
{
    int number;
    char upper, lower;
    printf("���֡�1����Ӧ��Aa���Դ����ƣ������Ӧ��ֵ��") ; 
    scanf("%d", &number);
    
    upper = number + 64;
    lower = number + 96;
    printf("%c%c\n", upper, lower);
    
    return 0;
}
