/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hex_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:27:44 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/04 22:27:28 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_get_hex_bonus(unsigned long nb, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_get_hex_bonus(nb / 16, count);
		ft_get_hex_bonus(nb % 16, count);
	}
	else
	{
		ft_putchar_bonus(base[nb], count);
	}
}
