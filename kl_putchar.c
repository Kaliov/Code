#include <unistd.h>
#include "libkl.h"

void kl_putchar(char c)
	write(1,&c,1);