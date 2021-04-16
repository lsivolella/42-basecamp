/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:14:49 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 00:41:58 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_cc_first_line(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (ft_cell_not_solved(cells, index + i * 16) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (i * 16)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		i++;
	}
}

void	ft_cc_second_line(int *cells, int startingindex)
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
		if (ft_cell_not_solved(cells, index + n * 16) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (n * 16)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		i++;
	}
}

void	ft_cc_third_line(int *cells, int startingindex)
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
		if (ft_cell_not_solved(cells, index + n * 16) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (n * 16)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		i++;
	}
}

void	ft_cc_fourth_line(int *cells, int startingindex)
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
		if (ft_cell_not_solved(cells, index + n * 16) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (n * 16)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		i++;
	}
}
