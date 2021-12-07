/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:05:16 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/01 03:41:38 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_detect2(va_list ptr, const char *str, int *count)
{
	if (*str == 'd')
		ft_putnbr(va_arg(ptr, int), count);
	else if (*str == 'i')
		ft_putnbr(va_arg(ptr, int), count);
	else if (*str == 'u')
		ft_putnbrun(va_arg(ptr, unsigned int), count);
}
