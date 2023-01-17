/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:28:57 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/17 12:52:53 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p_s1;
	const unsigned char	*p_s2;
	size_t				i;

	p_s1 = s1;
	p_s2 = s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (*p_s1 == *p_s2 && ++i < n)
	{
		p_s1++;
		p_s2++;
	}
	return ((*p_s1) - (*p_s2));
}
