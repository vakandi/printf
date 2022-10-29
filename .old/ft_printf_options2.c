/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_options2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <wbousfir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 03:03:22 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/28 03:05:27 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"  

int	ft_integer_base10(va_list p, int x)
{
	int i;
	i = va_arg(p, int);
	ft_putnbr(i);
	x++;
	return (0);
}

int	ft_unsigned_decimal_base10(va_list p, int x)
{
	unsigned int un_d;
	un_d = va_arg(p, unsigned int);
	ft_putnbr(un_d);
	x++;
	return (0);
}

int	ft_decimal_base10(va_list p, int x)
{
	long d;
	d = va_arg(p, int);
	ft_putnbr(d);
	x++;
	return (0);
}
