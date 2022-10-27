/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 04:35:36 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/27 05:21:36 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_parameters(const char *wail, int x, va_list p)
{
	char	*s;
	int		d;

	while (wail[x])
	{
		if (wail[x] == '%' && wail[x + 1] == 's')
		{
			s = va_arg(p, char *);
			ft_putstr(s);
			x++;
		}
		else if (wail[x] == '%' && wail[x + 1] == 'd')
		{
			d = va_arg(p, int);
			ft_putnbr(d);
			x++;
		}
		ft_check_parameters2(wail, p, x++);
	}
	return (0);
}

int	ft_check_parameters2(const char *wail, va_list p, int x)
{
	unsigned long	u;
	unsigned long	pvoid;
	char			c;

	if (wail[x] == '%' && wail[x + 1] == 'u')
	{
		u = va_arg(p, unsigned int);
		ft_putnbr(u);
		x++;
	}
	else if (wail[x] == '%' && wail[x + 1] == 'p')
	{
		pvoid = va_arg(p, unsigned long);
		ft_putnbr(pvoid);
		x++;
	}
	else if (wail[x] == '%' && wail[x + 1] == 'c')
	{
		c = va_arg(p, int);
		ft_putchar(c);
		x++;
	}
	ft_check_parameters3(wail, p, x);
	return (0);
}

int	ft_check_parameters3(const char *wail, va_list p, int j)
{
	int		i;
	long	x;

	if (wail[j] == '%' && wail[j + 1] == 'i')
	{
		i = va_arg(p, int);
		ft_putnbr(i);
		j++;
	}
	else if (wail[j] == '%' && wail[j + 1] == 'x')
	{
		//	i = va_arg(p, int);
		ft_putnbr(i);
		j++;
	}
	ft_check_parameters4(wail, p, x);
	return (0);
}

int	ft_check_parameters4(const char *wail, va_list p, int x)
{	
	char	other;
	long	X;
	if (wail[x] == '%' && wail[x + 1] == 'X')
	{
		X = va_arg(p, int);
		ft_putnbr(X);
		x++;
	}
	else
	{
		x++;
		other = wail[x];
		if (wail[x] != '%')
			ft_putchar(other);
	}
	return (0);
}
/*
int	ft_printf(const char *wail, ...)
{
	va_list	p;
	int		x;

	va_start(p, wail);
	x = 0;
	ft_check_parameters(wail, x, p);
	va_end(p);
	return (0);
}*/

int	ft_printf(const char *wail, ...)
{
	va_list	p;
	int		x;

	va_start(p, wail);
	x = 0;
	while (wail[x])
	{
		if (wail[x] == '%' && wail[x + 1] == 'X')
			ft_hexa_upper(wail, p, x);
		if (wail[x] == '%' && wail[x + 1] == 'x')
			ft_hexa_lower(wail, p, x);
		if (wail[x] == '%' && wail[x + 1] == 's')
			ft_string(wail, p, x);
		if (wail[x] == '%' && wail[x + 1] == 'c')
			ft_char(wail, p, x);
		if (wail[x] == '%' && wail[x + 1] == 'p')
			ft_point_in_hexa(wail, p, x);
		if (wail[x] == '%' && wail[x + 1] == 'i')
			ft_integer_base10(wail, p, x);
		if (wail[x] == '%' && wail[x + 1] == 'd')
			ft_decimal_base10(wail, p, x);
		if (wail[x] == '%' && wail[x + 1] == 'u')
			ft_hexa_upper(wail, p, x);
		x++;
	}
	va_end(p);
	return (0);

}

int main()
{
	char s[] = "THIS IS WORKING IF :";
	//printf("%sklhkljlkj%c", "hello", 'W');
	//	ft_printf("%s%c STRING %u%c STRING %c STRING %p%c STRING %i%c STRING %d%cEND", s, 6767, '\n', 50, 65, 78);
	ft_printf("%s %u %p END", s, 6767, 50);
	ft_printf("%s", "\n\n REAL PRINTF: \n\n");
	printf("%s %u %d END", s, 6767, 50);
	return 0;
}
