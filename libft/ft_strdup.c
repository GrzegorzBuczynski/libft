/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:00:47 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:04:27 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(const char *s)
{
    char	*ptr;
    size_t	i;

    i = 0;
    while (s[i])
        i++;
    ptr = malloc(i + 1);
    if (ptr == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

/* int	main(void)
{
    char	*ptr;

    ptr = ft_strdup("Hello, World!");
    write(1, ptr, 13);
    free(ptr);
    return (0);
} */