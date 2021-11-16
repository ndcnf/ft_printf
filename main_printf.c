/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:32:42 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/16 21:16:44 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	char	*str0;
	char	*str1;
	char	*str2;
	char	*str3;
	int		is_trap;
	char	c1;

    str0 = "123456789";
    str1 = "le chien danse dans le sable";
    str2 = "les chouettes ne sont pas credibles";
    str3 = "il fait un peu froid, non ?";
    c1 = 'P';
    is_trap = 1764;

    ft_printf("str0 : %s\nstr2 : %s\nstr3 : %s\nc1 : %c, reellement ?\nd : %d\n\n", str0, str2, str3, c1, is_trap);
    ft_printf("Merci c : %c et un avion\n", c1);
	ft_printf(" %c\n", '0' - 256);
	ft_printf("decimal : %d et une echelle\n\n", is_trap);

	return (0);
}
