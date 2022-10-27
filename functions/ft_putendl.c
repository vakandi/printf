/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:43:46 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/12 01:43:47 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char	new_line;

	new_line = '\n';
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
	write(1, &new_line, 1);
}
