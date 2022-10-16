#include<stdio.h>

int main()
{
    int n;
    int oushu=0;   //你的程序要读入一系列正整数数据，输入-1表示输入结束，-1本身不是输入的数据。程序输出读到的数据中的奇数和偶数的个数。
    int jishu=0;   //一系列正整数，整数的范围是（0,100000）。如果输入-1则表示输入结束。
    while(scanf("%d",&n))
    {
        if (n==-1) break;
        if(n%2==0)
        {
            oushu++;
        }
        else
        {
            jishu++;
        }
    } 
    printf("%d %d\n",jishu,oushu);
    return 0;
}
