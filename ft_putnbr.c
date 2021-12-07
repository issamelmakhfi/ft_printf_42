/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 01:29:29 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/06 16:41:45 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	unsigned int	nb;

	if (n < 0)
	{
		nb = -n;
		ft_putchar('-', count);
	}
	else
	{
		nb = n;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, count);
	ft_putchar(nb % 10 + 48, count);
}
