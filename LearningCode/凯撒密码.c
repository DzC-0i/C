#include<stdio.h>
#define MAXLINE 80
#define M 26
//输入第一行给出一个以回车结束的非空字符串（少于80个字符）；第二行输入一个整数offset。
int main(){
	int i = 0, offset;
	char str[MAXLINE];
	//输入字符串 
	printf ("Enter a string:");
	while ( (str[i]=getchar() ) != '\n' ) {
		i++;
	}
	str[i] = '\0';
	//输入位移量
	printf ("Enter offset:");
	scanf ("%d", &offset);
	if ( offset >= M || offset <= -M){
		offset = offset % M;
	} 
	//加密
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

	//输出密文字符串
	printf ("After being encrypted:");
	for (i=0; str[i] != '\0'; i++) {
		putchar(str[i]);
	} 
	printf ("\n");
	
	return 0;
}
