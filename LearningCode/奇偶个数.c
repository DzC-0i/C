#include<stdio.h>

int main()
{
    int n;
    int oushu=0;   //��ĳ���Ҫ����һϵ�����������ݣ�����-1��ʾ���������-1��������������ݡ�������������������е�������ż���ĸ�����
    int jishu=0;   //һϵ���������������ķ�Χ�ǣ�0,100000�����������-1���ʾ���������
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
