/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:59:12 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/10 22:00:03 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stddef.h>
    
        
static int	ft_is_in_set(char c, char const *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    char	*ptr;
    size_t	i;
    size_t	j;
    size_t	len;

    i = 0;
    while (s1[i] && ft_is_in_set(s1[i], set))
        i++;
    j = 0;
    while (s1[i + j])
        j++;
    while (j && ft_is_in_set(s1[i + j - 1], set))
        j--;
    ptr = malloc(j + 1);
    if (ptr == NULL)
        return (NULL);
    len = 0;
    while (len < j)
    {
        ptr[len] = s1[i + len];
        len++;
    }
    ptr[len] = '\0';
    return (ptr);
}


