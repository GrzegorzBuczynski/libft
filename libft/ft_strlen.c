/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:58:49 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/10 22:40:43 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

size_t	ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

/* void ft_putnbr(int nb)
{
    char c;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb > 9)
        ft_putnbr(nb / 10);
    c = nb % 10 + '0';
    write(1, &c, 1);
}


int	main(void)
{
    char *str = "Hello, World!";
    write(1, "The length of the string is: ", 29);
    ft_putnbr(ft_strlen(str));
    write(1, "\n", 1);
    return (0);
} */

