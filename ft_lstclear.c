/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:43:54 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/31 19:13:27 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Deletes and frees the given node and every
successor of that node, using the function ’del’
and	free(3).
Finally, the pointer to the list must be set to
NULL.
lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *node_next;

	if (lst)
	{
		while (*lst)
		{
			node_next = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = node_next;
		}
	}
}
