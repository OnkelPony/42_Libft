/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:48:46 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/02 20:01:02 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char u_c;

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
