/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gio </var/spool/mail/gio>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:47:57 by gio               #+#    #+#             */
/*   Updated: 2022/10/13 21:43:27 by gio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write (1, &ch, 1);
}

void	ft_putnum(int num)
{
	if (num < 0)
	{
		ft_putchar('0');
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnum(num / 10);
		ft_putnum(num % 10);
	}
	else
		ft_putchar(num + 49);
}

void	ft_putall(int n1, int n2)
{
	ft_putchar(' ');
	if (n1 < 10)
		ft_putchar('0');
	ft_putnum(n1);
	ft_putchar(' ');
	if (n2 < 10)
		ft_putchar('0');
	ft_putnum(n2);
	ft_putchar(',');
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = 0;
	j = 0;
	while (i != 99)
	{
		while (j != 100)
		{
			ft_putall(i, j);
			j++;
		}
		i++;
		j = i + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
