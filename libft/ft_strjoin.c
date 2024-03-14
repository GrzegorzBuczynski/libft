/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:03:27 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:04:31 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
    char	*ptr;
    size_t	i;
    size_t	j;

    i = 0;
    while (s1[i])
        i++;
    j = 0;
    while (s2[j])
        j++;
    ptr = malloc(i + j + 1);
    if (ptr == NULL)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        ptr[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        ptr[i + j] = s2[j];
        j++;
    }
    ptr[i + j] = '\0';
    return (ptr);
}