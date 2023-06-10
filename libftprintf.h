#ifndef LIBFTPRINTF_H

#define LIBFTPRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

size_t ft_putnbr_custom(long n, int lowercase, int base);
size_t ft_putnbr_p(unsigned long n);
size_t ft_putstr(char *s);
size_t ft_putchar(char c);

char ft_lowertoupper(char c);
size_t ft_strlen(char *s);

int ft_printf(const char *format, ...);
#endif
