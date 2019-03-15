#include "libkl.h"

char **kl_split_whitespaces(const char *str)
{
	char	**s;
	size_t	i;
	size_t	j;
	size_t	x;
	size_t	l;
	int 	*n;

	i = 0;
	j = 0;
	l = 0;
	x = kl_wordnbr(str);
	*s = kl_strnew(x + 1);
	n = kl_wordslen(str, x);
	
	while(i <= x)
	{
		if(!(s[i][j] = malloc(sizeof(s[i][j]) * (n[i] + 1))))
			return(0);

		while(str[l] != '\0')
		{
			while((str[l] != ' ' && str[l] != '\t') && str[l] '\n')
			{
				s[i][j] = str[l];
				j++;
				l++;

				if((str[l + 1] == ' ' || str[l + 1]) == 't' || str[l + 1] == '\n')
					i++;
			}
			l++;
			j = 0;
		}

		i++;
	}
}