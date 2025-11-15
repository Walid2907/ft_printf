/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:20:17 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/16 00:05:13 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, char c)
{
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_low_hexa(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_up_hexa(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ft_pointer(va_arg(args, void *)));
	else if (c == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	size_t	index;

	if (!str)
		return (-1);
	count = 0;
	index = 0;
	va_start(args, str);
	while (str[index])
	{
		if (str[index] == '%')
		{
			index++;
			if (str[index] == '\0')
				return (-1);
			count += ft_format(args, str[index]);
			index++;
		}
		if (str[index] != '\0' && str[index] != '%')
			count += ft_print_char(str[index++]);
	}
	va_end(args);
	return (count);
}	
