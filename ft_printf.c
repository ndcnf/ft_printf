/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:44:50 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/17 16:23:52 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"
#include <stdio.h> //ATTENTION, UNE REF INTERDITE !

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		nbr;
	int		i;

	if (!s)
		return (0);
	va_start(args, s);
	nbr = 0;
	i = 0;

	while (s[i])
	{
		if (s[i] != '%')
			nbr += ft_putchar_fd_int(s[i], 1);
		else
		{
			i++;
			if (s[i] == 's')
				nbr += ft_putstr_fd_int((char *)va_arg(args, char *), 1);
			else if (s[i] == 'c')
				nbr += ft_putchar_fd_int((char)va_arg(args, int), 1);
			else if (s[i] == 'd' || s[i] == 'i')
			{
				//nbr = the_counter(ft_atoi((char *)va_arg(args, char *)));
				nbr += ft_putnbr_fd_sizet((int)va_arg(args, int), 1);
			}
			else if (s[i] == '%')
				nbr += ft_putchar_fd_int('%', 1);
			else if (s[i] == 'x' || s[i] == 'X')
				nbr += ft_base_conv((unsigned int)va_arg(args, unsigned int), 16, s[i], 1);
			else if (s[i] == 'p')
			{
				nbr += ft_base_conv((unsigned int)va_arg(args, void *), 16, 'x', 1);
			}
			else
			{
				nbr += ft_putchar_fd_int(s[i - 1], 1);
				nbr += ft_putchar_fd_int(s[i], 1);
			}
		}
		i++;
	}
	va_end(args);
	return (nbr);
}
