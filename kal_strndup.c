#include "kallib.h"

char *kal_strndup(const char *s, size_t n)
{
	char	*str;

	if((str = kal_strnew(n + 1)) == NULL)
		return(NULL);
	kal_strncpy(str, s, n);
	return(str);
}