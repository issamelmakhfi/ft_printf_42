/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect2_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:05:16 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/04 22:27:16 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_detect2_bonus(va_list ptr, const char *str, int *count)
{
	if (*str == 'd')
		ft_putnbr_bonus(va_arg(ptr, int), count);
	else if (*str == 'i')
		ft_putnbr_bonus(va_arg(ptr, int), count);
	else if (*str == 'u')
		ft_putnbrun_bonus(va_arg(ptr, unsigned int), count);
}
