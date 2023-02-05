/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:36:13 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/05 21:43:26 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	word_count;
	size_t	i;

	word_count = 0;
	i = 0;
	if (!s || !*s)
	{
		return (word_count);
	}
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			word_count++;
		}
		i++;
	}
	return (word_count);
}

static int	ft_count_letters(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static char	**ft_free(char **p_splitted)
{
	while (*p_splitted)
	{
		if (*p_splitted++)
		{
			free(*p_splitted);
		}
	}
	free(p_splitted);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = ft_count_words(s, c);
	strs = malloc((word + 1) * sizeof(*strs));
	if (!strs)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_count_letters(s, c, i);
		strs[j] = ft_substr(s, i, size);
		if (!(strs[j]))
			return (ft_free(strs));
		i += size;
	}
	strs[j] = 0;
	return (strs);
}
