/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 20:11:47 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/04 16:57:36 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char primeiro;
	char segundo;

	primeiro = 0;
	segundo = 0;
	while (primeiro < 99)
	{
		while (segundo++ < 99)
		{
			ft_putchar(primeiro / 10 + '0');
			ft_putchar(primeiro % 10 + '0');
			ft_putchar(' ');
			ft_putchar(segundo / 10 + '0');
			ft_putchar(segundo % 10 + '0');
			if (primeiro != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		segundo = ++primeiro;
	}
}
