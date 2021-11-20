/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:44:50 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/19 20:08:10 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_choice(const char *s, int i, int nbr, va_list args)
{
	if (s[i] == 's')
		nbr += ft_putstr_fd_int(va_arg(args, char *), 1);
	else if (s[i] == 'c')
		nbr += ft_putchar_fd_int((char)va_arg(args, int), 1);
	else if (s[i] == 'd' || s[i] == 'i')
		nbr += ft_putnbr_fd_sizet(va_arg(args, int), 1);
	else if (s[i] == '%')
		nbr += ft_putchar_fd_int('%', 1);
	else if (s[i] == 'x' || s[i] == 'X')
		nbr += ft_hexa(va_arg(args, unsigned int), s[i], 1);
	else if (s[i] == 'p')
	{
		nbr += ft_putstr_fd_int("0x", 1);
		nbr += ft_hexa((unsigned long)va_arg(args, void *), 'x', 1);
	}
	else if (s[i] == 'u')
		nbr += ft_putunbr_fd(va_arg(args, unsigned int), 1);
	else
	{
		nbr += ft_putchar_fd_int(s[i - 1], 1);
		nbr += ft_putchar_fd_int(s[i], 1);
	}
	printf("\n%d\n", nbr); \\SUPPRIMER CA !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return (nbr);
}

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
/*		if (s[i] == 's')
		nbr += ft_putstr_fd_int(va_arg(args, char *), 1);
	else if (s[i] == 'c')
		nbr += ft_putchar_fd_int((char)va_arg(args, int), 1);
	else if (s[i] == 'd' || s[i] == 'i')
		nbr += ft_putnbr_fd_sizet(va_arg(args, int), 1);
	else if (s[i] == '%')
		nbr += ft_putchar_fd_int('%', 1);
	else if (s[i] == 'x' || s[i] == 'X')
		nbr += ft_hexa(va_arg(args, unsigned int), s[i], 1);
	else if (s[i] == 'p')
	{
		nbr += ft_putstr_fd_int("0x", 1);
		nbr += ft_hexa((unsigned long)va_arg(args, void *), 'x', 1);
	}
	else if (s[i] == 'u')
		nbr += ft_putunbr_fd(va_arg(args, unsigned int), 1);
	else
	{
		nbr += ft_putchar_fd_int(s[i - 1], 1);
		nbr += ft_putchar_fd_int(s[i], 1);*/
	//}
	//return (nbr);

			nbr += ft_choice(s, i, nbr, args);
		}
		i++;
		printf("\n%d\n", nbr); \\SUPPRIMER CA !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	}
	va_end(args);
	return (nbr);
}
