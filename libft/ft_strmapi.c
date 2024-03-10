/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:10:32 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/10 22:42:00 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;

	ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* int	main(void)
{
	char	*ptr;

	ptr = ft_strmapi("Hello, World!", &ft_toupper);
	write(1, ptr, 13);
	free(ptr);
	return (0);
} */