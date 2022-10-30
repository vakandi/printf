/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <wbousfir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 02:00:00 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/30 00:39:41 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_check_other_string_and_char(const char *wail, va_list p, int x, int *print)
{
	if (wail[x] == '%' && wail[x + 1] == 'd')
		ft_decimal_base10(p, x, &print);
	else if (wail[x] == '%' && wail[x + 1] == 'u')
		ft_unsigned_decimal_base10(p, x, &print);
	else if (wail[x] == '%' && wail[x + 1] == '%')
		ft_putchar('%', &print);
	else if (wail[x] == '%' && wail[x + 1] == 's')
		ft_string(p, x, &print);
	else if (wail[x] == '%' && wail[x + 1] == 'c')
		ft_char(p, x, &print);
	else
	{
		if (x == 0)
			ft_putchar(wail[x], &print);
		if (wail[x + 1] != '%))
			ft_putchar(wail[x + 1], &print);
	}
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
			ft_hexa_upper(p, x, &print);
		else if (wail[x] == '%' && wail[x + 1] == 'x')
			ft_hexa_lower(p, x);
		else if (wail[x] == '%' && wail[x + 1] == 'p')
			ft_point_in_hexa(p, x, &print);
		else if (wail[x] == '%' && wail[x + 1] == 'i')
			ft_integer_base10(p, x , &print);
		else
			ft_check_other_string_and_char(wail, p, x, print);
		x++;
	}
	va_end(p);
	ft_putchar('\n', &print);
	ft_putnbr(print, &print);
	return print;
}

int	main(void)
{
	//char s[] = "THIS IS WORKING IF :";
	//int a = 96969696;
	//void *p = &a;
	
	printf("12345%c", 'C');
	ft_printf("\n1234%%  5%c", 'C');
	return (0);
}
