/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:36:13 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/26 19:00:15 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Counts "words" - strings between separators.
*/
static size_t	count_words(char const *s, char c)
{
	char const	*p_s;
	size_t		word_count;

	p_s = s;
	word_count = 0;
	if (!s)
	{
		return (word_count);
	}
	if (*p_s++ != c)
	{
		word_count++;
	}
	while (*p_s)
	{
		if (*p_s++ != c && *(p_s - 1) == c)
		{
			word_count++;
		}
	}
	return (word_count);
}

char	**split_words(char const *s, char c, size_t word_count)
{
	size_t	i;
	size_t	j;
	size_t	letter_count;
	char	**splitted;

	i = 0;
	j = 0;
	splitted = malloc(sizeof(*splitted) * (word_count + 1));
	while (i < word_count)
	{
		letter_count = 0;
		while (s[j] == c)
		{
			j++;
		}
		while (s[j] && s[j] != c)
		{
			letter_count++;
			j++;
		}
		splitted[i] = malloc(letter_count + 1);
	}
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
	return (NULL);
}
