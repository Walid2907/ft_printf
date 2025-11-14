/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:30:23 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/14 17:20:51 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = count_digits(n);
	if (nb < 0)
	{
		write(1, "-", 1);
		count++;
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr((nb / 10));
	ft_print_char((nb % 10 + '0'));
	return (count);
}
