/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:01:05 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/16 17:38:14 by gio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function returns a pointer to a new string which is a duplicate
of the string s. Memory for the new string is obtained with malloc(3),
and can be freed with free(3).
s: The string from which to create the duplicate.
Return: The duplicate of the string.
NULL if the allocation fails.
*/
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
