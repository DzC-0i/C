#include <stdio.h>
//����һ����������Χ��[-100000,100000]��Ȼ���ú���ƴ�������������ÿһλ���������
int main()
{
    int x;
    int mask = 1;                          //�����ж�λ�� 
    do{
	    scanf("%d", &x);
	}while ( x>100000 || x<-100000 );             //�ж��Ƿ������뷶Χ�� 
    if ( x<0 ) {
    	printf("fu ");
    	x = -x;
	}                                    //���� 
    int b = x;                             //��ʱ�Ĵ�x 
    while ( b>9 ) {
    	b /= 10;
    	mask *= 10;
	}
	int a;
	while ( mask>0 ) {
		a = x/mask;                         //�����ֽ�x 
		x %= mask;                           
		mask /= 10;
		switch ( a ) {
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
			    break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
		}
	        if ( mask>0 )
			printf(" ");                         //���һλ�����治����ո� 
	}
return 0;
}
