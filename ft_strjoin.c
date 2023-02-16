/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:28:49 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/16 17:12:57 by gio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
s1: The prefix string.
s2: The suffix string.
Return: The new string.
NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*p_result;

	result = malloc(sizeof(*result) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	p_result = result;
	while (*s1)
	{
		*p_result++ = *s1++;
	}
	while (*s2)
	{
		*p_result++ = *s2++;
	}
	*p_result = '\0';
	return (result);
}
