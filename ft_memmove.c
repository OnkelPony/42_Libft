/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:34:36 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/19 14:59:03 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (src > dest)
	{
		return (ft_memcpy(dest, src, n));
	}
	s = src;
	d = dest;
	while (n--)
	{
		*(d + n) = *(s + n);
	}
	return (dest);
}
