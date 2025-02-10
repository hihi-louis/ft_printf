/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trietpham <trietpham@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:55:05 by tripham           #+#    #+#             */
/*   Updated: 2025/02/09 12:27:33 by trietpham        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
