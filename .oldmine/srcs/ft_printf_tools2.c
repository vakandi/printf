/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <wbousfir@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 04:26:45 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/29 02:02:26 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_strdup(char *str)
{
	char	*ret;
	int		i;

	i = 0;
	while (str[i])
		i++;
	if (!(ret = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	ret[i] = '\0';
	while (i > 0)
	{
		i--;
		ret[i] = str[i];
	}
	return (ret);
}

int	ft_size(int nb, int base)
{
	int	i;

	i = 0;
	if (nb < 0 && base == 10 && nb != -2147483648)
	{
		nb = -nb;
		i++;
	}
	while (nb != 0)
	{
		i++;
		nb /= base;
	}
	return (i);
}

char	*ft_fdp(int base, char *b)
{
	char	*ret;
	int		v;
	int		i;

	v = -2147483648;
	i = ft_size(-2147483648, base);
	if (!(ret = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	ret[i] = '\0';
	while (v != 0)
	{
		i--;
		ret[i] = b[(int)((-(long)v) % base)];
		v /= base;
	}
	return (ret);
}

char	*ft_itoa_base_upper(int nb, int base)
{
	int		i;
	char	*ret;
	char	*b;

	b = "0123456789ABCDEF";
	if (nb == -2147483648 && base == 10)
		return (ft_strdup("-2147483648"));
	if (nb == -2147483648)
		return (ft_fdp(base, b));
	if (nb == 0)
		return (ft_strdup("0"));
	i = ft_size(nb, base);
	if (!(ret = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	ret[i] = '\0';
	if (nb < 0 && base == 10)
		ret[0] = '-';
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		i--;
		ret[i] = b[nb % base];
		nb /= base;
	}
	return (ret);
}

char	*ft_itoa_base_lower(int nb, int base)
{
	int		i;
	char	*ret;
	char	*b;

	b = "0123456789abcdef";
	if (nb == -2147483648 && base == 10)
		return (ft_strdup("-2147483648"));
	if (nb == -2147483648)
		return (ft_fdp(base, b));
	if (nb == 0)
		return (ft_strdup("0"));
	i = ft_size(nb, base);
	if (!(ret = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	ret[i] = '\0';
	if (nb < 0 && base == 10)
		ret[0] = '-';
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		i--;
		ret[i] = b[nb % base];
		nb /= base;
	}
	return (ret);
}

char	*ft_itoa_base_void(int nb, int base)
{
	int		i;
	char	*ret;
	char	*b;

	b = "0123456789abcdef";
	if (nb == -2147483648 && base == 10)
		return (ft_strdup("-2147483648"));
	if (nb == -2147483648)
		return (ft_fdp(base, b));
	if (nb == 0)
		return (ft_strdup("0"));
	i = ft_size(nb, base);
	if (!(ret = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	ret[i] = '\0';
	if (nb < 0 && base == 10)
		ret[0] = '-';
	if (nb < 0)
		nb = -nb;
	while (nb != 0)
	{
		i--;
		ret[i] = b[nb % base];
		nb /= base;
	}
	return (ret);
}
