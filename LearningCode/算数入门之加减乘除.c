#include<stdio.h>
/*
如果a能够被b整除，那么a/b应输出为整数格式，否则a/b输出为带两位小数的格式
[a] + [b] = [a+b]
[a] - [b] = [a-b]
[a] * [b] = [a*b]
[a] / [b] = [a/b]
*/
int main(){
    int a, b;
    scanf("%d %d",&a, &b);
    if (a%b == 0){
        printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n", a, b, a+b, a, b, a-b, a, b, a*b, a, b, a/b);
    }else{
        float c=a, d;
        d = c/b;
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2f\n", a, b, a+b, a, b, a-b, a, b, a*b, a, b, d);
    }
    return 0;
}
