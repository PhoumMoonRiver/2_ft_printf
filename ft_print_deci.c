/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_deci.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:35:06 by njerasea          #+#    #+#             */
/*   Updated: 2022/06/21 21:33:40 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(int i)
{
	int	len;

	len = (i < 0);
	if (i == 0)
		return (1);
	while (i != 0)
	{
		i /= 10;
		len++;
	}
	return (len);
}

void	ft_putnbr(int i)
{
	char	print;

	print = i % 10 + '0';
	if (i == -2147483648)
	{
		ft_putnbr(i / 10);
		write(1, "8", 1);
	}
	else if (i < 0)
	{
		write(1, "-", 1);
		ft_putnbr(i * -1);
	}
	else if (i > 9)
	{
		ft_putnbr(i / 10);
		write(1, &print, 1);
	}
	else
		write(1, &print, 1);
}

int	ft_print_dec(va_list ptrarg)
{
	int	i;

	i = va_arg(ptrarg, int);
	ft_putnbr(i);
	return (ft_len(i));
}
