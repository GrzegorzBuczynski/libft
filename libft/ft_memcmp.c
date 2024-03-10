/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:49:38 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:05:18 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

/* int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "Hello, World!";
	int		ret;

	write(1, "ft_memcmp(\"Hello, World!\", \"Hello, World!\", 13): ", 50);
	ret = ft_memcmp(str1, str2, 13);
	write(1, &ret, 1);
	write(1, "\n", 1);
	write(1, "ft_memcmp(\"Hello, World!\", \"Hello, World!\", 14): ", 50);
	ret = ft_memcmp(str1, str2, 14);
	write(1, &ret, 1);
	write(1, "\n", 1);
	write(1, "ft_memcmp(\"Hello, World!\", \"Hello, World!\", 15): ", 50);
	ret = ft_memcmp(str1, str2, 15);
	write(1, &ret, 1);
	write(1, "\n", 1);
	write(1, "ft_memcmp(\"Hello, World!\", \"Hello, World!\", 16): ", 50);
	ret = ft_memcmp(str1, str2, 16);
	write(1, &ret, 1);
	write(1, "\n", 1);
	return (0);
} */