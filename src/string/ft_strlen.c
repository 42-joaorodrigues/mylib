/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:50:01 by joao-alm          #+#    #+#             */
/*   Updated: 2025/11/13 15:27:02 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ml_string.h"

/**
 * Counts the length of the given string.
 *
 * @param s String to get size of
 * @return Returns string size or
 * seg fault if the pointer is null
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
