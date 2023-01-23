/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:09:50 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/23 14:20:59 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	total;

	total = nmemb * size;
	if (total > INT_MAX)
	{
		exit(136);
	}
	result = malloc(total);
	if (result == NULL)
	{
		return (result);
	}
	ft_bzero(result, total);
	return (result);
}
