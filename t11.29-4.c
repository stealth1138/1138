#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	printf("��������������");
	scanf("%d %d", &a, &b);
	for (int i = b; i>0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			printf("���������������Ϊ��%d\n", i);
			break;
		}
	}
	return 0;
}