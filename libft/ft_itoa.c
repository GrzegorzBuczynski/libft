/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:09:49 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/10 23:06:41 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digits(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char *ptr;
	size_t i;
	size_t digits;

	digits = ft_count_digits(n);
	ptr = malloc(digits + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		ptr[i++] = '-';
		if (n == -2147483648)
		{
			ptr[i++] = '2';
			n = 147483648;
		}
		else
			n = -n;
	}
	ptr[digits] = '\0';
	while (digits-- > i)
	{
		ptr[digits] = n % 10 + '0';
		n /= 10;
	}
	return (ptr);
}