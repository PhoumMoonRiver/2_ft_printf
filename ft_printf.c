/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:51:54 by njerasea          #+#    #+#             */
/*   Updated: 2022/06/22 01:30:21 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_filter(va_list ptrarg, const char argN)
{
	if (argN == 'c')
		return (ft_print_char(ptrarg));
	else if (argN == 's')
		return (ft_print_str(ptrarg));
	else if (argN == 'p')
		return (2 + ft_print_pointer(ptrarg));
	else if (argN == 'd' || argN == 'i')
		return (ft_print_dec(ptrarg));
	else if (argN == 'u')
		return (ft_print_unsi(ptrarg));
	else if (argN == 'x')
		return (ft_putnbr_hex(ptrarg, "0123456789abcdef"));
	else if (argN == 'X')
		return (ft_putnbr_hex(ptrarg, "0123456789ABCDEF"));
	else if (argN == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *argN, ...)
{
	va_list	ptrarg;
	int		i;
	int		r;

	va_start(ptrarg, argN);
	i = 0;
	r = 0;
	while (argN[i])
	{
		if (argN[i] == '%')
		{
			r += ft_filter(ptrarg, argN[i + 1]);
			i++;
		}
		else
			r += ft_putchar(argN[i]);
		i++;
	}
	va_end(ptrarg);
	return (r);
}
