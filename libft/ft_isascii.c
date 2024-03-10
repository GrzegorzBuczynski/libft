/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:55:41 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:05:50 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

/* int	main(void)
{
    char c = 5;
    if (ft_isascii(c))
        write(1, "5 is an ascii character\n", 24);
    else
        write(1, "5 is not an ascii character\n", 28);
    return (0);
} */