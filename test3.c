//原式，进行a与b的除法，此时发现显示错误
/*#include<stdio.h>
int main()
{
	int a = 10;
	int b = 3;
	printf("%d\n", a + b);
	printf("%f\n", a / b);
	return 0;
}*/

//将%f更改为%d，使相除输出为整数
/*#include<stdio.h>
int main()
{
	int a = 10;
	int b = 3;
	printf("%d\n", a + b);
	printf("%f\n", a / b);
	return 0;
}*/

//强转
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 3;
	printf("%lf\n", (double)a / (double)b);
	return 0;
}