/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:09:34 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/06 17:47:35 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strnstr() function locates the first occurrence of the null-terminated
string needle in the string haystack, where not more than len characters
are searched. Characters that appear after a ‘\0’ character are not searched.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	bool			found;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (j < ft_strlen(little))
		{
			if (little[j] != big[i + j])
			{
				found = false;
				break ;
			}
			found = true;
			j++;
		}
		if (found && (i + j) <= len)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
