#include "kallib.h"
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char *str = "115boen2j3o4ur5";

	kal_putnbr(kal_atoi(str));
	kal_putchar('\n');
	kal_putnbr(atoi(str));	
	return(0);
}