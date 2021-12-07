/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect3_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:08:53 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/04 22:27:19 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_detect3_bonus(va_list ptr, const char *str, int *count)
{
	if (*str == 'x')
		ft_get_hex_bonus(va_arg(ptr, unsigned int), count);
	else if (*str == 'X')
		ft_get_uphex_bonus(va_arg(ptr, unsigned long), count);
	else if (*str == 'p')
		ft_get_add_bonus(va_arg(ptr, unsigned long), count);
}
