/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbuczyns <gbuczyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:12:53 by gbuczyns          #+#    #+#             */
/*   Updated: 2024/03/01 21:13:09 by gbuczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(void)
{
	ft_putchar_fd('a', 1);
	ft_putchar_fd('b', 1);
	ft_putchar_fd('c', 1);
	ft_putchar_fd('\n', 1);
	return (0);
} */