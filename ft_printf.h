/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmakhf <ielmakhf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:16:01 by ielmakhf          #+#    #+#             */
/*   Updated: 2021/12/04 23:29:11 by ielmakhf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbrun(unsigned int n, int *count);
void	ft_get_hex(unsigned long nb, int *count);
void	ft_get_uphex(unsigned int nb, int *count);
void	ft_get_add(unsigned long p, int *count);
void	ft_detect1(va_list ptr, const char *str, int *count);
void	ft_detect2(va_list ptr, const char *str, int *count);
void	ft_detect3(va_list ptr, const char *str, int *count);

#endif
