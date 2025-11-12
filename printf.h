/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:19:05 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/11 11:35:09 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include<stdlib.h>
#include<stdarg.h>

void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int	ft_printf(const char *, ...);
#endif
