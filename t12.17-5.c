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
	printf("��ֱ�������Ҫ����Ļ�����η��������ö��ŷָ�����\n");
	scanf("%d,%d", &n, &k);
	printf("�������ǣ�%d\n", Power(n, k));
	system("pause");
	return 0;
}