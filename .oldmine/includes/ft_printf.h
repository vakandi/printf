/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 04:05:28 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/30 01:07:59 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

char	*ft_itoa_base_upper(int nb, int base);
char	*ft_itoa_base_lower(int nb, int base);
char	*ft_itoa_base_void(int nb, int base);

char	*ft_fdp(int     base, char *b);
int		ft_size(int nb, int base);
char	*ft_strdup(char *str);
void	*ft_memset(void *b, int c, size_t len);

int		ft_abs(int nb);
void		ft_putnbr(int n, int *print);
void	ft_putstr(char const *s, int *print);
int		ft_strlen(const char *s);
void		ft_putchar(char c, int *print);

int		ft_printf(const char *wail, ...);

void	ft_check_other_string_and_char(const char *wail, va_list p, int x, int print);
void	ft_putnbr_base(int nbr, char *base, int *print);

void	ft_hexa_upper(va_list p, int x, int *print);
void	ft_hexa_lower(va_list p, int x, int *print);
void	ft_string(va_list p, int x, int *print);
void	ft_char(va_list p, int x, int *print);
void	ft_point_in_hexa(va_list p, int x, int *print);
void	ft_integer_base10(va_list p, int x, int *print);
void	ft_decimal_base10(va_list p, int x, int *print);
void	ft_unsigned_decimal_base10(va_list p, int x, int *print);

#endif

