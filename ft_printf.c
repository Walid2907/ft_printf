/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:20:17 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/12 19:35:38 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

static int	ft_format(va_list *args,const char *str, int *count)
{
	if(str[*count] == 'c')
		return(va_arg(*args, int));
	if(str[*count] == 's')
		return(va_arg(*args, char *),count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	count;
	size_t index;

	count = 0;
	index = 0;
	va_start(args, str);
	while (str[index])
	{
		if (str[index] == '%')
		{
			index++;
			count++;
			count += ft_format(&args, str, &count);
		}
		ft_print_char(str[index]);
		{
			index++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
int main()
{
	ft_printf("walid %c bla\nd %s hcdioahvnd",'f',"bamos");
}
