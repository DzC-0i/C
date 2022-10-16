#include <stdio.h>
 //编程读入两个正整数a,b，输出[a,b]区间内的所有亲和数对。
 //亲和数对的含义是一对整数M和N，满足M的真约数之和等于N，同时N的真约数之和等于M。请一定注意输出样例的所示的数据范围。
int divsum(int);
 
int main()
{
    int num_1,num_2,m,n;
    scanf("%d %d",&m,&n);
    for (int num_1 = m; num_1 < n; num_1++)
    {
        num_2 = divsum(num_1);
        if (num_1 != num_2)
        {
            if (num_1 == divsum(num_2))
            {
                if(num_1 < num_2)
				{
                    printf("%d,%d\n",num_1,num_2);
                }
            }
        }
    }
}
 
int divsum(int x)
{
    int sum = 0;
    for( int i = 1 ; i < x ; ++i )
    {
        if( x % i == 0 )
        {
            sum += i;
        }
    }
    return sum;
}
