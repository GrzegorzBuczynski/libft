/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:30:52 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:05:33 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}

/* int	main(void)
{
	char	str[50] = "Hello, World!";

	write(1, "Before bzero: ", 14);
	write(1, str, sizeof(str));
    write(1, "\n", 1);
	ft_bzero(str, 10);
	write(1, "After bzero: ", 13);
	write(1, str, sizeof(str));

	return (0);
} */

// The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
