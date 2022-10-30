/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_options.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <wbousfir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 03:05:34 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/30 01:03:24 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_hexa_upper(va_list p, int x, int *print)
{
	long	hexa_up;

	print = 0;
	hexa_up = va_arg(p, long);
	ft_putstr(ft_itoa_base_upper(hexa_up, 16, print), print);
	x++;
}

void	ft_hexa_lower(va_list p, int x, int *print)
{
	long	hexa_low;

	hexa_low = va_arg(p, long);
	ft_putstr(ft_itoa_base_lower(hexa_low, 16, print), print);
	x++;
}

void	ft_string(va_list p, int x, int *print)
{
	char	*s;

	s = va_arg(p, char *);
	ft_putstr(s, print);
	x++;
}

void	ft_char(va_list p, int x, int *print)
{
	char	c;

	c = va_arg(p, int);
	ft_putchar(c, print);
	x++;
}

void	ft_point_in_hexa(va_list p, int x, int *print)
{
	unsigned long	a;
	a = va_arg(p, unsigned long);
	ft_putnbr_base(a, 16, print);
	//ft_putstr(ft_itoa_base_lower(a, 16));
	x++;
}
