#include "ft_printf.h"

int ft_putchar(char c)
{
    return (write (1, &c, 1));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while (str[i])
	{
		i++;
	}
	return(i);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return(ft_putstr("(null)"));
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);	
}

int	ft_putnbr(int n)
{
	int	len;
	long int	nb;

	len = 0;
	nb = n;

	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
		len++;
	}
	if(nb > 9)
		len += ft_putnbr(nb / 10);
	len += ft_putchar(nb % 10 + '0');
	return (len);
}

int	ft_putnbr_un(unsigned int n)
{
	unsigned int len;

	len = 0;

	if ( n > 9)
		len += ft_putnbr_un(n / 10);
	len += ft_putchar(n % 10 + '0');
	return (len);
}