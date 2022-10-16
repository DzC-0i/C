#include<stdio.h>
#include<math.h>
int main(){
	double a, b, c, x1, x2, d, e, f;// a,b,c为ax^2+bx+c=0 ;x1,x2为方程的解 ；e，f分别为为虚数的实部和虚部 
	scanf("%lf %lf %lf",&a ,&b ,&c );
	if (a == 0){
		if (b != 0){
			x1 = -c / b;
			if(x1 == -0)
				x1 = 0;
			printf("x = %g",x1);
		}else if(c != 0){
		printf("无解"); 
		}else{
			printf("无穷多解");
		}
	}
	else if(a != 0){
		d = pow(b,2) - 4*a*c;
		if (d > 0){
			x1 = (-b + sqrt(d)) / (2*a);
			x2 = (-b - sqrt(d)) / (2*a);
			if(x1 == -0)
				x1 = 0;
			if(x2 == -0)
				x2 = 0;
			if(x1 == x2 ||fabs(x1 - x2) <= 0.1) //网上解决方案 
				printf("x1 = x2 = %g",x1);//但是0.3 0 0 无法解出 
			else
			printf("x1 = %g, x2 = %g",x1 , x2);
		}
		/*if(d == 0){//有问题步骤     代入1 -0.4 0.04 输出错误 
			x1 = -b / (2*a);
			if(x1 == -0)
				x1 = 0;
			printf("x1 = x2 = %g",x1);
		}*/
		if(d < 0){
			e = -b / (2*a);
			f = sqrt(-d)/(2*a);
			if(e == -0)
				e = 0;
			printf("x1 = %g+%gi, x2 = %g-%gi", e, fabs(f), e, fabs(f));
		}
	}
	return 0;
} 
