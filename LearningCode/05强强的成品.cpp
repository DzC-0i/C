#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

int a, b, c;
void random(void)
{
	//�õ������������ab,c�� 

	srand((unsigned)time(NULL));
	a = rand() % 100 + 1;
	b = rand() % 100 + 1;
	c = rand() % 100 + 1;
}

int main()
{
again:
	int d, e;//d,e���������������; 
	int s, i, tr;//s��ȷ�𰸣�trת��ֵ�� 
	int t, x;//t�����ͣ�x���û�����Ĵ𰸣� 
	int right = 0, error = 0, rate;//rate��ȷ��; 
	time_t t1 = 0, t2 = 0, dt; //��dt=t2-t1�жϴ����Ƿ�ʱ�� 
	char op, pre = '%', op1, op2;//op1,op2Ϊd,e��ָ���������; 

	printf("1 �ӷ�����\n2 ��������\n3 �˷�����\n4 ��������\n5 �������\n0 �˳�\n��ÿ�����������������,�����ڸ�����Ŀ9�������ֱ���д�,��������ڶ���������ᣩ\n");
	//�û�ѡ�����ͣ�
	printf("��ѡ�����ͣ�");
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
				printf("error(;������һ�λ���\n");
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
		printf("������ȷ��Ϊ��%d%c\n\n", rate, pre);
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
			//���ϴ�ֵ����a 
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
				printf("error(;������һ�λ���\n");
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
		printf("������ȷ��Ϊ��%d%c\n\n", rate, pre);
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
				printf("error(;������һ�λ���\n");
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
		printf("������ȷ��Ϊ��%d%c\n\n", rate, pre);
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
			printf("%d �� %d = ", a, b);
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
				printf("error(;������һ�λ���\n");
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
		printf("������ȷ��Ϊ��%d%c\n\n", rate, pre);
		goto again;
	}
	else if (t == 5)
	{
		random();
		for (i = 0; i<5; i++)
		{
			//��ȡ���������� 
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
						printf("error(;������һ�λ���\n");
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
						printf("error(;������һ�λ���\n");
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
						printf("error(;������һ�λ���\n");
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
					printf("%d + %d �� %d = ", a, b, c);
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
						printf("error(;������һ�λ���\n");
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
						printf("error(;������һ�λ���\n");
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
						printf("error(;������һ�λ���\n");
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
						printf("error(;������һ�λ���\n");
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
					printf("%d - %d �� %d = ", a, b, c);
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
						printf("error(;������һ�λ���\n");
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
						printf("error(;������һ�λ���\n");
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
						printf("error(;������һ�λ���\n");
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
						printf("error(;������һ�λ���\n");
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
					printf("%d * %d �� %d = ", a, b, c);
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
						printf("error(;������һ�λ���\n");
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
					printf("%d �� %d + %d = ", a, b, c);
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
						printf("error(;������һ�λ���\n");
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
					printf("%d �� %d - %d = ", a, b, c);
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
						printf("error(;������һ�λ���\n");
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
					printf("%d �� %d * %d = ", a, b, c);
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
						printf("error(;������һ�λ���\n");
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
					printf("%d �� %d �� %d = ", a, b, c);
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
						printf("error(;������һ�λ���\n");
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
		printf("������ȷ��Ϊ��%d%c\n\n", rate, pre);
		goto again;

	}
	else if (t == 0)
	{
		return 0;
	}
	else
		printf("�޷�ʶ��\n");

	return 0;
}
