/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:48:46 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/16 18:11:12 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function returns a pointer to the first occurrence
of the character c in the string s.
c: Character to search.
s: String to search in.
Return: Pointer to the matched character or NULL if the character is not found.
The terminating null byte is considered part of the string,
so that if c is specified as '\0', these functions return a pointer
to the terminator.
*/
char	*ft_strchr(const char *s, int c)
{
	unsigned char	u_c;

	u_c = (unsigned char)c;
	while (*s != u_c)
	{
		if (!*s++)
		{
			return (NULL);
		}
	}
	return ((char *)s);
}
