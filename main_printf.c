/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:32:42 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/20 18:00:23 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
	char	*str0;
	char	*str1;
	char	*str2;
	char	*str3;
	int		is_trap;
	char	c1;
	int		i = 0;
	int		j = 0;

    str0 = "123456789";
    str1 = "le chien danse dans le sable";
    str2 = "les chouettes ne sont pas credibles";
    str3 = "il fait un peu froid, non ?";
    c1 = 'P';
    is_trap = 1764;

    //ft_printf("str0 : %s\nstr2 : %s\nstr3 : %s\nc1 : %c, reellement ?\nd : %d\n\n", str0, str2, str3, c1, is_trap);
    //ft_printf("Merci c : %c et un avion\n", c1);

	i = ft_printf(" %f ", 1.2);
	ft_printf("MON RETOUR [%d]\n", i);

	j = printf(" %f ", 1.2);
	printf("SON RETOUR [%d]\n", j);

	i = ft_printf(" %x hola", 432);
	ft_printf("MON RETOUR [%d]\n", i);

	j = printf(" %x hola", 432);
	printf("SON RETOUR [%d]\n", j);

	//ft_printf("decimal : %d et une echelle\n\n", is_trap);

	return (0);
}
