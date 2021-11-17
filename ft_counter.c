/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:30:20 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/17 13:47:23 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	the_counter(int n)
{
	int			count;
	long int	n_val;

	count = 0;
	n_val = (long)n;
	if (n < 0)
	{
		count++;
		n_val = -n_val;
	}
	if (n_val == 0)
		count++;
	while (n_val > 0)
	{
		count++;
		n_val /= 10;
	}
	return (count);
}
