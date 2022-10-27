/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:15:32 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/12 19:57:42 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *search, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (src == NULL || len == 0)
		return (0);
	if (search[i] == '\0')
		return ((char *)src);
	while (src[i] && j < len)
	{
		while (src[i] == search[i] && j < len)
		{
			i++;
			j++;
			if (search[i] == '\0')
				return ((char *)src);
		}
		src++;
		i = 0;
		j++;
	}
	return (0);
}
