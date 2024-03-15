#include <stddef.h>
#include <stdlib.h>

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:01:50 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:04:30 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*ptr;
    size_t	i;

    if(ft_strlen(s) < start)
    {
        ptr = malloc(1);
        if (!ptr)
            return (NULL);
        ptr[0] = '\0';
        return (ptr);
    }
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    ptr = malloc(len + 1);
    if (!ptr && len != 0)
        return (NULL);
    i = 0;
    while (i < len)
    {
        ptr[i] = s[start + i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}