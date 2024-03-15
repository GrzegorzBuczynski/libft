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

#include <stdlib.h>

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