#include <stdio.h>
//参数 width 和 height 为矩形的宽和高，symbol 为显示字符。
//函数将在屏幕下显示宽度为 width、高度为 height 由字符 symbol 围成的空心矩形。若 width 或 height 小于等于 0，则不输出。
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
