#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[10];
	printf("������ʮ��������");
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 0; i <= 10; i++)
	{
		if (arr[i]>max)
		{
			i++;
			max = arr[i];
		}
	}
	printf("�������ǣ�%d\n", max);
	return 0;
}