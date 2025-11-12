/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:19:05 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/12 18:51:25 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>

void	ft_putchar(char c);
int     ft_printf(const char *, ...);
void    ft_print_char(int c,int *count);

#endif
