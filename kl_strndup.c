#include "libkl.h"

char *kl_strndup(const char *s, size_t n)
{
	char	*str;

	if((str = kl_strnew(n + 1)) == NULL)
		return(NULL);
	kl_strncpy(str, s, n);
	return(str);
}