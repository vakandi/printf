/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:23:04 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 22:23:04 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *p, ...);
int	ft_putstr_fd(char *s, int print);
int	ft_putnbr_base(unsigned long base, unsigned long number, char c, int print);
int	ft_strchr(char *s, int c);
int	ft_putchar(char c, int print);
int	ft_helper(char c, va_list arg, int print);
int	ft_putnbr(int n, int print);
#endif
