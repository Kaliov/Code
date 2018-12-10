#include "kallib.h"
#include <inttypes.h>

intmax_t kal_power(intmax_t a, size_t n)
{
	intmax_t res = a;
	intmax_t i = 1;

	if(n == 0)
		return(1);
	while(i < n)
	{
		res = res * a;
		i++;
	}
	return(res);
}
	
