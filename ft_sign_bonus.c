/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sign_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:54:39 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/06 15:38:16 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_sign_bonus(va_list ptr, const char **str, int *count)
{
	int	a;

	a = va_arg(ptr, int);
	while (*(*str) == '+')
		(*str)++;
	if ((*(*str) == 'd' || *(*str) == 'i') && a >= 0)
	{
		ft_putchar_bonus('+', count);
		ft_putnbr_bonus(a, count);
	}
	else
	{
		ft_putnbr_bonus(a, count);
	}
}
