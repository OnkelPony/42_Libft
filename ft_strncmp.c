/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:02:05 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/16 18:27:21 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	abs_c(char c)
{
	if (c < 0)
	{
		return ((int) -c);
	}
	return (c);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 1;
	if (n == 0)
	{
		return (0);
	}
	while (*s1 == *s2 && i++ < n)
	{
		s1++;
		s2++;
	}
	return (abs_c(*s1) - abs_c(*s2));
}
