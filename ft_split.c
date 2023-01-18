/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:36:13 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/18 19:33:14 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	char	**p_splitted;
	int		length;
	int		count;
	int		i;
	int		j;

	length = 0;
	count = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		length++;
		i++;
	}
	// i = 0;
	splitted = malloc(sizeof(char *) * (count + 1));
	p_splitted = splitted;
	for (i = 0; i < (count + 1); i++)
	{
		j = 0;
		while (s[j] != c)
			j++;
		j++;
		splitted[i] = malloc(sizeof(char) * j);
		ft_memcpy(splitted[i], s, (j - 1));
		splitted[i][j - 1] = '\0';
		s += j;
	}
	// *splitted = '\0';
	return (p_splitted);
}
