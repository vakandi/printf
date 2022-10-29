/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 04:05:28 by wbousfir          #+#    #+#             */
/*   Updated: 2022/10/29 02:15:54 by wbousfir         ###   ########.fr       */
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
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
size_t	ft_strlen(const char *s);
void	ft_putchar(char c);
int		ft_printf(const char *wail, ...);
int		ft_check_other_string_and_char(const char *wail, va_list p, int x);
int		ft_hexa_upper(va_list p, int x);
int		ft_hexa_lower(va_list p, int x);
int		ft_string(va_list p, int x);
int		ft_char(va_list p, int x);
int		ft_point_in_hexa(va_list p, int x);
int		ft_integer_base10(va_list p, int x);
int		ft_decimal_base10(va_list p, int x);
int		ft_unsigned_decimal_base10(va_list p, int x);

#endif

