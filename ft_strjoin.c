/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:28:49 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/17 16:46:36 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
