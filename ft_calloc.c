/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:09:50 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/03 14:15:47 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb >= INT_MAX || size >= INT_MAX)
	{
		return (0);
	}
	result = malloc(nmemb * size);
	if (result == NULL)
	{
		return (result);
	}
	ft_bzero(result, nmemb * size);
	return (result);
}
