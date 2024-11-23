/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:55:05 by tripham           #+#    #+#             */
/*   Updated: 2024/11/22 04:13:44 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putui(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_putui(n / 10);
	}
	len += ft_putchar(n % 10 + '0');
	return (len);
}
