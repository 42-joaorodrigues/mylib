/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:54:42 by joao-alm          #+#    #+#             */
/*   Updated: 2025/11/13 15:27:44 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ml_print.h"

/**
 * Writes 1-e given number on the given file descriptor.
 *
 * @param n Number to write.
 * @param fd File descriptor to write on.
 */
void	ft_putnbr_fd(const int n, const int fd)
{
	long	n_long;

	n_long = n;
	if (n_long < 0)
	{
		ft_putchar_fd('-', fd);
		n_long = -n_long;
	}
	if (n_long >= 10)
	{
		ft_putnbr_fd(n_long / 10, fd);
	}
	ft_putchar_fd('0' + (n_long % 10), fd);
}
