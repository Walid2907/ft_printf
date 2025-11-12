/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:20:17 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/12 18:54:41 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

static void	ft_format(va_list *args,const char *str, int *count)
{
	if(str[*count] == 'c')
	{
		ft_print_char(va_arg(*args, int),count);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	count;

	count = 0;
	va_start(args, str);
	while (str[count])
	{
		if (str[count] == '%')
		{
			count++;
			ft_format(&args, str, &count);
		}
		ft_putchar(str[count]);
		count++;
	}
	va_end(args);
	return (count);
}
int main()
{
	ft_printf("walid %c bla\nd",'f');
}
