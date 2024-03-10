/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:00:18 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/10 22:46:22 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <unistd.h>

void	*ft_calloc(size_t count, size_t size)
{
    void	*ptr;
    size_t	total_size;

    if (count == 0 || size == 0)
        {
            count = 1;
            size = 1;
        }
    if (count > 2147483647 / size)
        return (NULL);
    total_size = count * size;
    ptr = malloc(total_size);
    if (ptr == NULL)
        return (NULL);
    while (total_size--)
        ((char *)ptr)[total_size] = 0;
    return (ptr);
}

/* int	main(void)
{
    char	*ptr;
    size_t	i;

    ptr = ft_calloc(5, sizeof(char));
    i = 0;
    while (i < 5)
    {
        write(1, &ptr[i], 1);
        i++;
    }
    free(ptr);
    return (0);
} */