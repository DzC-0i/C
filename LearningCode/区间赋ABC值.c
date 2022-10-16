#include<stdio.h>
#include<stdlib.h>
int main(){   //以下程序是对于随机产生的一批百分制分数，按【0,60）：C，【60，88）：B，【88，100】：A的规定，进行等级标示。请将程序补充完整。 可能的输出如：【59:C】，【60:B】，【87:B】，【88:A】，【100:A】。
    int n,f,i;
	scanf("%d",&n);
	srand(n);
    for(i=0;i<n;i++){
        f=50+rand()%51;
        printf("[%d:%c]\n",f,'A'+(-f/60)+(-f/88)+2);   //printf("[%d:%c]\n",f,'A'+ );
    }
    return 0;
}
