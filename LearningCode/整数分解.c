#include <stdio.h>

int main()
{
	int x, mask = 1, t, d;   //xΪ����ֵ��maskΪ��x��λ�����㣨ʮλ����λ����������tΪ��ʱ���棬dΪ�ֽ����λ����ǰΪ�����ֵ�� 
	scanf("%d", &x);
	t = x;
	while ( t>9 ) {
		t /= 10;
		mask *= 10;
	}
	printf("x=%d, mask=%d\n", x, mask);    //�м�鿴���� 
	do {
		d = x / mask;
		printf("%d", d);
		if ( mask > 9 ) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	}while ( mask > 0 );
	return 0;
 } 
