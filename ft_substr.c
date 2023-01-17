/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:21:17 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/17 16:21:02 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*p_substr;
	size_t	i;

	s += start;
	p_substr = malloc(sizeof(*p_substr) * len + 1);
	if (p_substr == NULL)
	{
		return (NULL);
	}
	substr = p_substr;
	i = 0;
	while (*s && ++i <= len)
	{
		*p_substr++ = *s++;
	}
	*p_substr = '\0';
	return (substr);
}
