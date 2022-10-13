/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gio </var/spool/mail/gio>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:24:12 by gio               #+#    #+#             */
/*   Updated: 2022/10/13 15:26:42 by gio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	ch;

	ch = 'a';
	while (ch <= 'z')
	{
		write(1, &ch, 1);
		ch++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}
*/
