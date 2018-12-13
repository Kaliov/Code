#include "kallib.h"

char *kal_strnew(size_t n)
{
	size_t i;
	char *str;

	i = 0;

	if(!(str = malloc(sizeof(*str) * n)))
		return(NULL);

	while(i <= n)
	{
		str[i] = '\0';
		i++;
	}
	return(str);
}