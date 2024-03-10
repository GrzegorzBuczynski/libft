/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:36:59 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:05:27 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char	*ptr_dst;
    unsigned char	*ptr_src;

    ptr_dst = (unsigned char *)dst;
    ptr_src = (unsigned char *)src;
    if (ptr_dst < ptr_src)
    {
        while (len--)
            *ptr_dst++ = *ptr_src++;
    }
    else
    {
        ptr_dst += len;
        ptr_src += len;
        while (len--)
            *--ptr_dst = *--ptr_src;
    }
    return (dst);
}

/* int	main(void)
{
    char	str1[50] = "Hello, World!";
    char	str2[50] = "Hello, World!";

    write(1, "Before memmove: ", 16);
    write(1, str1, sizeof(str1));
    write(1, "\n", 1);
    ft_memmove(str1 + 7, str1, 13);
    write(1, "After memmove: ", 15);
    write(1, str1, sizeof(str1));
    write(1, "\n", 1);
    write(1, "Before memmove: ", 16);
    write(1, str2, sizeof(str2));
    write(1, "\n", 1);
    memmove(str2 + 7, str2, 13);
    write(1, "After memmove: ", 15);
    write(1, str2, sizeof(str2));
    write(1, "\n", 1);
    return (0);
} */
