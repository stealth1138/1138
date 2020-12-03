#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[10];
	printf("请输入十个整数：");
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
	printf("最大的数是：%d\n", max);
	return 0;
}