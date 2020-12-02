#include <stdio.h>
int main()
{
	int n;
	long long sum = 0;
	long long ret = 1;
	for (n = 2; n <= 11; n++)
	{
		sum += ret;
		ret *= n;
	}
	printf("%lld\n", sum);
	return 0;
}