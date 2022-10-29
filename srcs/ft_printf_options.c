/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_options.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <wbousfir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 03:05:34 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/30 00:11:46 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexa_upper(va_list p, int x)
{
	long	hexa_up;
	int print;

	print = 0;
	hexa_up = va_arg(p, long);
	print += ft_putstr(ft_itoa_base_upper(hexa_up, 16));
	x++;
	return (print);
}

int	ft_hexa_lower(va_list p, int x)
{
	long	hexa_low;
	int print;

	print = 0;
	hexa_low = va_arg(p, long);
	print += ft_putstr(ft_itoa_base_lower(hexa_low, 16));
	x++;
	return (print);
}

int	ft_string(va_list p, int x)
{
	char	*s;
	int print;

	print = 0;
	s = va_arg(p, char *);
	print += ft_putstr(s);
	x++;
	return (print);
}

int	ft_char(va_list p, int x)
{
	char	c;
	int print;

	print = 0;
	c = va_arg(p, int);
	print += ft_putchar(c);
	x++;
	return (print);
}

int	ft_point_in_hexa(va_list p, int x)
{
	unsigned long	a;
	int print;

	print = 0;
	a = va_arg(p, unsigned long);
	print += ft_putnbr_base(a, 16, print);
	//ft_putstr(ft_itoa_base_lower(a, 16));
	x++;
	return (print);
}
