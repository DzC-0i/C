#include <stdio.h>

int main(){
	int a,b,i,m,n;
	scanf("%d/%d",&a,&b);
	printf("0.");
	m=a%b*10;
	for(i=0;i<200;i++){   //最多输出小数点后两百位 
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
