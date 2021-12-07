/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag1_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:25:32 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/06 15:42:02 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_flag1_bonus(va_list ptr, const char **str, int *count)
{
	unsigned int	a;

	a = va_arg(ptr, unsigned int);
	while (*(*str) == '#')
		(*str)++;
	if (*(*str) == 'x' && a == 0)
		ft_get_hex_bonus(a, count);
	else if (*(*str) == 'X' && a == 0)
		ft_get_uphex_bonus(a, count);
	else if (*(*str) == 'x')
	{
		ft_putstr_bonus("0x", count);
		ft_get_hex_bonus(a, count);
	}
	else if (*(*str) == 'X')
	{
		ft_putstr_bonus("0X", count);
		ft_get_uphex_bonus(a, count);
	}
}
