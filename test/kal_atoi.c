#include "kallib.h"
#include <inttypes.h>

intmax_t kal_atoi(char *str)
{
	size_t i = 0;
	intmax_t x = 0;
	intmax_t neg = 0;

	if(str[i] != '-' && ((str[i] < '0') || (str[i] > '9')))
		return(0);
	if(str[i] == '-' && ((str[i + 1] >= '0') && (str[i + 1] <= '9')))
	{
		neg = 1;
		i++;
	}
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		x = (str[i] - '0') + x * 10;
		i++;
	}
	if(neg == 1)
		x = -x;
	return(x);
}
