/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_px2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:20:56 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 01:59:54 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_line_p_x2(char y, int index, int *cells)
{
	int solution;

	solution = 1;
	if (y == '1')
	{
		ft_line_p_x2_y1(index, cells);
	}
	else if (y == '2')
	{
		ft_line_p_x2_y2_1(index, cells);
		ft_line_p_x2_y2_2(index, cells);
	}
	else if (y == '3')
	{
		ft_line_p_x2_y3(index, cells);
	}
	else if (y == '4')
	{
		solution = 0;
	}
	return (solution);
}

void	ft_line_p_x2_y1(int index, int *cells)
{
	cells[index] = 0;
	cells[index + 1] = 0;
	if (cells[index + 2] != 0)
		cells[index + 2] = 3;
	cells[index + 3] = 0;
	if (cells[index + 4] != 0)
		cells[index + 4] = 1;
	if (cells[index + 5])
		cells[index + 5] = 2;
	cells[index + 6] = 0;
	cells[index + 7] = 0;
	if (cells[index + 8] != 0)
		cells[index + 8] = 1;
	if (cells[index + 9] != 0)
		cells[index + 9] = 2;
	cells[index + 10] = 0;
	cells[index + 11] = 0;
	cells[index + 12] = 0;
	cells[index + 13] = 0;
	cells[index + 14] = 0;
	if (cells[index + 15] != 0)
		cells[index + 15] = 4;
}

void	ft_line_p_x2_y2_1(int index, int *cells)
{
	if (cells[index] != 0)
		cells[index] = 1;
	if (cells[index + 1] != 0)
		cells[index + 1] = 2;
	if (cells[index + 2] != 0)
		cells[index + 2] = 3;
	cells[index + 3] = 0;
	if (cells[index + 4] != 0)
		cells[index + 4] = 1;
	if (cells[index + 5] != 0)
		cells[index + 5] = 2;
	cells[index + 6] = 0;
}

void	ft_line_p_x2_y2_2(int index, int *cells)
{
	if (cells[index + 7] != 0)
		cells[index + 7] = 4;
	if (cells[index + 8] != 0)
		cells[index + 8] = 1;
	if (cells[index + 9] != 0)
		cells[index + 9] = 2;
	cells[index + 10] = 0;
	if (cells[index + 11] != 0)
		cells[index + 11] = 4;
	if (cells[index + 12] != 0)
		cells[index + 12] = 1;
	if (cells[index + 13] != 0)
		cells[index + 13] = 2;
	if (cells[index + 14] != 0)
		cells[index + 14] = 3;
	cells[index + 15] = 0;
}

void	ft_line_p_x2_y3(int index, int *cells)
{
	if (cells[index] != 0)
		cells[index] = 1;
	if (cells[index + 1] != 0)
		cells[index + 1] = 2;
	if (cells[index + 2] != 0)
		cells[index + 2] = 3;
	cells[index + 3] = 0;
	cells[index + 4] = 0;
	cells[index + 5] = 0;
	cells[index + 6] = 0;
	if (cells[index + 7] != 0)
		cells[index + 7] = 4;
	cells[index + 8] = 0;
	if (cells[index + 9] != 0)
		cells[index + 9] = 2;
	if (cells[index + 10] != 0)
		cells[index + 10] = 3;
	cells[index + 11] = 0;
	if (cells[index + 12] != 0)
		cells[index + 12] = 1;
	if (cells[index + 13] != 0)
		cells[index + 13] = 2;
	cells[index + 14] = 0;
	cells[index + 15] = 0;
}
