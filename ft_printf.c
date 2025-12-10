#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_printaddress(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_putnbr_un(va_arg(args, unsigned int));
	else if (format == 'x')
		len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list arg;
	int	len;
	int i;

	i = 0;
	len = 0;
	va_start(arg, format);
	while(format[i])
	{
		if(format[i] == '%')
			{
				len += ft_format(arg, format[i + 1]);
				i++;
			}
		else
		len += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (len);
}

