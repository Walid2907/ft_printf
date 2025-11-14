/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:02:45 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/14 02:23:52 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int count_digits(unsigned int n)
{
    int count = 0;

    if (n == 0)
        return 1; 

    while (n != 0)
    {
        n /= 10;
        count++;
    }

    return count;
}

int     ft_putnbr_unsigned(unsigned int n)
{
    int count = count_digits(n);
	if (n >= 10)
		ft_putnbr_unsigned((n / 10));
	ft_print_char((n % 10 + '0'));
    return (count);
}