/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <wbousfir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 02:00:00 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/28 05:09:56 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_check_other_string_and_char(const char *wail, va_list p, int x)
{
	if (wail[x] == '%' && wail[x + 1] == 'd')
		ft_decimal_base10(p, x);
	else if (wail[x] == '%' && wail[x + 1] == 'u')
		ft_hexa_upper(p, x);
	else if (wail[x] == '%' && wail[x + 1] == '%')
		ft_putchar('%');
	else if (wail[x] == '%' && wail[x + 1] == 's')
		ft_string(p, x);
	else if (wail[x] == '%' && wail[x + 1] == 'c')
		ft_char(p, x);	
	else
	{
		if (x == 0)
			ft_putchar(wail[x]);
		if (wail[x + 1] != '%')
			ft_putchar(wail[x + 1]);
	}
	return (0);
}

int	ft_printf(const char *wail, ...)
{
	va_list		p;
	int		x;

	va_start(p, wail);
	x = 0;
	while (wail[x])
	{
		if (wail[x] == '%' && wail[x + 1] == 'X')
			ft_hexa_upper(p, x);
		else if (wail[x] == '%' && wail[x + 1] == 'x')
			ft_hexa_lower(p, x);
		else if (wail[x] == '%' && wail[x + 1] == 'p')
			ft_point_in_hexa(p, x);
		else if (wail[x] == '%' && wail[x + 1] == 'i')
			ft_integer_base10(p, x);
		else
			ft_check_other_string_and_char(wail, p, x);
		x++;
	}
	va_end(p);
	return (0);
}
/*
int main()
{
	char s[] = "THIS IS WORKING IF :";
//	ft_printf("%s char: %c FIRST INT %i\n%i\n%i\n%p\n %c:i:d:u:p:x:X:%%:\n%c%c%c\nTHE END OF THE STRING", s, 'C', 6767, 50, 55, 55, '\n', '\n', '\n', '\n');
//	ft_printf("%sHEHEOHO", s);
//	ft_printf("12345 %s", s);
	//printf("REAL PRINTF ::\n%s %u %d END", s, 6767, 50);
	return 0;
}
*/

