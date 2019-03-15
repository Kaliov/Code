#include "libkl.h"

char *kl_strdup(const char *s)
{
	size_t	x;
	char	*str;

	x = kl_strlen(s);
	str = kl_strnew(x + 1);
	kl_strcpy(str, s);
	return(str);
}