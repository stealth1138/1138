#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int num = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else if (arr[mid]<num)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}