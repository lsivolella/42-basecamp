/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_px1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:43:08 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 01:55:48 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_column_p_x1(char y, int index, int *cells)
{
	int solution;

	solution = 1;
	if (y == '1')
	{
		solution = 0;
	}
	else if (y == '2')
	{
		ft_column_p_x1_y2(index, cells);
	}
	else if (y == '3')
	{
		ft_column_p_x1_y3(index, cells);
	}
	else if (y == '4')
	{
		ft_column_p_x1_y4(index, cells);
	}
	return (solution);
}

void	ft_column_p_x1_y2(int index, int *cells)
{
	cells[index] = 0;
	cells[index + 1] = 0;
	cells[index + 2] = 0;
	cells[index + 3] = 4;
	cells[index + 16] = 1;
	cells[index + 17] = 2;
	cells[index + 18] = 0;
	cells[index + 19] = 0;
	cells[index + 32] = 1;
	cells[index + 33] = 2;
	cells[index + 34] = 0;
	cells[index + 35] = 0;
	cells[index + 48] = 0;
	cells[index + 49] = 0;
	cells[index + 50] = 3;
	cells[index + 51] = 0;
}

void	ft_column_p_x1_y3(int index, int *cells)
{
	cells[index] = 0;
	cells[index + 1] = 0;
	cells[index + 2] = 0;
	cells[index + 3] = 4;
	cells[index + 16] = 1;
	cells[index + 17] = 2;
	cells[index + 18] = 3;
	cells[index + 19] = 0;
	cells[index + 32] = 1;
	cells[index + 33] = 0;
	cells[index + 34] = 3;
	cells[index + 35] = 0;
	cells[index + 48] = 1;
	cells[index + 49] = 2;
	cells[index + 50] = 0;
	cells[index + 51] = 0;
}

void	ft_column_p_x1_y4(int index, int *cells)
{
	cells[index] = 0;
	cells[index + 1] = 0;
	cells[index + 2] = 0;
	cells[index + 3] = 4;
	cells[index + 16] = 0;
	cells[index + 17] = 0;
	cells[index + 18] = 3;
	cells[index + 19] = 0;
	cells[index + 32] = 0;
	cells[index + 33] = 2;
	cells[index + 34] = 0;
	cells[index + 35] = 0;
	cells[index + 48] = 1;
	cells[index + 49] = 0;
	cells[index + 50] = 0;
	cells[index + 51] = 0;
}
