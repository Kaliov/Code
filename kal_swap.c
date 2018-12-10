#include "kallib.h"

void kal_swap(intmax_t *a, intmax_t *b)
{
	intmax_t c;

	c = *a;
	*a = *b;
	*b = c;
}