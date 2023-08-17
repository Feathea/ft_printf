/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_others.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbesli <isbesli@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:04:57 by isbesli           #+#    #+#             */
/*   Updated: 2023/08/17 18:05:00 by isbesli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	base(unsigned long long int k, char x)
{
	int	i;
	int	tmp;

	i = 0;
	if (k > 15)
	{
		tmp = base(k / 16, x);
		if (tmp == -1)
			return (-1);
		i += tmp;
	}
	if (k % 16 < 10)
	{
		if (ft_putchar((k % 16) + '0') == -1)
			return (-1);
	}
	else if (ft_putchar((k % 16) + x) == -1)
		return (-1);
	return (++i);
}
