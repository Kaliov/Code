#include "kallib.h"
#include <inttypes.h>

void kal_putnbr(intmax_t nb)
{
	intmax_t n = nb;

	if (nb < 0)
	{
		kal_putchar('-');
		n = -nb;
	}

	if (n > 9)
	{
		kal_putnbr(n / 10);
	}
	kal_putchar((n % 10) + '0');
}