/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 04:05:28 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/27 04:52:34 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

char	*ft_itoa_base(int value, int base);
int		ft_abs(int nb);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
size_t	ft_strlen(const char *s);
void	ft_putchar(char c);

int	ft_check_parameters2(const char *wail, va_list p, int x);
int	ft_check_parameters3(const char *wail, va_list p, int x);
int	ft_check_parameters4(const char *wail, va_list p, int x);
int	ft_check_parameters(const char *wail, int x, va_list p);
int	ft_printf(const char *wail, ...);

#endif

