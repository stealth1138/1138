/*#include <stdio.h>
int main()
{
	printf("The size of short is %d bytes\n", sizeof(short));
	printf("The size of int is %d bytes\n", sizeof(int));
	printf("The size of long is %d bytes\n", sizeof(long));
	printf("The size of long long is %d bytes\n", sizeof(long long));
	return 0;
}*/
#include <stdio.h>
int main()
{
	int a, b, c, d;
	a = sizeof(short);
	b = sizeof(int);
	c = sizeof(long);
	d = sizeof(long long);
	printf("The size of short is %d bytes\n", a);
	printf("The size of int is %d bytes\n", b);
	printf("The size of long is %d bytes\n", c);
	printf("The size of long long is %d bytes\n", d);
	return 0;
}