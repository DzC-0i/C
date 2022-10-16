#include<stdio.h>
#include<math.h>

int ss(int x); //判断是不是素数
int weishu(int x); //计算有多少位

int main(void)
{
	int n, m;
	int nm[10], is[10];
	int h, max_h;
	int i, j;
	int z;

	scanf("%d", &n);
	if (ss(n) == 1) {
		h = weishu(n);
		max_h = (int)pow(10, 2 * h);
		for (i = (int)pow(10, 2 * h - 1); i < max_h; i++) {
			if (i % n == 0) {
				m = i / n;
				if (weishu(m) == h && ss(m) == 1) { //位数相同，都是素数
					for (j = 0; j < 10; j++) {
						nm[j] = 0;
						is[j] = 0;
					}
					while (m > 0) {
						nm[m % 10]++;
						m /= 10;
					}
					m = n;
					while (m > 0) {
						nm[m % 10]++;
						m /= 10;
					}
					m = i;
					while (m > 0) {
						is[m % 10]++;
						m /= 10;
					}
					z = 1;
					for (j = 0; j < 10; j++) {
						if (nm[j] != is[j]) {
							z = 0;
							break;
						}
					}
					if (z == 1) {
						printf("YES");
						break;
					}
				}
			}
		}
		if (z == 0) {
			printf("NO");
		}
	} else {
		printf("NO");
	}

	return 0;
}

int ss(int x) {
	int z = 1;
	int i;
	for (i = 2; i <= x / 2; i++) {
		if (x % i == 0) {
			z = 0;
			break;
		}
	}
	return z;
}

int weishu(int x) {
	int z = 0;

	if (x != 0) {
		while (x != 0) {
			z++;
			x /= 10;
		}
	} else {
		z = 1;
	}

	return z;
}
