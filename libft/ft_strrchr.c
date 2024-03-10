/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:47:43 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:04:46 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (ptr);
}

/* int	main(void)
{
	char	str[] = "Hello, World!";
	char	*ptr;

	write(1, "ft_strrchr(\"Hello, World!\", 'o'): ", 35);
	ptr = ft_strrchr(str, 'o');
	write(1, ptr, 1);
	write(1, "\n", 1);
	write(1, "ft_strrchr(\"Hello, World!\", 'z'): ", 35);
	ptr = ft_strrchr(str, 'z');
	write(1, ptr, 1);
	write(1, "\n", 1);
	return (0);
} */