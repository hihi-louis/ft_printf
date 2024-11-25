/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:55:09 by tripham           #+#    #+#             */
/*   Updated: 2024/11/24 19:03:12 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define  FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_putpointer(unsigned long long p);
int	ft_puthex(unsigned long long n, const char type);
int	ft_putui(unsigned int n);
int	ft_printf(const char *format, ...);

#endif
