/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_add_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:01:14 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/04 22:59:16 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_get_add_bonus(unsigned long p, int *count)
{
	ft_putstr_bonus("0x", count);
	ft_get_hex_bonus(p, count);
}
