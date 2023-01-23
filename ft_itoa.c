/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:56:59 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/23 17:37:48 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}

static int ft_count_len(int n)
{
	int		length;
	
	length = 0;
	if (n < 0)
	{
		length++;
	}
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	
	return (length);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		length;
	bool	negative;

	negative = false;
	if (n == 0)
		return ("0");
	if (n < 0)
		negative = true;
	length = ft_count_len(n);
	result = malloc(length + 1);
	result[length] = '\0';
	while (length)
	{
		length--;
		result[length] = '0' + (ft_abs(n % 10));
		n /= 10;
	}
	if (negative)
	{
		result[0] = '-';
	}
	return (result);
}
