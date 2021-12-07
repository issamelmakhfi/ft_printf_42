/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrun_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:40:34 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/04 22:27:48 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_putnbrun_bonus(unsigned int n, int *count)
{
	unsigned int	nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar_bonus('-', count);
	}
	else
	{
		nb = n;
	}
	if (nb > 9)
		ft_putnbrun_bonus(nb / 10, count);
	ft_putchar_bonus(nb % 10 + 48, count);
}
