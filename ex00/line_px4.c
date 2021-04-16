/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_px4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:21:13 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 01:59:50 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_line_p_x4(char y, int index, int *cells)
{
	int solution;

	solution = 1;
	if (y == '1')
	{
		ft_line_p_x4_y1(index, cells);
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

void	ft_line_p_x4_y1(int index, int *cells)
{
	if (cells[index] != 0)
		cells[index] = 1;
	cells[index + 1] = 0;
	cells[index + 2] = 0;
	cells[index + 3] = 0;
	cells[index + 4] = 0;
	if (cells[index + 5] != 0)
		cells[index + 5] = 2;
	cells[index + 6] = 0;
	cells[index + 7] = 0;
	cells[index + 8] = 0;
	cells[index + 9] = 0;
	if (cells[index + 10] != 0)
		cells[index + 10] = 3;
	cells[index + 11] = 0;
	cells[index + 12] = 0;
	cells[index + 13] = 0;
	cells[index + 14] = 0;
	if (cells[index + 15] != 0)
		cells[index + 15] = 4;
}
