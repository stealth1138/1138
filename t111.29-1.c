#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, t=0;
	printf("输入三个数：");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b&&b < c)
	{
		t = c;
		c = a;
		a = t;
	}
	if (a < c&&c < b)
	{
		t = b;
		b = a;
		a = t;
	}
	if (b < a&&a < c)
	{
		t = c;
		c = a;
		a = t;
	}
	if (b < c&&c < a)
	{
		t = b;
		b = c;
		c = t;
	}
	if (c < a&&a < b)
	{
		t = b;
		b = a;
		a = t;
	}
	else;
	printf("从大到小为%d %d %d\n", a, b, c);
	return 0;
}