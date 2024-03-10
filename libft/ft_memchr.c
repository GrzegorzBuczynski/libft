/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:48:58 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:05:15 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	str[] = "Hello, World!";
	char	*ptr;

	write(1, "ft_memchr(\"Hello, World!\", 'o', 13): ", 39);
	ptr = ft_memchr(str, 'o', 13);
	write(1, ptr, 1);
	write(1, "\n", 1);
	write(1, "ft_memchr(\"Hello, World!\", 'z', 13): ", 39);
	ptr = ft_memchr(str, 'z', 13);
	write(1, ptr, 1);
	write(1, "\n", 1);
	return (0);
} */