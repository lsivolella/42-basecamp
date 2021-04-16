/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:17:50 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 02:22:45 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_cell_not_solved(int *cells, int index)
{
	int possibilidade;
	int i;

	possibilidade = 0;
	i = 0;
	while (i < 4)
	{
		if (cells[index] != 0)
			possibilidade++;
		index++;
		i++;
	}
	if (possibilidade > 1)
		return (1);
	else
		return (0);
}

void	ft_cross_check_matrix_1(int *cells, int index)
{
	if (ft_cell_not_solved(cells, index) != 0)
	{
		if (index == 0)
			ft_cross_check_cell1(cells, index);
		else if (index == 4)
			ft_cross_check_cell2(cells, index);
		else if (index == 8)
			ft_cross_check_cell3(cells, index);
		else if (index == 12)
			ft_cross_check_cell4(cells, index);
	}
}

void	ft_cross_check_matrix_2(int *cells, int index)
{
	if (ft_cell_not_solved(cells, index) != 0)
	{
		if (index == 16)
			ft_cross_check_cell5(cells, index);
		else if (index == 20)
			ft_cross_check_cell6(cells, index);
		else if (index == 24)
			ft_cross_check_cell7(cells, index);
		else if (index == 28)
			ft_cross_check_cell8(cells, index);
	}
}

void	ft_cross_check_matrix_3(int *cells, int index)
{
	if (ft_cell_not_solved(cells, index) != 0)
	{
		if (index == 32)
			ft_cross_check_cell9(cells, index);
		else if (index == 36)
			ft_cross_check_cell10(cells, index);
		else if (index == 40)
			ft_cross_check_cell11(cells, index);
		else if (index == 44)
			ft_cross_check_cell12(cells, index);
	}
}

void	ft_cross_check_matrix_4(int *cells, int index)
{
	if (ft_cell_not_solved(cells, index) != 0)
	{
		if (index == 48)
			ft_cross_check_cell13(cells, index);
		else if (index == 52)
			ft_cross_check_cell14(cells, index);
		else if (index == 56)
			ft_cross_check_cell15(cells, index);
		else if (index == 60)
			ft_cross_check_cell16(cells, index);
	}
}
