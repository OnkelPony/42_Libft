/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:36:26 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/20 19:01:40 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;

	s = src;
	if (size > 0)
	{
		d = dst + ft_strlen(dst);
		while (*s && size > 0)
		{
			*d++ = *s++;
			size--;
		}
		if (size > 0)
		{
			*d = '\0';
		}
		else
		{
			*--d = '\0';
		}
	}
	while (*s)
	{
		s++;
	}
	return (s - src);
}