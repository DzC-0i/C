#include <stdio.h>
 //��̶�������������a,b�����[a,b]�����ڵ������׺����ԡ�
 //�׺����Եĺ�����һ������M��N������M����Լ��֮�͵���N��ͬʱN����Լ��֮�͵���M����һ��ע�������������ʾ�����ݷ�Χ��
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
