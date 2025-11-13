/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strarrcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:59:35 by joao-alm          #+#    #+#             */
/*   Updated: 2025/11/13 15:27:02 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ml_string.h"

size_t	ft_strarrcount(char **strarr)
{
	size_t	count;

	if (!strarr)
		return (0);
	count = 0;
	while (strarr[count])
		count++;
	return (count);
}
