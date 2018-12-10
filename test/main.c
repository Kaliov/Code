#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kallib.h"
#include <stdlib.h>

int main ()
{
	int val = 0;
	int i = -254;
	char *str;
//	char str[10] = "123tu*";

	while (i != 200)
	{

		str = kal_itoa(i);
		val = atoi(str);
		kal_putnbr(val);
		kal_putstr(" atoi / kal ");
		val = kal_atoi(str);
		kal_putnbr(val);
		kal_putstr("\n");
		free(str);
		i++;
	}
	kal_putnbr(-15);
	return(0);
}
