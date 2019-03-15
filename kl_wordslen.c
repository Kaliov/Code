#include <stdlib.h>
#include "libkl.h"

int	*kl_wordslen(char	*str, size_t wordnbr)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		*tabint;

	i = 0;
	j = 0;
	k = 0;

	if(!(tabint = malloc(sizeof(*tabint) * (wordnbr + 1))))
		return(0);

	while(str[i] != '\0')
	{
		if((str[i] != ' ' && str[i] != '\t') && str[i] != '\n')
		{
			j++;
			if(((str[i + 1] == ' ' || str[i + 1] == '\t') ||
			 (str[i + 1] == '\n' || str[i + 1] == '\0')))
			{
				tabint[k] = j;
				k++;
				j = 0;
			}
		}
		i++;
	}
	return(tabint);
}