/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:44:42 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/12 00:44:44 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	first_part;
	size_t	last_part;

	first_part = 0;
	last_part = ft_strlen(s1);
	while (s1[first_part] && is_in_set(s1[first_part], set))
		first_part++;
	while (last_part > first_part && is_in_set(s1[last_part - 1], set))
		last_part--;
	trimmed = malloc(sizeof(char) * (last_part - first_part + 1));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (first_part < last_part)
		trimmed[i++] = s1[first_part++];
	trimmed[i] = 0;
	return (trimmed);
}
