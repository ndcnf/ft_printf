/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:09:54 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/15 11:26:35 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft_originals/ft_strlen.c"

char    *ft_printstr(const char *s, ...)
{
	va_list	args;
    int     i;
    char    *str;

    if (!s)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    va_start(args, s);
    i = 0;
    while (s[i])
    {
        str[i] +=(char)va_arg(args, int);
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(void)
{
    char    *str;

    str = "le chien aime la nuit.";
    ft_printstr(str, "le chat aussi", "et sa soeur");
}
