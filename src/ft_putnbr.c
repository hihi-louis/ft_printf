/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:51:00 by tripham           #+#    #+#             */
/*   Updated: 2024/11/19 22:03:54 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	else
		return (1);
}

int	ft_putnbr(int n)
{
	int	len;
	long	nbr;

	len = 0;
	nbr = (long)n;
	if (nbr < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		len ++;
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		len += ft_putnbr(nbr / 10);
		len += ft_putnbr(nbr % 10);
	}
	else
		len += ft_putchar(nbr + '0');
	return (len);
}

int main()
{
	int length = ft_putnbr(2147483647);
	printf("\nLength: %d\n", length); 
	return 0;
}