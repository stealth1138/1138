#include <stdio.h>
#include <stdlib.h>


int sim_strlen(char* str)
{
	if ('\0' == *str)
	{
		return 0;
	}
	else
	{
		return 1 + sim_strlen(1 + str);
	}
}


int main()
{
	char *a = "Hello World!";
	printf("\"%s\" has %d chars!\n", a, sim_strlen(a));
	system("pause");
	return 0;
}