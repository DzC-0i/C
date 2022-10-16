#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<0||a>2359)
        return 0;
    if(a>=800)
    {
        if(a==800)
            printf("0");
        else{

/*            if(a%100==0){
             printf("%d00",a/100-8);
            }*/
                if(a>800&&a<859)
                {
                    printf("%d",a%100);
                }
                else
                {//用例应该是810-2359
                    if(a%100>10)
                        printf("%d%d",(a/100)-8,a%100);
                    else
                        printf("%d0%d",(a/100)-8,a%100);
                }
        }    
    }
    else
    {
        if(a%100>10)
        {
             printf("%d%d",(a/100)+16,a%100);
        }
        else
        {
           printf("%d0%d",(a/100)+16,a%100);
        }
    }
    return 0;
}
