/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_uphex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:57:47 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/11/29 18:27:12 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_uphex(unsigned int nb, int *count)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_get_uphex(nb / 16, count);
		ft_get_uphex(nb % 16, count);
	}
	else
	{
		ft_putchar(base[nb], count);
	}
}
