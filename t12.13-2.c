#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int UNREC(int n)
{
	int i;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret = i*ret;
	}
	return ret;
}

int main()
{
	int n;
	printf("请输入所求阶乘的数：");
	scanf("%d", &n);
	printf("%d的阶乘为：%d\n", n, UNREC(n));
	system("pause");
	return 0;
}