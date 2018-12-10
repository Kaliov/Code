#include "kallib.h"

char *kal_itoa(intmax_t x)
{
	char *str;
	size_t i;
	size_t ne;

	i = kal_nbrlen(x);
	ne = 0;

	if (!(str = malloc(sizeof(*str) * (i + 1))))
		return (NULL);

	if (x < 0)
	{
		ne = 1;
		x *= -1;
	}

	while (i != 0)
	{
		str[i - 1] = x % 10 + '0';
		x = x / 10;
		i--;
	}

	if(ne == 1)
		str[0] = '-';
	
	return(str);
}