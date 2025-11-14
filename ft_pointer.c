/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:46:45 by wkerdad           #+#    #+#             */
/*   Updated: 2025/11/14 02:51:03 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int ft_pointer(void *ptr)
{
    int count;
    unsigned long add;

    count = 0;
    add = (unsigned long)ptr;
    if(ptr == NULL)
        return(ft_print_str("(nil)"));
    else
    {
        ft_print_str("0x");
        count = ft_low_hexa(add) + 2;
    }
    return (count);
}