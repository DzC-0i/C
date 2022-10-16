#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

int a, b, c;
void random(void)
{
	//得到三个随机数啊ab,c； 

	srand((unsigned)time(NULL));
	a = rand() % 100 + 1;
	b = rand() % 100 + 1;
	c = rand() % 100 + 1;
}

int main()
{
again:
	int d, e;//d,e代表混合运算运算符; 
	int s, i, tr;//s正确答案；tr转换值； 
	int t, x;//t是题型；x是用户输入的答案； 
	int right = 0, error = 0, rate;//rate正确率; 
	time_t t1 = 0, t2 = 0, dt; //由dt=t2-t1判断答题是否超时； 
	char op, pre = '%', op1, op2;//op1,op2为d,e所指代的运算符; 

	printf("1 加法运算\n2 减法运算\n3 乘法运算\n4 除法运算\n5 混合运算\n0 退出\n（每题您有两次作答机会,但若在给出题目9秒后作答将直接判错,并不给予第二次作答机会）\n");
	//用户选择题型；
	printf("请选择题型：");
	scanf("%d", &t);

	if (t == 1)
	{
		for (i = 0; i<5; i++)
		{
			random();
			s = a + b;
			printf("%d + %d = ", a, b);
			t1 = time(0);
			scanf("%d", &x);
			t2 = time(0);
			dt = t2 - t1;
			if (dt>9)
			{
				printf("Timeout!!!\n");
				error++;
				continue;
			}
			if (x != s)
			{
				printf("error(;您还有一次机会\n");
				t1 = time(0);
				scanf("%d", &x);
				t2 = time(0);
				dt = t2 - t1;
				if (dt>9)
				{
					printf("Timeout!!!\n");
					error++;
					continue;
				}
			}
			if (x == s)
			{
				printf("Very Good\n");
				right++;
			}
			else
			{
				printf("Wrong!!!\n");
				error++;
			}
		}
		rate = right * 100 / 5;
		printf("您的正确率为：%d%c\n\n", rate, pre);
		goto again;
	}
	else if (t == 2)
	{
		for (i = 0; i<5; i++)
		{
			random();
			if (a<b)
			{
				tr = a;
				a = b;
				b = tr;
			}
			//将较大值赋予a 
			s = a - b;
			printf("%d - %d = ", a, b);
			t1 = time(0);
			scanf("%d", &x);
			t2 = time(0);
			dt = t2 - t1;
			if (dt>9)
			{
				printf("Timeout!!!\n");
				error++;
				continue;
			}
			if (x != s)
			{
				printf("error(;您还有一次机会\n");
				t1 = time(0);
				scanf("%d", &x);
				t2 = time(0);
				dt = t2 - t1;
				if (dt>9)
				{
					printf("Timeout!!!\n");
					error++;
					continue;
				}
			}
			if (x == s)
			{
				printf("Very Good\n");
				right++;
			}
			else
			{
				printf("Wrong!!!\n");
				error++;
			}
		}
		rate = right * 100 / 5;
		printf("您的正确率为：%d%c\n\n", rate, pre);
		goto again;
	}
	else if (t == 3)
	{
		for (i = 0; i<5; i++)
		{
			random();
			s = a*b;
			printf("%d * %d = ", a, b);
			t1 = time(0);
			scanf("%d", &x);
			t2 = time(0);
			dt = t2 - t1;
			if (dt>9)
			{
				printf("Timeout!!!\n");
				error++;
				continue;
			}
			if (x != s)
			{
				printf("error(;您还有一次机会\n");
				t1 = time(0);
				scanf("%d", &x);
				t2 = time(0);
				dt = t2 - t1;
				if (dt>9)
				{
					printf("Timeout!!!\n");
					error++;
					continue;
				}
			}
			if (x == s)
			{
				printf("Very Good\n");
				right++;
			}
			else
			{
				printf("Wrong!!!\n");
				error++;
			}
		}
		rate = right * 100 / 5;
		printf("您的正确率为：%d%c\n\n", rate, pre);
		goto again;
	}
	else if (t == 4)
	{
		for (i = 0; i<5; i++)
		{
			srand((unsigned)time(NULL));
			a = rand() % 100 + 1;
			b = rand() % (a / 2 + 1) + 1;
			s = a / b;
			a = s*b;
			printf("%d ÷ %d = ", a, b);
			t1 = time(0);
			scanf("%d", &x);
			t2 = time(0);
			dt = t2 - t1;
			if (dt>9)
			{
				printf("Timeout!!!\n");
				error++;
				continue;
			}
			if (x != s)
			{
				printf("error(;您还有一次机会\n");
				t1 = time(0);
				scanf("%d", &x);
				t2 = time(0);
				dt = t2 - t1;
				if (dt>9)
				{
					printf("Timeout!!!\n");
					error++;
					continue;
				}
			}
			if (x == s)
			{
				printf("Very Good\n");
				right++;
			}
			else
			{
				printf("Wrong!!!\n");
				error++;
			}
		}
		rate = right * 100 / 5;
		printf("您的正确率为：%d%c\n\n", rate, pre);
		goto again;
	}
	else if (t == 5)
	{
		random();
		for (i = 0; i<5; i++)
		{
			//获取随机运算符； 
			srand((unsigned)time(NULL));
			do {
				d = rand() % 4;
				e = rand() % 4;
			} while (e == d);
			switch (d)
			{
			case 0:
			{
				op1 = '+';
				switch (e)
				{
				case 0:
				{
					op2 = '+';
					s = a + b + c;
					printf("%d + %d + %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 1:
				{
					op2 = '-';
					s = a + b - c;
					printf("%d + %d - %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 2:
				{
					op2 = '*';
					s = a + b*c;
					printf("%d + %d * %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 3:
				{
					op2 = '/';
					srand((unsigned)time(NULL));
					b = rand() % 100 + 1;
					c = rand() % (b / 2 + 1) + 1;
					s = b / c;
					b = s*c;
					s = a + b / c;
					printf("%d + %d ÷ %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				}
			}break;
			case 1:
			{
				op1 = '-';
				switch (e)
				{
				case 0:
				{
					op2 = '+';
					s = a - b + c;
					printf("%d - %d + %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 1:
				{
					op2 = '-';
					s = a - b - c;
					printf("%d - %d - %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 2:
				{
					op2 = '*';
					s = a - b*c;
					printf("%d - %d * %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 3:
				{
					op2 = '/';
					srand((unsigned)time(NULL));
					b = rand() % 100 + 1;
					c = rand() % (b / 2 + 1) + 1;
					s = b / c;
					b = s*c;
					s = a - b / c;
					printf("%d - %d ÷ %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				}
			}break;
			case 2:
			{
				op1 = '*';
				switch (e)
				{
				case 0:
				{
					op2 = '+';
					s = a*b + c;
					printf("%d * %d + %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 1:
				{
					op2 = '-';
					s = a*b - c;
					printf("%d * %d - %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 2:
				{
					op2 = '*';
					s = a*b*c;
					printf("%d * %d * %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 3:
				{
					op2 = '/';
					srand((unsigned)time(NULL));
					b = rand() % 100 + 1;
					c = rand() % (b / 2 + 1) + 1;
					s = b / c;
					b = s*c;
					s = a*b / c;
					printf("%d * %d ÷ %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				}
			}break;
			case 3:
			{
				op1 = '/';
				srand((unsigned)time(NULL));
				a = rand() % 100 + 1;
				b = rand() % (a / 2 + 1) + 1;
				s = a / b;
				a = s*b;
				switch (e)
				{
				case 0:
				{
					op2 = '+';
					s = a / b + c;
					printf("%d ÷ %d + %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 1:
				{
					op2 = '-';
					s = a / b - c;
					printf("%d ÷ %d - %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 2:
				{
					op2 = '*';
					s = a / b*c;
					printf("%d ÷ %d * %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				case 3:
				{
					op2 = '/';
					srand((unsigned)time(NULL));
					c = rand() % ((a / b) / 2 + 1) + 1;
					s = a / b / c;
					printf("%d ÷ %d ÷ %d = ", a, b, c);
					t1 = time(0);
					scanf("%d", &x);
					t2 = time(0);
					dt = t2 - t1;
					if (dt>9)
					{
						printf("Timeout!!!\n");
						error++;
						continue;
					}
					if (x != s)
					{
						printf("error(;您还有一次机会\n");
						t1 = time(0);
						scanf("%d", &x);
						t2 = time(0);
						dt = t2 - t1;
						if (dt>9)
						{
							printf("Timeout!!!\n");
							error++;
							continue;
						}
					}
					if (x == s)
					{
						printf("Very Good\n");
						right++;
					}
					else
					{
						printf("Wrong!!!\n");
						error++;
					}
				}break;
				}
			}break;
			}
		}

		rate = right * 100 / 5;
		printf("您的正确率为：%d%c\n\n", rate, pre);
		goto again;

	}
	else if (t == 0)
	{
		return 0;
	}
	else
		printf("无法识别\n");

	return 0;
}
