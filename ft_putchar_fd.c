/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 08:30:55 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/16 14:36:35 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// writes the char and returns the count.

int	ft_putchar_fd(char c, int fd)
{
	return (write (fd, &c, 1));
}
