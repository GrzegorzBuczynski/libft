/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:38:22 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:04:44 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t	i;

    i = 0;
    while (src[i] && i + 1 < size)
    {
        dst[i] = src[i];
        i++;
    }
    if (size)
        dst[i] = '\0';
    while (src[i])
        i++;
    return (i);
}

/* int	main(void)
{
    char	str1[50] = "Hello, World!";
    char	str2[50] = "Hello, World!";

    write(1, "Before strlcpy: ", 16);
    write(1, str1, sizeof(str1));
    write(1, "\n", 1);
    ft_strlcpy(str1, str1 + 7, 13);
    write(1, "After strlcpy: ", 15);
    write(1, str1, sizeof(str1));
    write(1, "\n", 1);
    write(1, "Before strlcpy: ", 16);
    write(1, str2, sizeof(str2));
    write(1, "\n", 1);
    strlcpy(str2, str2 + 7, 13);
    write(1, "After strlcpy: ", 15);
    write(1, str2, sizeof(str2));
    write(1, "\n", 1);
    return (0);
} */
