/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:43:28 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/09 16:43:35 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*proc_space(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	return (str);
}

long	count_div(char *str)
{
	long	div;

	div = 1;
	while (*str >= '0' && *str <= '9')
	{
		div *= 10;
		str++;
	}
	return (div / 10);
}

int	to_integer(char *str)
{
	long	div;
	int		result;
	int		minuses;

	result = 0;
	minuses = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minuses++;
		str++;
	}
	div = count_div(str);
	while (*str >= '0' && *str <= '9')
	{
		if (div == 1)
			result = -result - (div * (*str - 48));
		else
			result += (div * (*str - 48));
		str++;
		div /= 10;
	}
	if (minuses % 2 == 0)
		result = -result;
	return (result);
}

int	ft_atoi(char *str)
{
	int		result;
	char	*spaceless;

	result = 0;
	spaceless = proc_space(str);
	result = to_integer(spaceless);
	return (result);
}
