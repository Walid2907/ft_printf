/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:19:05 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/12 19:35:13 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>

int     ft_printf(const char *, ...);
int    ft_print_char(int c);
int ft_print_str(char *str,int *count);
size_t	ft_strlen(const char *str);
#endif
