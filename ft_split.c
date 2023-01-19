/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:36:13 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/19 14:07:29 by jimartin         ###   ########.fr       */
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
	if ((*s == c && !s[1]) || (!*s))
	{
		p_splitted = malloc(sizeof(char*));
		p_splitted[0] = NULL;
		return (p_splitted);
	}
	if (s == 0)
	{
		p_splitted = malloc(sizeof(char*));
		p_splitted[0] = 0;
		return (p_splitted);
	}
	while (s[i])
	{
		if (s[i] == c)
			count++;
		length++;
		i++;
	}
	// i = 0;
	splitted = malloc(sizeof(char *) * (count + 2));
	p_splitted = malloc(sizeof(char *) * (count + 2));
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
	i = 0;
	j = 0;
	while (i <= count)
	{
		if (splitted[i][0])
		{
			p_splitted[j] = splitted[i];
			j++;
		}
		i++;
	}
	return (p_splitted);
}
