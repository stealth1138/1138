#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b) printf("比较大的数为%d\n", a);
	else printf("比较大的数为%d\n", b);
	return 0;
}