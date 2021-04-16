/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_px4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:56:29 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 01:59:19 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_column_p_x4(char y, int index, int *cells)
{
	int solution;

	solution = 1;
	if (y == '1')
	{
		ft_column_p_x4_y1(index, cells);
	}
	else if (y == '2')
	{
		solution = 0;
	}
	else if (y == '3')
	{
		solution = 0;
	}
	else if (y == '4')
	{
		solution = 0;
	}
	return (solution);
}

void	ft_column_p_x4_y1(int index, int *cells)
{
	cells[index] = 1;
	cells[index + 1] = 0;
	cells[index + 2] = 0;
	cells[index + 3] = 0;
	cells[index + 16] = 0;
	cells[index + 17] = 2;
	cells[index + 18] = 0;
	cells[index + 19] = 0;
	cells[index + 32] = 0;
	cells[index + 33] = 0;
	cells[index + 34] = 3;
	cells[index + 35] = 0;
	cells[index + 48] = 0;
	cells[index + 49] = 0;
	cells[index + 50] = 0;
	cells[index + 51] = 4;
}
