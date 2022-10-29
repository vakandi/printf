/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_options2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: wbousfir <wbousfir@student.1337.ma>        +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2022/10/28 03:03:22 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/28 03:05:27 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_integer_base10(va_list p, int x, int print)
{
	int i;
	i = va_arg(p, int);
	print += ft_putnbr(i);
	x++;
	return (print);
}

int	ft_unsigned_decimal_base10(va_list p, int x, int print)
{
	unsigned int un_d;
	un_d = va_arg(p, unsigned int);
	print += ft_putnbr(un_d);
	x++;
	return (print);
}

int	ft_decimal_base10(va_list p, int x, int print)
{
	long d;
	d = va_arg(p, int);
	print += ft_putnbr(d);
	x++;
	return (print);
}
