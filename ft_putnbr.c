/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:23:20 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 22:24:27 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int print)
{
	if (n == -2147483648)
		print = ft_putstr_fd("-2147483648", print);
	else
	{
		if (n < 0)
		{
			print = ft_putchar('-', print);
			n = n * -1;
		}
		if (n > 9)
		{
			print = ft_putnbr(n / 10, print);
		}
		print = ft_putchar((n % 10) + '0', print);
	}
	return (print);
}
/*
#include <limits.h>

int main(void)
{
	printf("\n%d",ft_putnbr(INT_MIN + 1, 0));
	return 0;
}*/
