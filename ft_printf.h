/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:41:22 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/17 15:07:48 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_putchar_fd_int(char c, int fd);
int		ft_putstr_fd_int(char *s, int fd);
size_t	ft_putnbr_fd_sizet(int n, int fd);
int		the_counter(int n);
int     ft_base_conv(unsigned int n, unsigned int base, char c, int fd);

#endif
