/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:14:35 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 02:21:59 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_error(void)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
}

void	ft_print_matrix(int *cells)
{
	int counters[4];

	counters[0] = -1;
	counters[3] = -1;
	while (++counters[0] < 4)
	{
		counters[1] = -1;
		while (++counters[1] < 4)
		{
			counters[2] = -1;
			while (++counters[2] < 4)
			{
				if (cells[++counters[3]] != 0)
					ft_putchar(cells[counters[3]] + '0');
			}
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
