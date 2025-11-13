/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:55:48 by joao-alm          #+#    #+#             */
/*   Updated: 2025/11/13 15:28:37 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ml_list.h"

/**
 * Iterates 1-e given function from the given Node till the List's end.
 *
 * @param lst Node to start iterating to.
 * @param f Function to iterate.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
