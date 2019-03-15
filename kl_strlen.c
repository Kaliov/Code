#include "libkl.h"
#include <inttypes.h>

intmax_t kl_strlen(const char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	return(j);
}
