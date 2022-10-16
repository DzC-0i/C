#include <stdio.h>
#include <math.h>
int main()
{
double a,b,c;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	if(a==0){
		if(b!=0){
			if(c==0){
			printf("x = %d",0);
			} 
		else{
			printf("x = %.1lf",-c/b);
			}
			return 0;
		}
		if(b==0,c!=0){
			printf("无解");
			return 0;
		}
		if(b==0,c==0){
			printf("无穷多解");
			return 0 ;
		}}
	else{
		double i,d,e;

		i=b*b-4.0*a*c;
		if(i>=0){
			d=(-b+sqrt(i))/(2.0*a);
			e=(-b-sqrt(i))/(2.0*a);
			d = (float)d;
			e = (float)e;

		if(e!=d){
				if(d==0){
					printf("x1 = %d, ",0);
				}
				else{
					printf("x1 = %.1lf, ",d);
				}
				if(e==0){
					printf("x2 = %d",0);
				}
				else{
					printf("x2 = %.1lf",e);
				}
				return 0;
				}
			else{
				if(d!=0){
					printf("x1 = x2 = %.1lf",d);
				}
				else
				{
				printf("x1 = x2 = %d",0);
				}
				return 0;
				}	
			}
		
		if(i<0){
			d=(-b)/(2*a);
			e=sqrt(-i)/(2*a);
			if(e<0){
				e=-e;
			
			if(d==0){
				printf("x1 = %d-%.1lfi, ",0,e);
				printf("x2 = %d+%.1lfi",0,e);
			}
			else{
				printf("x1 = %.1lf-%.1lfi, ",d,e);
				printf("x2 = %.1lf+%.1lfi",d,e);
			}
			return 0;
			}else{
				if(d==0){
				printf("x1 = %d+%.1lfi, ",0,e);
				printf("x2 = %d-%.1lfi",0,e);
			}
			else{
				printf("x1 = %.1lf+%.1lfi, ",d,e);
				printf("x2 = %.1lf-%.1lfi",d,e);
			}
		}
		
		}return 0;
	}
}
