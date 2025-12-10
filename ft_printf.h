#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>

int     ft_printaddress(void *ptr);
int	    ft_format(va_list args, const char format);
int     ft_putnbr_base(unsigned long n, char *base);
int	    ft_putstr(char *str);
int     ft_putchar(char c);
int	    ft_strlen(char *str);
int	    ft_putnbr(int n);
int	    ft_putnbr_un(unsigned int n);
int	ft_printf(const char *format, ...);
# endif
