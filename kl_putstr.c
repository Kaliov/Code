#include "libkl.h"

void kl_putstr(char *str)
{
	int j = 0;
	
	while (str[j] != '\0')
	{
		kl_putchar(str[j]);
		j++;
	}
}
