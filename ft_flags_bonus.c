/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:46:17 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/06 15:53:42 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_flags_bonus(va_list ptr, const char **str, int *count)
{
	if (*(*str) == ' ')
		ft_space_bonus(ptr, str, count);
	else if (*(*str) == '+')
		ft_sign_bonus(ptr, str, count);
	else if (*(*str) == '#')
		ft_flag1_bonus(ptr, str, count);
}
