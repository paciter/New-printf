#include "ft_printf.h"

int ft_putnbr_base(unsigned long n, char *base)
{
    int len;
    unsigned long    size;

    len = 0;
    size = ft_strlen(base);
    
    if (size < 2)
        return (0);
    if(n >= size)
        len += ft_putnbr_base(n / size, base);
    len += ft_putchar(base[n % size]);
    return (len);
}

int ft_printaddress(void *ptr)
{
    int len;

    len = 0;
    len += ft_putstr("0x");
    len += ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");
    return (len);
}