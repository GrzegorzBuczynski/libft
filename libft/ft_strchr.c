/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:47:10 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/10 18:00:52 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
    while (*s != (char)c)
    {
        if (!*s)
            return (NULL);
        s++;
    }
    return ((char *)s);
}

/* 
#include <unistd.h>

int	main(void)
{
    char	str[] = "Hello, World!";
    char	*ptr;

    write(1, "ft_strchr(\"Hello, World!\", 'o'): ", 34);
    ptr = ft_strchr(str, 'o');
    write(1, ptr, 1);
    write(1, "\n", 1);
    write(1, "ft_strchr(\"Hello, World!\", 'z'): ", 34);
    ptr = ft_strchr(str, 'z');
    write(1, ptr, 1);
    write(1, "\n", 1);
    return (0);
} */