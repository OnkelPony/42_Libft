/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:36:13 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/30 17:10:42 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Counts "words" - strings between separators.
*/
static size_t	count_words(char const *s, char c)
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

static size_t	count_letters(char const *s, char c, size_t *i)
{
	size_t	letter_count;

	letter_count = 0;
	while (s[*i] == c)
		(*i)++;
	while (s[*i] && s[*i] != c)
	{
		letter_count++;
		(*i)++;
	}
	return (letter_count);
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

static char	**split_words(char const *s, char c, size_t word_count)
{
	size_t	i;
	size_t	letter_count;
	char	**splitted;
	char	**p_splitted;

	i = 0;
	splitted = malloc(sizeof(*splitted) * (word_count + 1));
	if (splitted == 0)
		return (0);
	p_splitted = splitted;
	while (word_count--)
	{
		letter_count = count_letters(s, c, &i);
		*splitted = malloc(letter_count + 1);
		if (*splitted == 0)
			return (ft_free(p_splitted));
		ft_memcpy(*splitted, &s[i - letter_count], letter_count);
		(*splitted++)[letter_count] = '\0';
	}
	return (p_splitted);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	size_t	word_count;

	if (s == 0)
	{
		return (0);
	}
	word_count = count_words(s, c);
	splitted = split_words(s, c, word_count);
	splitted[word_count] = NULL;
	return (splitted);
}
