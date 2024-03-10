/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:44:12 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:05:52 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}


/* int main()
{
    char c = '5';
    if (ft_isdigit(c))
        write(1, "5 is a digit\n", 13);
    else
        write(1, "5 is not a digit\n", 17);
    return 0;
} */