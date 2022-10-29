/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_options.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <wbousfir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 03:05:34 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/29 02:55:09 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexa_upper(va_list p, int x)
{
	long	hexa_up;
	hexa_up = va_arg(p, long);
	ft_putstr(ft_itoa_base_upper(hexa_up, 16));
	x++;
	return (0);
}

int	ft_hexa_lower(va_list p, int x)
{
	long	hexa_low;
	hexa_low = va_arg(p, long);
	ft_putstr(ft_itoa_base_lower(hexa_low, 16));
	x++;
	return (0);
}

int	ft_string(va_list p, int x)
{
	char	*s;
	s = va_arg(p, char *);
	ft_putstr(s);
	x++;
	return (0);
}

int	ft_char(va_list p, int x)
{
	char	c;
	c = va_arg(p, int);
	ft_putchar(c);
	x++;
	return (0);
}

int	ft_point_in_hexa(va_list p, int x)
{
	unsigned long a;
	a = va_arg(p, unsigned long);
	ft_putstr(ft_itoa_base_lower(a, 16));
	x++;
	return (0);
}
