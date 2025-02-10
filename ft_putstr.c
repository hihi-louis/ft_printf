/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trietpham <trietpham@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:55:01 by tripham           #+#    #+#             */
/*   Updated: 2025/02/09 12:28:09 by trietpham        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_putstr(char *str)
{
	int	len;
	int	temp;

	len = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
	{
		temp = write(1, str++, 1);
		if (temp == -1)
			return (-1);
		len += temp;
	}
	return (len);
}
