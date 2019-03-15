#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libkl.h"
#include <stdlib.h>

int main ()
{
	char	*str1 = "lol w';.w 34  ";
	size_t	i;
	size_t	j;
	int		*k;

	i = kl_wordnbr(str1);
	j = 0;
	k = kl_wordslen(str1, i);

	while(j < i)
	{
		kl_putnbr(k[j]);
		j++;
	}
	free(k);
	return(0);
}