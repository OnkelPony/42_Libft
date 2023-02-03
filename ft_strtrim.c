/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:51:00 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/03 14:17:34 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
s1: The string to be trimmed.
set: The reference set of characters to trim.
Return: The trimmed string.
NULL if the allocation fails.
*/
static int	ft_contains(char c, const char *set)
{
	while (*set)
	{
		if (*set++ == c)
		{
			return (true);
		}
	}
	return (false);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*begin;
	char	*end;
	char	*result;

	if (!s1 || !set)
	{
		return (0);
	}
	begin = (char *)s1;
	end = begin + ft_strlen(s1) - 1;
	while (*begin && ft_contains(*begin, set))
	{
		++begin;
	}
	while (begin < end && ft_contains(*end, set))
	{
		--end;
	}
	result = ft_substr(begin, 0, end - begin + 1);
	return (result);
}
