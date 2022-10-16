#include <iostream>
 
using namespace std;
 
int divsum(int);
 
int main()
{
    int num_1,num_2,m,n;
    scanf("%d %d",&m,&n);
    for (int num_1 = m; num_1 < n; ++num_1)
    {
        num_2 = divsum(num_1);
        if (num_1 != num_2)
        {
            if (num_1 == divsum(num_2))
            {
            	if(num_1 < num_2)
				{
					cout<<num_1<<" "<<num_2<<endl;
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
