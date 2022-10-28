/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_options.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <wbousfir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 03:05:34 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/28 03:05:35 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexa_upper(va_list p, int x)
{
	long XX;
	XX = va_arg(p, long);
	ft_putnbr(XX);
	//ft_itoa_base(wail[x], "01");
	x++;
	return (0);
}

int	ft_hexa_lower(va_list p, int x)
{
	//ft_itoa_base(wail[x],"01");
	//x++;
	int hexa_low;
	hexa_low = va_arg(p, int);
	ft_putnbr(hexa_low);
	x++;
	return (0);
}
int	ft_string(va_list p, int x)
{
	char *s;
	s = va_arg(p, char *);
	ft_putstr(s);
	x++;
	return (0);
}

int	ft_char(va_list p, int x)
{
	char c;
c = va_arg(p, int);
ft_putchar(c);
x++;
	return (0);
}

int	ft_point_in_hexa(va_list p, int x)
{
	//void *point_hex;
	int point_hex;
	point_hex = va_arg(p, int);
	ft_putnbr(point_hex);
	x++;
	return (0);
}
