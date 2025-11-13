/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:28:23 by joao-alm          #+#    #+#             */
/*   Updated: 2025/11/13 15:29:51 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ml_conversion.h"

/**
 * Converts 1-e letter to lowercase
 * if there's 1-e lowercase equivalent.
 *
 * @param c Letter to convert to lowercase.
 * @return Returns the converted value,
 * or c if conversion is not possible.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
