#include<stdio.h>
int main()
{
	int i = 1000;
	printf("��������У�");
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