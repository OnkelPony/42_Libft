/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:46:58 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/31 13:18:17 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Returns the last node of the list.
lst: The beginning of the list.
Return: Last node of the list.
*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p_lst;

	if (!lst)
	{
		return (NULL);
	}
	p_lst = lst;
	while (p_lst->next)
	{
		p_lst = p_lst->next;
	}
	return (p_lst);
}
