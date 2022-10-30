/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_options2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 00:44:33 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/30 01:03:40 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_integer_base10(va_list p, int x, int *print)
{
	int i;
	
	i = va_arg(p, int);
	ft_putnbr(i, print);
	x++;
}

void	ft_unsigned_decimal_base10(va_list p, int x, int *print)
{
	unsigned int un_d;
	
	un_d = va_arg(p, unsigned int);
	ft_putnbr(un_d, print);
	x++;
}

void	ft_decimal_base10(va_list p, int x, int print)
{
	long d;

	d = va_arg(p, int);
	ft_putnbr(d, print);
	x++;
}
