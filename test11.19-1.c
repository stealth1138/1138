#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b) printf("�Ƚϴ����Ϊ%d\n", a);
	else printf("�Ƚϴ����Ϊ%d\n", b);
	return 0;
}