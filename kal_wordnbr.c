#include "kallib.h"

size_t kal_wordnbr(char *str)
{
	size_t	i;
	size_t	j;


	i = 0;
	j = 0;

	while(str[i] != '\0')
	{	
		if((str[i] != ' ' && str[i] != '\t') && str[i] != '\n')
			if(((str[i + 1] == ' ' || str[i + 1] == '\t') ||
			 (str[i + 1] == '\n' || str[i + 1] == '\0')))
				j++;
		i++;
	}
	return(j);
}