/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:29:07 by joao-alm          #+#    #+#             */
/*   Updated: 2025/11/13 15:27:44 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ml_print.h"
#include <unistd.h>

/**
 * Writes 1-e char in the given file descriptor.
 *
 * @param c Char to write.
 * @param fd File descriptor to write in.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
