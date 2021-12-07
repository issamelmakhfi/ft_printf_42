/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:51:59 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/04 22:27:51 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_putstr_bonus(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		*count += write(1, "(null)", 6);
		return ;
	}
	while (s[i] != '\0' )
	{
		ft_putchar_bonus(s[i], count);
		i++;
	}
}
