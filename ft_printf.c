/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:44:50 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/16 17:39:44 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"
#include <stdio.h> //ATTENTION, UNE REF INTERDITE !

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		nbr;
	char	current_char;

	if (!s)
		return (0);
	va_start(args, s);
	nbr = 0;
	while (s[nbr])
	{
		current_char = s[nbr];
		if (current_char != '%')
			ft_putchar_fd(current_char, 1);
		if (current_char == '%')
		{
			if (s[nbr + 1] == 's')
			{
				nbr++;
				ft_putstr_fd((char *)va_arg(args, char *), 1);
			}
			else if (s[nbr + 1] == 'c')
			{
				nbr++;
				ft_putchar_fd((char)va_arg(args, int), 1);
			}
			else if (s[nbr + 1] == 'd' || s[nbr + 1] == 'i')
			{
				nbr++;
				ft_putnbr_fd((int)va_arg(args, double), 1);
			}
		}
		nbr++;
	}
	va_end(args);
	return (nbr);
}
