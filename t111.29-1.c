#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, t=0;
	printf("������������");
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
	printf("�Ӵ�СΪ%d %d %d\n", a, b, c);
	return 0;
}