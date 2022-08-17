/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 21:35:55 by njerasea          #+#    #+#             */
/*   Updated: 2022/06/21 23:31:15 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_unsi(unsigned int i)
{
	unsigned int	len;

	len = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		i /= 10;
		len++;
	}
	return (len);
}

void	ft_putunsi(unsigned int i)
{
	char	print;

	print = i % 10 + '0';
	if (i > 9)
	{
		ft_putunsi(i / 10);
		write(1, &print, 1);
	}
	else
		write(1, &print, 1);
}

int	ft_print_unsi(va_list ptrarg)
{
	unsigned int	i;

	i = va_arg(ptrarg, unsigned int);
	ft_putunsi(i);
	return (ft_len_unsi(i));
}
