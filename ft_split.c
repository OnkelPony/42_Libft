/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:36:13 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/05 19:26:11 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	word_count;
	size_t	i;

	word_count = 0;
	i = 0;
	if (!s || *s == '\0')
	{
		return (word_count);
	}
	if (s[i] != c)
	{
		word_count++;
		i++;
	}
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
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

char		**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = ft_count_words(s, c);
	if (!(strs = malloc((word + 1) * sizeof(*strs))))
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_count_letters(s, c, i);
		if (!(strs[j] = ft_substr(s, i, size)))
		{
			ft_free(strs);
			return (NULL);
		}
		i += size;
	}
	strs[j] = 0;
	return (strs);
}
