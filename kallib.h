#ifndef KALLIB_H
# define KALLIB_H

#include <inttypes.h>
#include <string.h>
#include <stdlib.h>

void kal_putchar(char c);

void kal_putstr(char *str);

void kal_putnbr(intmax_t nb);

intmax_t kal_strlen(char *str);

intmax_t kal_atoi(char *str);

intmax_t kal_power(intmax_t a, size_t n);

char *kal_itoa(intmax_t x);

size_t kal_nbrlen(intmax_t nb);

intmax_t kal_strcmp(char *s1, char *s2);

void kal_swap(intmax_t *a, intmax_t *b);

#endif