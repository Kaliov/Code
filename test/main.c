#include "kallib.h"
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char *str = "123zbc";

	kal_atoi(str);
	kal_putchar('\n');
	atoi(str);	
	return(0);
}