/*���b����0�����������a�������Լ����
���򣬼���a����b����������a����b����b�����Ǹ�������
�ص���һ��

a   b   t
12  18  12
18  12  6
12  6   0
6   0
*/
#include <stdio.h>

int main ()
{
	int a, b, t;
	scanf ("%d %d", &a, &b);
	
	while ( b!=0 ){
		t = a%b;
		a = b;
		b = t;
	}
	printf ("���Լ��Ϊ%d\n", a);
	
	return 0;
}
