/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_px1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:20:23 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 01:59:56 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_line_p_x1(char y, int index, int *cells)
{
	int solution;

	solution = 1;
	if (y == '1')
	{
		solution = 0;
	}
	else if (y == '2')
	{
		ft_line_p_x1_y2(index, cells);
	}
	else if (y == '3')
	{
		ft_line_p_x1_y3(index, cells);
	}
	else if (y == '4')
	{
		ft_line_p_x1_y4(index, cells);
	}
	return (solution);
}

void	ft_line_p_x1_y2(int index, int *cells)
{
	cells[index] = 0;
	cells[index + 1] = 0;
	cells[index + 2] = 0;
	if (cells[index + 3] != 0)
		cells[index + 3] = 4;
	if (cells[index + 4] != 0)
		cells[index + 4] = 1;
	if (cells[index + 5] != 0)
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
	if (cells[index + 14] != 0)
		cells[index + 14] = 3;
	cells[index + 15] = 0;
}

void	ft_line_p_x1_y3(int index, int *cells)
{
	cells[index] = 0;
	cells[index + 1] = 0;
	cells[index + 2] = 0;
	if (cells[index + 3] != 0)
		cells[index + 3] = 4;
	if (cells[index + 4] != 0)
		cells[index + 4] = 1;
	if (cells[index + 5] != 0)
		cells[index + 5] = 2;
	if (cells[index + 6] != 0)
		cells[index + 6] = 3;
	cells[index + 7] = 0;
	if (cells[index + 8] != 0)
		cells[index + 8] = 1;
	cells[index + 9] = 0;
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

void	ft_line_p_x1_y4(int index, int *cells)
{
	cells[index] = 0;
	cells[index + 1] = 0;
	cells[index + 2] = 0;
	if (cells[index + 3] != 0)
		cells[index + 3] = 4;
	cells[index + 4] = 0;
	cells[index + 5] = 0;
	if (cells[index + 6] != 0)
		cells[index + 6] = 3;
	cells[index + 7] = 0;
	cells[index + 8] = 0;
	if (cells[index + 9] != 0)
		cells[index + 9] = 2;
	cells[index + 10] = 0;
	cells[index + 11] = 0;
	if (cells[index + 12] != 0)
		cells[index + 12] = 1;
	cells[index + 13] = 0;
	cells[index + 14] = 0;
	cells[index + 15] = 0;
}
