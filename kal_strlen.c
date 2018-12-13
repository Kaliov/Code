#include "kallib.h"
#include <inttypes.h>

intmax_t kal_strlen(const char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	return(j);
}
