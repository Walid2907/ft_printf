/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:19:05 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/14 03:18:46 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include<stdarg.h>
#include<unistd.h>

int     ft_printf(const char *, ...);
int    ft_print_char(char c);
int ft_print_str(char *str);
size_t	ft_strlen(const char *str);
int     ft_putnbr(int n);
int     ft_putnbr_unsigned(unsigned int n);
int     ft_low_hexa(unsigned long n);
int     ft_up_hexa(unsigned long n);
int ft_pointer(void *ptr);
#endif
