/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:08:53 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/01 03:40:51 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_detect3(va_list ptr, const char *str, int *count)
{
	if (*str == 'x')
		ft_get_hex(va_arg(ptr, unsigned int), count);
	else if (*str == 'X')
		ft_get_uphex(va_arg(ptr, unsigned long), count);
	else if (*str == 'p')
		ft_get_add(va_arg(ptr, unsigned long), count);
}
