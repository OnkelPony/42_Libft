/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gio </var/spool/mail/gio>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:41:17 by gio               #+#    #+#             */
/*   Updated: 2022/10/13 17:14:01 by gio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	sign;

	if (n < 0)
	{
		sign = 'N';
	}
	else
	{
		sign = 'P';
	}
	write(1, &sign, 1);
}

int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(-666);
	ft_is_negative(108);
}
