/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:06:22 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/31 13:18:52 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Counts the number of nodes in a list.
lst: The beginning of the list.
Return: The length of the list.
*/
int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*p_lst;

	if (!lst)
	{
		return (0);
	}
	len = 1;
	p_lst = lst;
	while (p_lst->next)
	{
		len++;
		p_lst = p_lst->next;
	}
	return (len);
}
