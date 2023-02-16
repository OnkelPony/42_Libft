/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:21:17 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/16 18:18:40 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
s: The string from which to create the substring.
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring.
Return: The substring.
NULL if the allocation fails.
*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	else if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	result = malloc(sizeof(*result) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
