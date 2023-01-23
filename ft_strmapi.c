/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:41:49 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/23 18:58:43 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
