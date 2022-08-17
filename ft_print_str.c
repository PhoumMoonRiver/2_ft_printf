/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 13:05:47 by njerasea          #+#    #+#             */
/*   Updated: 2022/06/20 09:37:52 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	return (write(1, s, ft_strlen(s)));
}

int	ft_print_char(va_list ptrarg)
{
	char	c;

	c = (char)va_arg(ptrarg, int);
	return (ft_putchar(c));
}

int	ft_print_str(va_list ptrarg)
{
	char	*s;

	s = (char *)va_arg(ptrarg, char *);
	if (!s)
		return (ft_putstr("(null)"));
	return (ft_putstr(s));
}
