/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:20:17 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/11 15:27:22 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		buffer;

	buffer = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			buffer += ft_formats(args, str, &i);
		}
		else
		{
			ft_putchar(str[i]);
			buffer++;
		}
		i++;
	}
	va_end(args);
	return (buffer);
}
