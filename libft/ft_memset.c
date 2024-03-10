/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:08:25 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/10 20:51:22 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_memset(void *b, int c, size_t len)
{
    unsigned char	*ptr;
    size_t			i;

    ptr = b;
    i = 0;
    while (i < len)
    {
        ptr[i] = c;
        i++;
    }
}