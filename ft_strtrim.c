/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:51:00 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/17 17:45:19 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*p_trimmed;

	trimmed = malloc(sizeof(*trimmed) * (ft_strlen(s1) + 1));
	if (trimmed == NULL)
	{
		return (NULL);
	}
	p_trimmed = trimmed;
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	while (*s1)
	{
		*p_trimmed++ = *s1++;
	}
	p_trimmed--;
	while (ft_strchr(set, *p_trimmed))
	{
		*p_trimmed-- = '\0';
	}
	*++p_trimmed = '\0';
	return (trimmed);
}
