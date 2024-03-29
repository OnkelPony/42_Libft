/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:16:15 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/31 13:19:18 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Adds the node ’new’ at the beginning of the list.
lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	**p_lst;

	p_lst = lst;
	if (p_lst)
	{
		new->next = *p_lst;
	}
	*p_lst = new;
}
