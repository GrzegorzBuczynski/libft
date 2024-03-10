/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:31:11 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/10 21:31:25 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int	i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
