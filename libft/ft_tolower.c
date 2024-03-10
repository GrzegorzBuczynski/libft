/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:46:35 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 20:46:46 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

/* int	main(void)
{
    write(1, "ft_tolower('a'): ", 17);
    write(1, &ft_tolower('a'), 1);
    write(1, "\n", 1);
    write(1, "ft_tolower('A'): ", 17);
    write(1, &ft_tolower('A'), 1);
    write(1, "\n", 1);
    write(1, "ft_tolower('z'): ", 17);
    write(1, &ft_tolower('z'), 1);
    write(1, "\n", 1);
    write(1, "ft_tolower('Z'): ", 17);
    write(1, &ft_tolower('Z'), 1);
    write(1, "\n", 1);
    write(1, "ft_tolower('0'): ", 17);
    write(1, &ft_tolower('0'), 1);
    write(1, "\n", 1);
    write(1, "ft_tolower('9'): ", 17);
    write(1, &ft_tolower('9'), 1);
    write(1, "\n", 1);
    return (0);
} */