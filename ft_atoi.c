/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:43:28 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/23 13:01:08 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*proc_space(const char *str)
{
	const char	*p_str;

	p_str = str;
	while ((*p_str >= 9 && *p_str <= 13) || *p_str == ' ')
		p_str++;
	return ((char *)p_str);
}

static int	to_integer(char *str)
{
	int	result;
	int	minuses;
	int	signs;

	result = 0;
	minuses = 0;
	signs = 0;
	while (*str == '+' || *str == '-')
	{
		signs++;
		if (*str == '-')
			minuses++;
		str++;
	}
	if (signs > 1)
	{
		return (result);
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str++ - '0');
	}
	if (minuses)
		result = -result;
	return (result);
}

int	ft_atoi(const char *str)
{
	char	*spaceless;

	spaceless = proc_space(str);
	return (to_integer(spaceless));
}
