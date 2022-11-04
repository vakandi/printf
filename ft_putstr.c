/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:23:31 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 22:23:31 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int print)
{
	int	x;

	x = 0;
	if (s == NULL)
		return (ft_putstr_fd("(null)", print));
	while (s[x])
	{
		print = ft_putchar(s[x], print);
		x++;
	}
	return (print);
}
