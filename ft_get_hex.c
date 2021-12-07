/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:27:44 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/11/29 18:27:16 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_hex(unsigned long nb, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_get_hex(nb / 16, count);
		ft_get_hex(nb % 16, count);
	}
	else
	{
		ft_putchar(base[nb], count);
	}
}
