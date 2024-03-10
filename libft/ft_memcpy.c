/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:19:22 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:05:21 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char	*ptr_dst;
    unsigned char	*ptr_src;

    ptr_dst = (unsigned char *)dst;
    ptr_src = (unsigned char *)src;
    while (n--)
        *ptr_dst++ = *ptr_src++;
    return (dst);
}

/* int	main(void)
{
    char	str1[] = "Hello, World!";
    char	str2[] = "Goodbye, World!";
    char	*ptr;

    write(1, "ft_memcpy(\"Hello, World!\", \"Goodbye, World!\", 13): ", 52);
    ptr = ft_memcpy(str1, str2, 13);
    write(1, ptr, 13);
    write(1, "\n", 1);
    return (0);
} */

/* #include "libft.h#include "libft.h#include "libft.h */
// The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.  Applications in which dst and src might overlap should use memmove(3) instead.