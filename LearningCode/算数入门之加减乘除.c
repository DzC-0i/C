#include<stdio.h>
/*
���a�ܹ���b��������ôa/bӦ���Ϊ������ʽ������a/b���Ϊ����λС���ĸ�ʽ
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
