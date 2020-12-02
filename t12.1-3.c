#include <stdio.h>
int main()
{
	int n;
	long long sum = 0;
	for (n = 1; n <= 10; n++)
	{
		int i = 1;
		int ret = 1;
		for (i = 2; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%lld\n", sum);
	return 0;
}