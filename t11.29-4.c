#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两整数：");
	scanf("%d %d", &a, &b);
	for (int i = b; i>0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("这两数的最大公因数为：%d\n", i);
			break;
		}
	}
	return 0;
}