#include "kallib.h"

char *kal_strdup(const char *s)
{
	size_t	x;
	char	*str;

	x = kal_strlen(s);
	str = kal_strnew(x + 1);
	kal_strcpy(str, s);
	return(str);
}