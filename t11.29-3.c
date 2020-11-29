#include<stdio.h>
int main()
{
	int i = 1000;
	printf("是闰年的有：");
	while (i <= 2000)
	{
		if (i % 4 == 0)
		{
			printf("%d ", i);
		}
		++i;
	}
	return 0;
}