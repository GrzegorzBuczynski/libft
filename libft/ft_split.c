/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:07:35 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:08:50 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static size_t	ft_word_length(char const *s, char c)
{
	size_t	length;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	return (length);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	k;

	ptr = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			k = 0;
			ptr[j] = malloc(ft_word_length(s + i, c) + 1);
			if (ptr[j] == NULL)
				return (NULL);
			while (s[i] && s[i] != c)
				ptr[j][k++] = s[i++];
			ptr[j++][k] = '\0';
		}
		else
			i++;
	}
	ptr[j] = NULL;
	return (ptr);
}

/* int	main(void)
{
	char	**ptr;
	size_t	i;

	ptr = ft_split("Hello, World!", ',');
	i = 0;
	while (ptr[i])
	{
		write(1, ptr[i], 5);
		write(1, "\n", 1);
		i++;
	}
	return (0);
} */