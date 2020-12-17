#include <stdio.h>
#include <stdlib.h>

int sim_strlen(char* str);
void reverse_string(char* str);

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

void reverse_string(char* str)
{
	int len = sim_strlen(str);
	char fir = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (sim_strlen(str) > 0)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = fir;
}


int main()
{
	char str[] = "abcdefg";
	printf("before = %s\n", str);
	reverse_string(str);
	printf("after  = %s\n",str);
	system("pause");
	return 0;
}