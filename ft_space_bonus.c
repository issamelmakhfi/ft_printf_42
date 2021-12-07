/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 03:21:07 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/06 15:53:56 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_space_bonus(va_list ptr, const char **str, int *count)
{
	int	a;

	while (*(*str) == ' ')
		(*str)++;
	if (*(*str) == 'd' || *(*str) == 'i')
	{
		a = va_arg(ptr, int);
		if (a >= 0)
			ft_putchar_bonus(' ', count);
		ft_putnbr_bonus(a, count);
	}
	else if (*(*str) == 's')
		ft_putstr_bonus(va_arg(ptr, char *), count);
}
