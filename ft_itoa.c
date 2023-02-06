/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:56:59 by jimartin          #+#    #+#             */
/*   Updated: 2023/02/06 17:12:26 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		++len;
	}
	while (n != 0)
	{
		++len;
		n /= 10;
	}
	return (len);
}

static int	ft_abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = ft_count_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		len--;
		result[len] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (result);
}
