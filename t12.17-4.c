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
	printf("��������Ҫ���������");
	scanf("%d", &n);
	printf("�����Ϊ��%d\n", DigitSum(n));
	system("pause");
	return 0;
}