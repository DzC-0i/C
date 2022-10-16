#include <stdio.h>
#define sqr(x) ((x)*(x)) //定义宏   这个为   x*x 
int IsAtmp(long long x);

int main()
{
    long long x;
    scanf("%lld", &x);
    if (IsAtmp(x))
    {
        puts("Yes");
    }
    else
    {
        puts("No");
    }
    return 0;
}
int IsAtmp(long long x)
{
    int a=0,cnt=0,b,c=x,d=1,i;
    if(x==0||x==1){
        a=1;
    }else{
        while(x>0){
            x/=10;
            cnt++;
        }
        b=sqr(c);
        for(i=0;i<cnt;i++){
        	d*=10;
		}
        if(b%d==c){
            a=1;
        }
    }
    return a;
}
