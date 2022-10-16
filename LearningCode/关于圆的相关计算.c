#include<stdio.h>

int main()
{
    double r,d,c,s;
    double pi=3.14159;
    scanf("%lf",&r);
    
    d=2*r;
    c=pi*d;
    s=pi*r*r;
    printf("%.4lf %.4lf %.4lf\n",d,c,s);
    
    return 0;
}
