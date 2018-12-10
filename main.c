#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kallib.h"
#include <stdlib.h>

int main ()
{
	char str[5] = "15867";
	char str2[5] = "15684";

	kal_putnbr(kal_strcmp(str, str2));
	kal_putstr("\n ntm fdp, elle est la, la vraie valeur :");
	kal_putnbr(strcmp(str, str2));
	return(0);
}
