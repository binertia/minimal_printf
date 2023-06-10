#include "libftprintf.h"

size_t ft_strlen(char *s)
{
  size_t len;

  if (!s)
    return (0);
  len = 0;
  while (s[len])
    len++;
  return (len);
}

char ft_lowertoupper(char c)
{
  return (c - 32);
}
