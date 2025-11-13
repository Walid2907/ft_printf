/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_low_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:33:47 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/13 21:01:57 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

static int count_hex_digits(unsigned long n)
{
    int count = 0;

    if (n == 0)
        return 1;

    while (n != 0)
    {
        n /= 16;
        count++;
    }
    return count;
}
int     ft_low_hexa(unsigned long n)
{
    char *table = "0123456789abcdef";
    int count = count_hex_digits(n);
	if (n >= 16)
		ft_low_hexa((n / 16));
	ft_print_char(table[(n % 16)]);
    return (count);
}