/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:52:19 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:05:35 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalnum(int c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
		&& c <= '9');
}

/* int	main(void)
{
    char c = '5';
    if (ft_isalnum(c))
        write(1, "5 is an alphanumeric character\n", 31);
    else
        write(1, "5 is not an alphanumeric character\n", 35);
    return (0);
} */