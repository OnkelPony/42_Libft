/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:01:05 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/23 14:34:52 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*dst;
	char		*d;
	const char	*s;
	size_t		i;

	s = src;
	i = 0;
	while (src[i])
	{
		i++;
	}
	dst = malloc(sizeof(char) * (i + 1));
	if (dst == NULL)
	{
		return (NULL);
	}
	d = dst;
	while (*s)
	{
		*d++ = *s++;
	}
	*d = '\0';
	return (dst);
}
