#include<stdio.h>

int main()
{
	int a;
	int sum=0;
	int flag=0;
	double p=0.5;
	int i=1;
	scanf("%d",&a);
	do{
		if(i++%2==a%10%2)
			flag=1;
		else
			flag=0;
		a /=10;
		p *=2;
		sum += flag*p;
	}while(a!=0);
	printf("%d",sum);
	
	return 0;
}
	/*对数字求特征值是常用的编码算法，奇偶特征是一种简单的特征值。
	对于一个整数，从个位开始对每一位数字编号，个位是1号，十位是2号，以此类推。
	这个整数在第n位上的数字记作x，如果x和n的奇偶性相同，则记下一个1，否则记下一个0。
	按照整数的顺序把对应位的表示奇偶性的0和1都记录下来，就形成了一个二进制数字。
	比如，对于342315，这个二进制数字就是001101。*/
