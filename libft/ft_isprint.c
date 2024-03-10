/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:57:38 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:05:53 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}

/* int	main(void)
{
    char c = 5;
    if (ft_isprint(c))
        write(1, "5 is a printable character\n", 28);
    else
        write(1, "5 is not a printable character\n", 32);
    return (0);
} */