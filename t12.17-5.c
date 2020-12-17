#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Power(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k>=1)
	{
		return n*Power(n, k - 1);
	}
}

int main()
{
	int n, k;
	printf("请分别输入需要计算的基数与次方数，并用逗号分隔开：\n");
	scanf("%d,%d", &n, &k);
	printf("计算结果是：%d\n", Power(n, k));
	system("pause");
	return 0;
}