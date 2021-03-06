#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <stdint.h>
# include <wchar.h>

void ft_putulonglongfwpm(char c, unsigned long long int n, size_t *fwpm);
void print_arg(char **strptr, va_list args, size_t *fwpm);
void ft_putwidecharfwpm(wchar_t c, size_t *fwpm);
void ft_putcharfwpm(char c, size_t *fwpm);
void ft_putlongfwpm(long int n, size_t *fwpm, char c);
void ft_putlonglongfwpm(long long int n, size_t *fwpm);
void ft_putlong2fwpm(long int n, size_t *fwpm);
void ft_puthexfwpm(long int n, char mod, size_t *fwpm);
void ft_putnbrfwpm(int n, size_t *fwpm);
void ft_putstrfwpm(char *str, size_t *fwpm);
void ft_putpfwpm(void *ptr, size_t *fwpm);
long int ft_modoulongfwpm(char c, long n, size_t *fwpm);
int chngedifwpm(int n, size_t *fwpm);
char *utf32to8(wint_t wint);
#endif
