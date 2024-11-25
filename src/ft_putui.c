/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:55:05 by tripham           #+#    #+#             */
/*   Updated: 2024/11/24 18:45:47 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putui(unsigned int n)
{
	int	len;
	int	temp;

	len = 0;
	if (n >= 10)
	{
		temp = ft_putui(n / 10);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	temp = ft_putchar(n % 10 + '0');
	if (temp == -1)
		return (-1);
	len += temp;
	return (len);
}
