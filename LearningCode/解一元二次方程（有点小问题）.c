#include<stdio.h>
#include<math.h>
int main(){
	double a, b, c, x1, x2, d, e, f;// a,b,cΪax^2+bx+c=0 ;x1,x2Ϊ���̵Ľ� ��e��f�ֱ�ΪΪ������ʵ�����鲿 
	scanf("%lf %lf %lf",&a ,&b ,&c );
	if (a == 0){
		if (b != 0){
			x1 = -c / b;
			if(x1 == -0)
				x1 = 0;
			printf("x = %g",x1);
		}else if(c != 0){
		printf("�޽�"); 
		}else{
			printf("������");
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
			if(x1 == x2 ||fabs(x1 - x2) <= 0.1) //���Ͻ������ 
				printf("x1 = x2 = %g",x1);//����0.3 0 0 �޷���� 
			else
			printf("x1 = %g, x2 = %g",x1 , x2);
		}
		/*if(d == 0){//�����ⲽ��     ����1 -0.4 0.04 ������� 
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
