/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:36:26 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/21 17:53:57 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t  dst_len;
	size_t  src_len;

	dst_len = 0;
	src_len = ft_strlen(src);
	while (*dst && size > 0)
	{
		dst++;
		dst_len++;
		size--;
	}
	while (*src && size-- > 1)
		*dst++ = *src++;
	if (size <= 1 || *src == 0)
		*dst = '\0';
	return (src_len + dst_len);
}
