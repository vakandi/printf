/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:22:57 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 22:22:58 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *p, ...)
{
	va_list	arg;
	int		print;
	int		x;

	print = 0;
	x = 0;
	va_start (arg, p);
	while (p[x])
	{
		if (p[x] == '%')
		{
			x++;
			if (p[x] == '%')
				print = ft_putchar('%', print);
			else
				print = ft_helper(p[x], arg, print);
		}
		else
			print = ft_putchar(p[x], print);
		x++;
	}
	return (print);
}
