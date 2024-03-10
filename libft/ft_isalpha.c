/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:50:21 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:05:47 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isalpha(int c)
{
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

/* int main()
{
    char c = '5';
    if (ft_isalpha(c))
        write(1, "5 is an alpha\n", 13);
    else
        write(1, "5 is not an alpha\n", 17);
    return 0;
} */