#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	return n;
}

int main()
{
	int n;
	printf("请输入需要计算的数：");
	scanf("%d", &n);
	printf("计算后为：%d\n", DigitSum(n));
	system("pause");
	return 0;
}