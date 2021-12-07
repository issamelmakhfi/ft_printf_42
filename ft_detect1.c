/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:38:02 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/04 22:59:56 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_detect1(va_list ptr, const char *str, int *count)
{
	if (*str == '%')
		ft_putchar('%', count);
	else if (*str == 'c')
		ft_putchar(va_arg(ptr, int), count);
	else if (*str == 's')
		ft_putstr(va_arg(ptr, char *), count);
}
