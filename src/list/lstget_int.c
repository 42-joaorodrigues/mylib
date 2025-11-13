/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstget_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 06:58:58 by joao-alm          #+#    #+#             */
/*   Updated: 2025/11/13 15:28:37 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "ml_list.h"

int	ft_lstget_int(const t_list *lst)
{
	return ((int)(intptr_t)lst->content);
}
