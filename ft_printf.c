/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:44:50 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/15 12:46:14 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h> //ATTENTION, UNE REF INTERDITE !

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		nbr;
	char	current_char;
	char *	is_string;
	int		i;

	is_string = NULL;
	va_start(args, s);
	nbr = 0;
	//current_char = s[i];
	while (s[nbr])
	{
		current_char = s[nbr];
		if (current_char != '%')
			putchar(current_char); //ATTENTION, UNE FONCTION INTERDITE !
		nbr++;
	
		i = 0;
		if (current_char + 1 == 's')
			//ft_printstr(args)
		{
			is_string = (char *)va_arg(args, char *);
			while (is_string[i])
			{
				putchar(is_string[i++]); //ATTENTION, UNE FONCTION INTERDITE !
				//i++;
				nbr++;
			}
		}
		//is_string[i] = '\0';
	}
	va_end(args);
	return (nbr);
}
/*
char	choice(char current_char)
{
	if (current_char != '%')
		return (1);
	else if (current_char == 's')
		ft_printstr()
}


int main(void)
{
    char    *str1;
    char    *str2;
    char    *str3;
    int     is_trap;

    str1 = "le chien danse dans le sable";
    str2 = "les chouettes ne sont pas credibles";
    str3 = "il fait un peu froid, non ?";
    is_trap = 168;

    ft_printf("str1 : %s\nstr2 : %s\nstr3 : %s\npas de str4 : %d\n\n", str1, str2, str3, is_trap);
    return (0);
}*/