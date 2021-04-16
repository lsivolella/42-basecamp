/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc_column.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:14:49 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 02:23:51 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_define_column_starting_index(int reference)
{
	int index;

	index = 0;
	if (reference == 0)
		index = 0;
	else if (reference == 1)
		index = 4;
	else if (reference == 2)
		index = 8;
	else if (reference == 3)
		index = 12;
	return (index);
}

void	ft_cc_first_column(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (ft_cell_not_solved(cells, index + i * 4) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (i * 4)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		i++;
	}
}

void	ft_cc_second_column(int *cells, int startingindex)
{
	int i;
	int j;
	int n;
	int index;

	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (i == 1)
			n = -1;
		else if (i == 2 || i == 3)
			n = i - 1;
		if (ft_cell_not_solved(cells, index + n * 4) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (n * 4)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		i++;
	}
}

void	ft_cc_third_column(int *cells, int startingindex)
{
	int i;
	int j;
	int n;
	int index;

	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (i == 1 || i == 2)
			n = i * -1;
		else if (i == 3)
			n = 1;
		if (ft_cell_not_solved(cells, index + n * 4) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (n * 4)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		i++;
	}
}

void	ft_cc_fourth_column(int *cells, int startingindex)
{
	int i;
	int j;
	int n;
	int index;

	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (i == 1 || i == 2 || i == 3)
			n = i * -1;
		if (ft_cell_not_solved(cells, index + n * 4) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (n * 4)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		i++;
	}
}
