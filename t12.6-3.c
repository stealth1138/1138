#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int judge(int n)
{
	int i = 0;
	for (i = 2; i <= n / 2; i++)
	{
		if (n%i == 0)
		{
			printf("��������\n");
			break;
		}
		else
		{
			printf("������\n");
			break;
		}
	}
}

int main()
{
	int a;
	scanf("%d", &a);
	judge(a);
	system("pause");
	return 0;
}