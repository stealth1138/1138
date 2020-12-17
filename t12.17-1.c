#include <stdio.h>
#include <stdlib.h>

int sim_strlen(char* str)
{
	int num = 0;
	while ('\0' != *str)
	{
		num++;
		str++;
	}
	return num;
}

int main()
{
	char *a="Hello World!";
	printf("\"%s\" has %d chars!\n",a, sim_strlen(a));
	system("pause");
	return 0;
}
