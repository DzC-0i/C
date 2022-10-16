#include <stdio.h>

int main(){
	 int i, x;
	 int one, two, five;
	 scanf("%d", &x);
	 for ( one = 1; one < x*10; one++ ) {
	 	for ( two = 1; two < x*10/2; two++ ) {
	 		for ( five = 1; five < x*10/5; five++ ) {
	 			if ( one + two*2 + five*5 == x*10 ) {
	 				printf ("可以用 %d 个1角加 %d 个2角加 %d 个5角得到%d元\n", one, two, five, x);
	 				goto out;   //goto 名称;   意思为跳到所在位置   多重循环跳出 
				 }
			 }
		 }	
	 }
out:   //名称:     跳转的位置 
	return 0;
}
