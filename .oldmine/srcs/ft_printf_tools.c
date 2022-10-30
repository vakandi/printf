/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 04:05:02 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/30 01:48:51 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putchar(char c, int *print)
{
	print++;
	write(1, &c, 1);
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

int	ft_putstr(char const *s, int *print)
{
	if (s == NULL)
		return print += write(1, "null", 4);
	ft_putchar(s, print);
	return (ft_strlen(s));
}

void	ft_putnbr(int n, int *print)
{
	if (n < 0)
	{
		ft_putchar('-', print);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, print);
		ft_putnbr(n % 10, print);
	}
	else
		ft_putchar(n + '0', print);
}
