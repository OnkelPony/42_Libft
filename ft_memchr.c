/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:35:12 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/16 19:25:51 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p_s;

	i = 1;
	p_s = s;
	while (*p_s != c)
	{
		if (!*p_s++ && i == n)
		{
			return (NULL);
		}
		i++;
		// p_s++;
	}
	return ((unsigned char *)p_s);
}
