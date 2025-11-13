/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 06:57:25 by joao-alm          #+#    #+#             */
/*   Updated: 2025/11/13 15:28:37 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "ml_list.h"

t_list	*ft_lstnew_int(int i)
{
	return (ft_lstnew((void *)(intptr_t)i));
}
