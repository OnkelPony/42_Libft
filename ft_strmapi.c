/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:41:49 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/31 16:55:15 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
s: The string on which to iterate.
f: The function to apply to each character.
Return: The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	char			*p_result;
	unsigned int	i;

	i = 0;
	result = malloc(sizeof(*result) * (ft_strlen(s) + 1));
	p_result = result;
	while (*s)
	{
		*result++ = f(i++, *s++);
	}
	*result = '\0';
	return (p_result);
}
