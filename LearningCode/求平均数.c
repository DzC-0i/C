#include <stdio.h>
 
int main ()
{
	int x, cnt = 0, i, number[100];   //��������number[100] ���ɴ�100����    ���Զ�������һ����С������number[cnt] 
	double sum = 0, average;          //Ϊint number[  ] �� double number[   ]
	printf ("���� -1 ʱֹͣ��ȡ��");
	scanf ("%d", &x);
	while ( x!= -1 ) {
		number[cnt] = x;             //�����ڸ�ֵ���cnt�� ��ǰ��Ķ�����������滻Ϊ�� int number[cnt] = x; 
		sum += x;
		cnt++;
		printf ("���� -1 ʱֹͣ��ȡ��");
		scanf ("%d", &x);
	}
	if ( cnt > 0 ) {
		average = sum / cnt;
		printf ("ƽ����Ϊ��%g \n����ƽ�������У�", average);
		for ( i=0; i<cnt; i++ ) {
			if (number[i] > average ) {
				printf (" %d", number[i] );
			}
		}
	}
	return 0;
}
