#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int REC(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*REC(n - 1);
	}
}

int main()
{
	int n;
	printf("����������׳˵�����");
	scanf("%d", &n);
	printf("%d�Ľ׳�Ϊ��%d\n", n, REC(n));
	system("pause");
	return 0;
}