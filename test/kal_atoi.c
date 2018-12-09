#include "kallib.h"
#include <inttypes.h>

intmax_t kal_atoi(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if(str[i] == 45 || ('0' <= str[i] && str[i] <= '9'))
		{
			if(str[i] == 45 && ('0' <= str[i + 1] && str[i + 1] <= '9'))
			{
				kal_putchar('-');
				i++;
			}
			kal_putnbr(str[i] - '0');
		}
		kal_putnbr('0');
		return(0);
	}
	return(0);
}