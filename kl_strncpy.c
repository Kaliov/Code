#include "libkl.h"

char *kl_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;

	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return(dest);
}