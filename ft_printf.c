/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:44:50 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/16 21:34:38 by nchennaf         ###   ########.fr       */
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
			ft_putchar_fd(s[i], 1);
		else
		{
			i++;
			if (s[i] == 's')
				nbr += ft_putstr_fd((char *)va_arg(args, char *), 1);
			else if (s[i] == 'c')
				nbr += ft_putchar_fd((char)va_arg(args, int), 1);
		//	else if (current_char == 'd' || current_char == 'i')
				//nbr += ft_putnbr_fd((int)va_arg(args, int), 1);
			else if (s[i] == '%')
				nbr += ft_putchar_fd('%', 1);
		}
		i++;
	}
	va_end(args);
	return (nbr);
}
