/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:34:10 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/12 01:34:11 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int		lli;

	lli = n;
	if (lli < 0)
	{
		ft_putchar_fd('-', fd);
		lli = -lli;
	}
	if (lli > 9)
	{
		ft_putnbr_fd(lli / 10, fd);
		ft_putchar_fd((lli % 10) + '0', fd);
	}
	else
		ft_putchar_fd(lli + '0', fd);
}
