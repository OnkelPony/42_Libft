/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gio </var/spool/mail/gio>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:18:00 by gio               #+#    #+#             */
/*   Updated: 2022/10/13 18:33:14 by gio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_print(char f, char s, char t)
{
	ft_putchar(f);
	ft_putchar(s);
	ft_putchar(t);
	if (f != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	s = '1';
	t = '2';
	while (f <= '6' + 1)
	{
		while (s <= '7' + 1)
		{
			while (t <= '8' + 1)
			{
				ft_print(f, s, t);
				t++;
			}
			t = ++s + 1;
		}
		s = ++f;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
