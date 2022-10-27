/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:43:05 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/12 02:17:38 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long long int		lli;

	lli = n;
	if (lli < 0)
	{
		ft_putchar('-');
		lli = -lli;
	}
	if (lli > 9)
	{
		ft_putnbr(lli / 10);
		ft_putchar((lli % 10) + '0');
	}
	else
		ft_putchar(lli + '0');
}
