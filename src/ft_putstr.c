/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:55:01 by tripham           #+#    #+#             */
/*   Updated: 2024/11/24 18:45:06 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
