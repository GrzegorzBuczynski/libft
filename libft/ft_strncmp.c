/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:48:20 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:04:58 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	return (0);
}

/* int	main(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "Hello, World!";
	int		ret;

	write(1, "ft_strncmp(\"Hello, World!\", \"Hello, World!\", 12): ", 50);
	ret = ft_strncmp(str1, str2, 12);
	write(1, &ret, 1);
	write(1, "\n", 1);
	write(1, "ft_strncmp(\"Hello, World!\", \"Hello, World!\", 13): ", 50);
	ret = ft_strncmp(str1, str2, 13);
	write(1, &ret, 1);
	write(1, "\n", 1);
	write(1, "ft_strncmp(\"Hello, World!\", \"Hello, World!\", 14): ", 50);
	ret = ft_strncmp(str1, str2, 14);
	write(1, &ret, 1);
	write(1, "\n", 1);
	write(1, "ft_strncmp(\"Hello, World!\", \"Hello, World!\", 15): ", 50);
	ret = ft_strncmp(str1, str2, 15);
	write(1, &ret, 1);
	write(1, "\n", 1);
	write(1, "ft_strncmp(\"Hello, World!\", \"Hello, World!\", 16): ", 50);
	ret = ft_strncmp(str1, str2, 16);
	write(1, &ret, 1);
	write(1, "\n", 1);
	return (0);
} */