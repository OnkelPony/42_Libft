/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:06:02 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/20 16:50:25 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*s;

	s = src;
	if (size > 0)
	{
		while (*s && size > 0)
		{
			*dst++ = *s++;
			size--;
		}
		if (size > 0)
		{
			*dst = '\0';
		}
		else
		{
			*--dst = '\0';
		}
	}
	while (*s)
	{
		++s;
	}
	return (s - src);
}
