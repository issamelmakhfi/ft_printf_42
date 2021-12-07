/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 22:01:14 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/11/29 18:27:18 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_add(unsigned long p, int *count)
{
	ft_putstr("0x", count);
	ft_get_hex(p, count);
}
