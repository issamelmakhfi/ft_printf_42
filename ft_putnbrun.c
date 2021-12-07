/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrun.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:40:34 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/11/30 22:06:39 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrun(unsigned int n, int *count)
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
		ft_putnbrun(nb / 10, count);
	ft_putchar(nb % 10 + 48, count);
}
