#include <stdio.h>

int main()
{
    int number;
    char upper, lower;
    printf("数字“1”对应“Aa”以此类推，输入对应数值：") ; 
    scanf("%d", &number);
    
    upper = number + 64;
    lower = number + 96;
    printf("%c%c\n", upper, lower);
    
    return 0;
}
