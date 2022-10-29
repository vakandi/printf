/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 04:05:02 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/30 00:17:11 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putchar(char c)
{
	int print;

	print = 0;
	print += write(1, &c, 1);
	return (print);
}

int	ft_abs(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

int	ft_strlen(const char *s)
{
	unsigned int	size;

	size = 0;
	if (s == NULL)
		return (0);
	while (s[size])
		size++;
	return (size);
}

int	ft_putstr(char const *s)
{
	if (s == NULL)
		return ;
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_putnbr(int n)
{
	int print;

	print = 0;
	if (n < 0)
	{
		print += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print += ft_putnbr(n / 10);
		print += ft_putnbr(n % 10);
	}
	else
		print += ft_putchar(n + '0');
	return (print);
}
