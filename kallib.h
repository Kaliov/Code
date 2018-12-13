#ifndef KALLIB_H
# define KALLIB_H

#include <inttypes.h>
#include <string.h>
#include <stdlib.h>

void kal_putchar(char c);

void kal_putstr(char *str);

void kal_putnbr(intmax_t nb);

intmax_t kal_strlen(const char *str);

intmax_t kal_atoi(char *str);

intmax_t kal_power(intmax_t a, size_t n);

char *kal_itoa(intmax_t x);

size_t kal_nbrlen(intmax_t nb);

intmax_t kal_strcmp(char *s1, char *s2);

void kal_swap(intmax_t *a, intmax_t *b);

char *kal_strcpy(char *dest, const char *src);

char *kal_strnew(size_t n);

char *kal_strdup(const char *s);

char **kal_split_whitespaces(char *str);

char *kal_strndup(const char *s, size_t n);

char *kal_strncpy(char *dest, const char *src, size_t n);

size_t kal_wordnbr(char *str);

#endif