/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:28:31 by njerasea          #+#    #+#             */
/*   Updated: 2022/06/22 00:12:24 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long i, char *base)
{
	if (i >= 16)
		ft_putptr(i / 16, base);
	ft_putchar(base[i % 16]);
}

int	ft_ptrlen(unsigned long i)
{
	int	len;

	len = 0;
	while (i != 0)
	{
		len++;
		i /= 16;
	}
	return (len);
}

int	ft_print_pointer(va_list ptrarg)
{
	unsigned long	i;

	i = va_arg(ptrarg, unsigned long);
	ft_putstr("0x");
	ft_putptr(i, "0123456789abcdef");
	if (!i)
		return (ft_ptrlen(i + 1));
	return (ft_ptrlen(i));
}
