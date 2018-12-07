#include <unistd.h>
#include "kallib.h"

void kal_putchar(char c)
{
	write(1,&c,1);
}
