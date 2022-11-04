/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:23:36 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 22:23:37 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strchr(char *s, int c)
{
	int	x;

	x = 0;
	while (s[x])
	{
		if (s[x] == c)
			return (1);
		x++;
	}
	return (0);
}
