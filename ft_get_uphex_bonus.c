/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_uphex_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:57:47 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/04 22:27:30 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_get_uphex_bonus(unsigned int nb, int *count)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_get_uphex_bonus(nb / 16, count);
		ft_get_uphex_bonus(nb % 16, count);
	}
	else
	{
		ft_putchar_bonus(base[nb], count);
	}
}
