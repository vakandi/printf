/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:23:42 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 22:23:43 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_helper(char c, va_list arg, int print)
{
	if (c == 'd' || c == 'i')
		print = ft_putnbr(va_arg(arg, int), print);
	else if (c == 'p')
	{
		write(1, "0x", 2);
		print = print + 2;
		print = ft_putnbr_base(16, va_arg(arg, unsigned long), c, print);
	}
	else if (c == 'u')
		print = ft_putnbr_base(10, va_arg(arg, unsigned int), c, print);
	else if (c == 'x' || c == 'X')
		print = ft_putnbr_base(16, va_arg(arg, unsigned int), c, print);
	else if (c == 's')
		print = ft_putstr_fd(va_arg(arg, char *), print);
	else if (c == 'c')
		print = ft_putchar(va_arg(arg, int), print);
	return (print);
}
