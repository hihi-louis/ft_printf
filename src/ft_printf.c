/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:54:50 by tripham           #+#    #+#             */
/*   Updated: 2024/11/22 04:06:11 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	check_format(const char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (format == 'p')
		len += ft_putpointer((unsigned long long)va_arg(args, void *));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'x' || format == 'X')
		len += ft_puthex(va_arg(args, unsigned int), format);
	else if (format == 'u')
		len += ft_putui(va_arg(args, unsigned int));
	else if (format == '%')
		len += ft_putchar('%');
	else
	{
		ft_putstr("Error format\n");
		return (-1);
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		check_error;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			check_error = check_format(*format, args);
			if (check_error == -1)
			{
				va_end(args);
				return (-1);
			}
			len += check_error;
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
