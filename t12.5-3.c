#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void judge(int* px)
{
	int x = px;
	if (x % 4 == 0)
	{
		printf("��һ��������\n");
	}
	if (x % 4 != 0)
	{
		printf("��һ�겻������\n");
	}
}
int main()
{
	int year;
	scanf("%d", &year);
	judge(&year);
	return 0;
}