#ifndef LIBKL_H
# define LIBKL_H

#include <inttypes.h>
#include <string.h>
#include <stdlib.h>

void kl_putchar(char c);

void kl_putstr(char *str);

void kl_putnbr(intmax_t nb);

intmax_t kl_strlen(const char *str);

intmax_t kl_atoi(char *str);

intmax_t kl_power(intmax_t a, size_t n);

char *kl_itoa(intmax_t x);

size_t kl_nbrlen(intmax_t nb);

intmax_t kl_strcmp(char *s1, char *s2);

void kl_swap(intmax_t *a, intmax_t *b);

char *kl_strcpy(char *dest, const char *src);

char *kl_strnew(size_t n);

char *kl_strdup(const char *s);

char **kl_split_whitespaces(char *str);

char *kl_strndup(const char *s, size_t n);

char *kl_strncpy(char *dest, const char *src, size_t n);

size_t kl_wordnbr(char *str);

int	*kl_wordslen(char	*str, size_t wordnbr);

#endif