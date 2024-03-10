/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:39:05 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:04:43 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	i;
    size_t	j;

    i = 0;
    while (dst[i] && i < size)
        i++;
    j = 0;
    while (src[j] && i + j + 1 < size)
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i < size)
        dst[i + j] = '\0';
    while (src[j])
        j++;
    return (i + j);
}

/* int	main(void)
{
    char	str1[50] = "Hello, ";
    char	str2[50] = "Hello, ";

    write(1, "Before strlcat: ", 16);
    write(1, str1, sizeof(str1));
    write(1, "\n", 1);
    ft_strlcat(str1, "World!", 13);
    write(1, "After strlcat: ", 15);
    write(1, str1, sizeof(str1));
    write(1, "\n", 1);
    write(1, "Before strlcat: ", 16);
    write(1, str2, sizeof(str2));
    write(1, "\n", 1);
    strlcat(str2, "World!", 13);
    write(1, "After strlcat: ", 15);
    write(1, str2, sizeof(str2));
    write(1, "\n", 1);
    return (0);
} */
