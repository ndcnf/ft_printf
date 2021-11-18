#include "ft_printf.h"

int ft_base_conv(unsigned int n, unsigned int base, char c, int fd)
{
	int		cnt;
	char	*hexarray_lwr;
	char	*hexarray_upr;
	
	hexarray_lwr = "0123456789abcdef";
	hexarray_upr = "0123456789ABCDEF";
	cnt = 0;
	if (n >= 0 && n < base)
		if (c == 'x' && (base == 16))
			return (write(fd, &hexarray_lwr[n % base], 1));
		else
			return (write(fd, &hexarray_upr[n % base], 1));
	else
	{
		if (c == 'x' && (base == 16))
		{
			cnt += ft_base_conv(n / base, base, c, fd);
			return (write(fd, &hexarray_lwr[n % base], 1) + cnt);
		}
		else
		{
			cnt += ft_base_conv(n / base, base, c, fd);
			return (write(fd, &hexarray_upr[n % base], 1) + cnt);
		}
	}
	return (cnt);
}