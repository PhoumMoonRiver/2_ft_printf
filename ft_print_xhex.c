/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:47:35 by njerasea          #+#    #+#             */
/*   Updated: 2022/06/22 02:32:47 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int i)
{
	int	len;

	len = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		len++;
		i /= 16;
	}
	return (len);
}

void	ft_putnbr_base(unsigned int i, char *base)
{
	if (i >= 16)
		ft_putnbr_base((i / 16), base);
	ft_putchar(base[i % 16]);
}

int	ft_putnbr_hex(va_list ptrarg, char *base)
{
	unsigned int	i;

	i = va_arg(ptrarg, unsigned int);
	ft_putnbr_base(i, base);
	return (ft_hex_len(i));
}
