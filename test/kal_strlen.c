#include "kallib.h"

int kal_strlen(char *str)
{
	int j = 0;
	if (str[j] != '\0')
		j++;
	return(j);
}
