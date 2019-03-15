#include "libkl.h"

intmax_t kl_strcmp(char *s1, char *s2)
{
	size_t i;
	intmax_t x;

	i = 0;
	x = 0;

	while(s1[i] != '\0' && s2[i] != '\0')
	{
		x = s1[i] - s2[i];

		if(x != 0)
			return(x);

		i++;
	}
	return(x);
}