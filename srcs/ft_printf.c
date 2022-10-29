/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <wbousfir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 02:00:00 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/29 23:51:34 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_check_other_string_and_char(const char *wail, va_list p, int x, int print)
{
	if (wail[x] == '%' && wail[x + 1] == 'd')
		print += ft_decimal_base10(p, x);
	else if (wail[x] == '%' && wail[x + 1] == 'u')
		print += ft_unsigned_decimal_base10(p, x);
	else if (wail[x] == '%' && wail[x + 1] == '%')
		print += ft_putchar('%');
	else if (wail[x] == '%' && wail[x + 1] == 's')
		print += ft_string(p, x);
	else if (wail[x] == '%' && wail[x + 1] == 'c')
		print += ft_char(p, x);
	else
	{
		if (x == 0)
			print += ft_putchar(wail[x]);
		if (wail[x + 1] != '%')i
			print += ft_putchar(wail[x + 1]);
	}
	return (print);
}

int	ft_printf(const char *wail, ...)
{
	va_list	p;
	int		x;
	unsigned int print;

	va_start(p, wail);
	x = 0;
	while (wail[x])
	{
		if (wail[x] == '%' && wail[x + 1] == 'X')
			print += ft_hexa_upper(p, x);
		else if (wail[x] == '%' && wail[x + 1] == 'x')
			print += ft_hexa_lower(p, x);
		else if (wail[x] == '%' && wail[x + 1] == 'p')
			print +=ft_point_in_hexa(p, x);
		else if (wail[x] == '%' && wail[x + 1] == 'i')
			print += ft_integer_base10(p, x);
		else
			ft_check_other_string_and_char(wail, p, x, print);
		x++;
	}
	va_end(p);
	ft_putchar('\n');
	ft_putnbr(print);
	return (print);
}

int	main(void)
{
	//char s[] = "THIS IS WORKING IF :";
	//int a = 96969696;
	//void *p = &a;
	
	printf("12345%c", 'C');
	ft_printf("\n12345%c", 'C');
	return (0);
}
