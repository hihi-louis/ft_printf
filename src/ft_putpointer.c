/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:54:56 by tripham           #+#    #+#             */
/*   Updated: 2024/11/24 19:21:10 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putpointer(unsigned long long p)
{
	int	len;
	int	temp;

	len = 0;
	if (p == 0)
		return (write(1, "(nil)", 5));
	temp = write(1, "0x", 2);
	if (temp == -1)
		return (-1);
	len += temp;
	temp = ft_puthex(p, 'x');
	if (temp == -1)
		return (-1);
	len += temp;
	return (len);
}
