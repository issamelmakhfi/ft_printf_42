/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect1_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:38:02 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/04 22:27:10 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_detect1_bonus(va_list ptr, const char *str, int *count)
{
	if (*str == '%')
		ft_putchar_bonus('%', count);
	else if (*str == 'c')
		ft_putchar_bonus(va_arg(ptr, int), count);
	else if (*str == 's')
		ft_putstr_bonus(va_arg(ptr, char *), count);
}
