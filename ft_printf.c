/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:20:17 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/13 21:33:13 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

static int	ft_format(va_list args,char c)
{
	if(c == 'c')
		return(ft_print_char(va_arg(args,int)));
	else if(c == 's')
		return(ft_print_str(va_arg(args, char *)));
	else if(c == 'd' || c == 'i')
		return(ft_putnbr(va_arg(args, int)));
	else if(c == 'u')
		return(ft_putnbr_unsigned(va_arg(args, int)));
	else if(c == 'x')
		return(ft_low_hexa(va_arg(args, int)));
	else if(c == 'X')
		return(ft_up_hexa(va_arg(args, int)));
	else if(c == 'p')
		return(ft_pointer(va_arg(args, void *)));
	else if(c == '%')
	{
		ft_print_char('%');
		return(1);
	}
	return (0);
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
			count += ft_format(args, str[index]);
			index++;
		}
		else
		{
			count += ft_print_char(str[index]);
			index++;
		}
	}
	va_end(args);
	return (count);
}
// #include <stdio.h>
// #include<limits.h>
// int main(void)
// {
//     int     ret1, ret2;
//     char    *str = "Hello";
//     void    *ptr = str;

//     // ---------- %c ----------
//     ret1 = ft_printf("printf: Char: %c\n", 'A');
//     ret2 = printf("printf: Char: %c\n", 'A');
//     printf("Return => mine: %d | real: %d\n\n", ret1, ret2);

//     // ---------- %s ----------
//     ret1 = ft_printf("walid %s\n", str);
//     ret2 = printf("walid %s\n", str);
//     printf("Return => mine: %d | real: %d\n", ret1, ret2);

//     // ---------- %p ----------
//     ret1 = ft_printf("printf: Pointer: %p\n", ptr);
//     ret2 = printf("printf: Pointer: %p\n", ptr);
//     printf("Return => mine: %d | real: %d\n\n", ret1, ret2);

//     // ---------- %d / %i ----------
//     ret1 = ft_printf("printf: Decimal: %d | Int: %i\n", 42, -42);
//     ret2 = printf("printf: Decimal: %d | Int: %i\n", 42, -42);
//     printf("Return => mine: %d | real: %d\n\n", ret1, ret2);

//     // ---------- %u ----------
//     ret1 = ft_printf("printf: Unsigned: %u\n", 4294967295u);
//     ret2 = printf("printf: Unsigned: %u\n", 4294967295u);
//     printf("Return => mine: %d | real: %d\n\n", ret1, ret2);

//     // ---------- %x / %X ----------
//     ret1 = ft_printf("printf: Hex lower: %x | Hex upper: %X\n", 255, 255);
//     ret2 = printf("printf: Hex lower: %x | Hex upper: %X\n\n", 255, 255);
//     printf("Return => mine: %d | real: %d\n\n", ret1, ret2);

//     // ---------- %% ----------
//     ret1 = ft_printf("printf: Percent: %%\n");
//     ret2 = printf("printf: Percent: %%\n");
//     printf("Return => mine: %d | real: %d\n\n", ret1, ret2);

//     // ---------- Edge cases ----------
//     ret1 = ft_printf("printf: NULL string: %p | NULL pointer: %p\n", NULL, NULL);
//     ret2 = printf("printf: NULL string: %p | NULL pointer: %p\n\n", NULL, NULL);
//     printf("Return => mine: %d | real: %d\n\n", ret1, ret2);

//     ret1 = ft_printf("printf: INT_MIN: %d | INT_MAX: %d\n", INT_MIN, INT_MAX);
//     ret2 = printf("printf: INT_MIN: %d | INT_MAX: %d\n\n", INT_MIN, INT_MAX);
//     printf("Return => mine: %d | real: %d\n\n", ret1, ret2);

//     return (0);
// }

