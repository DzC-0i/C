#include <stdio.h>

int main(){
	int a,b,i,m,n;
	scanf("%d/%d",&a,&b);
	printf("0.");
	m=a%b*10;
	for(i=0;i<200;i++){   //������С���������λ 
		n=m/b;
		m=m%b*10;
		printf("%d",n);
		if(m==0){
			break;
		}
	}
	printf("\n");
	
	
	return 0;
}
