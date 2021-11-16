/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:09:54 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/16 14:32:18 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printstr(const char *s, ...)
{
	va_list	args;
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	va_start(args, s);
	i = 0;
while (s[i])
	{
		str[i] += (char)va_arg(args, int);
		i++;
	}
	va_end(args);
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	*str1, *str2, *str3;
	str1 = "le chien aime la nuit.";
	str2 = "le chat aussi";
	str3 = "et sa soeur";

	ft_printstr(str1, str2, str3);
	return 0;
}*/

/*FONCTIONNEMENT

On recoit un char* format en parametre et un nombre indefini d'autres parametres

On initialise la structure va_list
va_list paraminfos et va_start avec la variable va_list (ici paraminfos) et le
dernier parametre connu (ici format)

On cree et initialise une variable pour le nbr de parametres ecrits

On cree une variable de type char pour le currentchar. On lui assigne la valeur
de format (en entree) et on l'incremente jusqu'a la fin de la chaine
On profite de cette boucle pour tester si le caractere actuel n'est pas %. On
l'affiche a l'aide d'un putchar. On incremente le nbr de caracteres lus.

On se retrouve ici avec un % comme caractere rencontre. On va donc devoir
decider quoi faire avec selon le caractere suivant. If else, elseif infini qui
appellerai les fonctions adequates (dans les autres fichiers).

Dans le cas d'une chaine de caracteres :
On cree une constante de type char*. On lui assigne le va_arg caste en constante
de char* a l'aide de la variable va_list suivie du type const char*.
On va ensuite boucler tant que la constante n'est pas terminee, en affichant
a l'aide d'un putchar les index suivants et en augmentant le nbr de caracteres
lus.

A la fin, on appelle la macro va_end avec la variable va_list.
On retourne ensuite la variable caracteres lus.

*/
