/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:47:52 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/02 13:48:46 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/*
Iterates the list ’lst’ and applies the function ’f’ on the content of each
node. Creates a new list resulting of the successive applications of
the function ’f’. The ’del’ function is used to delete the content
of a node if needed.
lst: The address of a pointer to a node.
f: The address of the function used to iterate on the list.
del: The address of the function used to delete the content of a node if needed.
Return: The new list.
NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *result;

	result = malloc(sizeof(*result));
	while (lst)
	{
		result->content = f(lst->content);
		result->next = malloc(sizeof(*result));
		if (result->next == NULL)
		{
			del(result->content);
			return (result);
		}
		result = result->next;
		lst = lst->next;
	}
	return (result);
}