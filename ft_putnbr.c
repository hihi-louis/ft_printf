/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trietpham <trietpham@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:51:00 by tripham           #+#    #+#             */
/*   Updated: 2025/02/09 12:28:09 by trietpham        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_putnbr(int n)
{
	int	len;
	int	temp;

	len = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		temp = write(1, "-", 1);
		if (temp == -1)
			return (-1);
		n = -n;
		len += temp;
	}
	if (n >= 10)
	{	
		temp = ft_putnbr(n / 10);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	if (ft_putchar(n % 10 + '0') == -1)
		return (-1);
	len++;
	return (len);
}
