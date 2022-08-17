/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njerasea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:34:27 by njerasea          #+#    #+#             */
/*   Updated: 2022/06/22 02:33:25 by njerasea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_print_char(va_list ptrarg);
int			ft_print_str(va_list ptrarg);
size_t		ft_strlen(const char *s);
int			ft_printf(const char *argN, ...);
void		ft_putptr(unsigned long i, char *base);
int			ft_ptrlen(unsigned long num);
int			ft_print_pointer(va_list ptrarg);
int			ft_len(int n);
void		ft_putnbr(int n);
int			ft_print_dec(va_list ptrarg);
void		ft_putunsi(unsigned int i);
int			ft_print_unsi(va_list ptrarg);
int			ft_hex_len(unsigned int i);
int			ft_putnbr_hex(va_list ptrarg, char *base);

#endif
