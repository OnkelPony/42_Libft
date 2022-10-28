/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gio </var/spool/mail/gio>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:42:46 by gio               #+#    #+#             */
/*   Updated: 2022/10/28 10:54:40 by gio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	*result;
	int	size;
	int i;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	result = malloc(size * sizeof(int));
	while (i < size)
	{
		*result++ = min + i;
		i++;
	}
	return (result - size);
}
