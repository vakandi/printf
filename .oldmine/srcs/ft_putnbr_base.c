/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 10:49:14 by ybayart           #+#    #+#             */
/*   Updated: 2022/10/30 01:01:58 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_erreur(char *base, int *erreur)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*erreur = 1;
	while (base[i] && *erreur == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*erreur = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
				|| base[i] == '/' || base[i] == '*' || base[i] == '='
				|| base[i] == ',' || base[i] == '.'
				|| base[i] < 33 || base[i] > 126)
			*erreur = 1;
		else
			i++;
	}
}

void		ft_putnbr_base(int nbr, char *base, int *print)
{	
	int		lbase;
	int		erreur;
	long	nb;

	lbase = 0;
	erreur = 0;
	ft_erreur(base, &erreur);
	nb = nbr;
	if (erreur == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-', print);
			nb *= -1;
		}
		while (base[lbase])
			lbase++;
		if (nb < lbase)
			ft_putchar(base[nb], print);
		if (nb >= lbase)
		{
			ft_putnbr_base(nb / lbase, base, print);
			ft_putnbr_base(nb % lbase, base, print);
		}
	}
}
