#include "libkl.h"
#include <inttypes.h>

void kl_putnbr(intmax_t nb)
{
	intmax_t n = nb;

	if (nb < 0)
	{
		kl_putchar('-');
		n = -nb;
	}

	if (n > 9)
	{
		kl_putnbr(n / 10);
	}
	kl_putchar((n % 10) + '0');
}