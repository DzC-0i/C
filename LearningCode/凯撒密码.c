#include<stdio.h>
#define MAXLINE 80
#define M 26
//�����һ�и���һ���Իس������ķǿ��ַ���������80���ַ������ڶ�������һ������offset��
int main(){
	int i = 0, offset;
	char str[MAXLINE];
	//�����ַ��� 
	printf ("Enter a string:");
	while ( (str[i]=getchar() ) != '\n' ) {
		i++;
	}
	str[i] = '\0';
	//����λ����
	printf ("Enter offset:");
	scanf ("%d", &offset);
	if ( offset >= M || offset <= -M){
		offset = offset % M;
	} 
	//����
	for ( i=0; str[i] != '\0'; i++) {
		if ( str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + offset;
			if (str[i] < 'A')
				str[i] = str[i] + 26;
			else if(str[i] > 'Z')
				str[i] = str[i] - 26;
			}
	    else if ( str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] + offset;
			if (str[i] < 'a')
				str[i] = str[i] + 26;
			else if(str[i] > 'z')
				str[i] = str[i] - 26;
			}
		} 

	//��������ַ���
	printf ("After being encrypted:");
	for (i=0; str[i] != '\0'; i++) {
		putchar(str[i]);
	} 
	printf ("\n");
	
	return 0;
}
