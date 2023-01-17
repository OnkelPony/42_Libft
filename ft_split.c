/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:36:13 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/17 19:05:50 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	char	*member;

	splitted = malloc(sizeof(**splitted) * (ft_strlen(s) + 1));
	if (splitted == NULL)
	{
		return (NULL);
	}
	member = malloc(sizeof(*member) * (ft_strlen(s) + 1));
	if (member == NULL)
	{
		return (NULL);
	}
	while (*s)
	{
		if (*s != c)
		{
			*member++ = *s++;
		}
		else
		{
			*member = '\0';
			*splitted++ = member;
		}
	}
	return (splitted);
}
