/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:30:23 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/13 17:31:45 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

static int count_digits(int n)
{
    int count = 0;

    if (n == 0)
        return 1; // 0 has 1 digit

    if (n < 0)
        n = -n; 

    while (n != 0)
    {
        n /= 10;
        count++;
    }

    return count;
}

int     ft_putnbr(int n)
{
    int count = count_digits(n);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 11);
			return (11);
		}
		else
		{
			write(1, "-", 1);
            count++;
			n = -n;
		}
	}
	if (n >= 10)
		ft_putnbr((n / 10));
	ft_print_char((n % 10 + '0'));
    return (count);
}