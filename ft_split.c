/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:36:13 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/07 11:58:27 by jimartin         ###   ########.fr       */
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

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
s: The string to be split.
c: The delimiter character.
Return: The array of new strings resulting from the split.
NULL if the allocation fails.
*/
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	int		letters;
	char	**result;

	i = 0;
	j = 0;
	words = ft_count_words(s, c);
	result = malloc(sizeof(*result) * (words + 1));
	if (!result)
		return (NULL);
	while (j < words)
	{
		while (s[i] == c)
			i++;
		letters = ft_count_letters(s, c, i);
		result[j] = ft_substr(s, i, letters);
		if (!(result[j]))
			return (ft_free(result));
		i += letters;
		j++;
	}
	result[j] = 0;
	return (result);
}
