/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:48:46 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/13 18:31:44 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!ft_strchr(s, c))
	{
		return (NULL);
	}
	while (*(s + i))
	{
		i++;
	}
	i--;
	while (*(s + i) != (char)c)
	{
		if (!*(s + i) || i < 0)
		{
			return (NULL);
		}
		i--;
	}
	return ((char *)(s + i));
}
