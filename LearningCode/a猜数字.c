#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int number = rand()%100+1 , count = 0, a = 0;
	printf ("���Ѿ�׼������һ��1-100�������Ͽ�²°ɣ�\n�����룺");
	do{
		scanf ("%d", &a);
		count ++;
		if (a > number){
			printf("��µ������ˣ���");
		} else if (a < number){
			printf("��µ���С�ˣ���");
		}
	}while (a != number);
	printf("̫���ˣ��������� %d �Σ��¶��ˣ�%d����\n�����������",count ,number);
	getch(); 
	return 0;
}
