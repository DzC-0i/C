#include<stdio.h>
//���ڣ�������������n��m��0<n<=m<=200����ĳ���Ҫ�����n����������m������֮�����е������ĺͣ�������n�������͵�m��������
int main()
{
	int n, m;
	int a, b;//a bΪѭ������ 
	int c = 1;//cΪ�ڼ������� 
	int sum = 0;//��� 
	do{
		scanf("%d %d",&n,&m);
	}while ( 0 >= n || n > m || m > 200 );//do whileѭ������n,m���벻��0<n<m<200ʱ����ѭ�� 
	
	for ( a=2; c<=m;a++ ) {		
		int f = 1;//�������� (fΪ1ʱ�������� 
		for ( b=2; b<=a/2; b++ ) {
			if ( a%b == 0 ) {
			f = 0;
			}
		}
		if ( f == 1 ) {
			if ( c >= n ) 
				sum += a;
			c++;
		}
	}
	printf ("%d", sum );
	return 0;
}
