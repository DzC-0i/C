#include <stdio.h>
//���� width �� height Ϊ���εĿ�͸ߣ�symbol Ϊ��ʾ�ַ���
//����������Ļ����ʾ���Ϊ width���߶�Ϊ height ���ַ� symbol Χ�ɵĿ��ľ��Ρ��� width �� height С�ڵ��� 0���������
void HollowRect(int width, int height, char symbol);

int main()
{
	int w, h;
	char s;
	scanf("%d %d %c", &w, &h, &s);
	HollowRect(w, h, s);
	system("pause");
	return 0;
}

void HollowRect(int width, int height, char symbol)
{
	int i, j;
	for (i = 1; i <= height; i++) {
		for (j = 1; j <= width; j++) {
			if (i == 1 || i == height || j == 1 || j == width)
				printf("%c", symbol);
			else
				printf(" ");
		}
		printf("\n");
	}
}
