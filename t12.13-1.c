#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int time(int i, int j)
{
	int a = 0;
	int b = 0;
	for (a = 1; a <= i; )
	{
		for (b = 1; b <= j; )
		{
			printf("%d*%d=%.2d ", a, b, a*b);
			b++;
		}
		printf("\n");
		a++;
	}
}


int main()
{
	int a, b;
	printf("请输入需要相乘的数值：");
	scanf("%d %d", &a, &b);
	time(a, b);
	system("pause");
	return 0;
}