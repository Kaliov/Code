#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kallib.h"
#include <stdlib.h>

#include "kallib.h"

int	*wordslen(char	*str, size_t wordnbr)
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

int main ()
{
	char	*str1 = " 54 wer erg\tewg\newf ge\t \nfwefw";
	size_t	i;
	size_t	j;
	int		*k;

	i = kal_wordnbr(str1);
	j = 0;
	k = wordslen(str1, i);

	while(k[j] != '\0')
	{
		kal_putnbr(k[j]);
		kal_putstr("\n");
		j++;
	}
	return(0);
}