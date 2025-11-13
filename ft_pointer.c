/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:46:45 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/13 21:05:38 by wkerdad          ###   ########.fr       */
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
int ft_pointer(void *ptr)
{
    int count;
    unsigned long add;

    count = 0;
    add = (unsigned long )ptr;
    if(ptr == NULL)
        return(ft_print_str("(nil)"));
    else
    {
        ft_print_str("0X");
        count = ft_low_hexa(add) + 2;
    }
    return (count + count_hex_digits(add));
}