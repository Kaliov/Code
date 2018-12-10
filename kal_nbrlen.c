#include "kallib.h"

size_t kal_nbrlen(intmax_t nb)
{
	size_t i;

	i = 1;

	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while( nb >= 10)
	{
		i++;
		nb = nb / 10;
	}
	return(i);
}