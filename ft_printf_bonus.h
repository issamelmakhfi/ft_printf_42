/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:25:55 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/06 16:49:56 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_bonus(char c, int *count);
void	ft_putnbr_bonus(int n, int *count);
void	ft_putstr_bonus(char *s, int *count);
void	ft_putnbrun_bonus(unsigned int n, int *count);
void	ft_get_hex_bonus(unsigned long nb, int *count);
void	ft_get_uphex_bonus(unsigned int nb, int *count);
void	ft_get_add_bonus(unsigned long p, int *count);
void	ft_detect1_bonus(va_list ptr, const char *str, int *count);
void	ft_detect2_bonus(va_list ptr, const char *str, int *count);
void	ft_detect3_bonus(va_list ptr, const char *str, int *count);
void	ft_flag1_bonus(va_list ptr, const char **str, int *count);
void	ft_sign_bonus(va_list ptr, const char **str, int *count);
void	ft_space_bonus(va_list ptr, const char **str, int *count);
void	ft_flags_bonus(va_list ptr, const char **str, int *count);

#endif