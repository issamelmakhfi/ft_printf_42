/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:15:40 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/04 22:54:25 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		count;

	count = 0;
	va_start(ptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%' || *str == 'c' || *str == 's')
				ft_detect1(ptr, str, &count);
			else if (*str == 'd' || *str == 'i' || *str == 'u')
				ft_detect2(ptr, str, &count);
			else if (*str == 'x' || *str == 'p' || *str == 'X')
				ft_detect3(ptr, str, &count);
		}
		else
			ft_putchar(*str, &count);
		str++;
	}
	va_end(ptr);
	return (count);
}
