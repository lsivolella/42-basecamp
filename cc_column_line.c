/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc_column_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:14:49 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/11 16:33:29 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


#include <stdio.h>

void ft_cc_first_columns(int *cells, int startingindex)
{
	int i;
	int j;
	int index;
	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (ft_cell_not_solved(cells, cells[index + (i * 4)]) == 1)
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

void ft_cc_second_columns(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (i == 1)
			i *= -1;
		if (ft_cell_not_solved(cells, cells[index + (i * 4)]) == 1)
		{
			break ;
		}
		while (j < 4)
		{
			if (cells[index + (i * 4)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		if (i < 0)
			i *= -1;
		i++;
	}
}

void ft_cc_third_columns(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (i == 1 || i == 2)
			i *= -1;
		if (ft_cell_not_solved(cells, cells[index + (i * 4)]) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (i * 4)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		if (i < 0)
			i *= -1;
		i++;
	}
}

void ft_cc_fourth_columns(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (i == 1 || i == 2 || i == 3)
			i *= -1;
		if (ft_cell_not_solved(cells, cells[index + (i * 4)]) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (i * 4)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		if (i < 0)
			i *= -1;
		i++;
	}
}

void ft_cc_first_lines(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (ft_cell_not_solved(cells, cells[index + (i * 16)]) == 1)
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

void ft_cc_second_lines(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	while (i < 4)
	{
		printf("Index form second lines: %d\n", index);
		j = 0;
		index = startingindex;
		if (i == 1)
			i *= -1;
		if (ft_cell_not_solved(cells, cells[index + (i * 16)]) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (i * 16)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		if (i < 0)
			i *= -1;
		i++;
	}
}

void ft_cc_third_lines(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (i == 1 || i == 2)
			i *= -1;
		if (ft_cell_not_solved(cells, cells[index + (i * 16)]) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (i * 16)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		if (i < 0)
			i *= -1;
		i++;
	}
}

void ft_cc_fourth_lines(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		if (i == 1 || i == 2 || i == 3)
			i *= -1;
		if (ft_cell_not_solved(cells, cells[index + (i * 16)]) == 1)
			break ;
		while (j < 4)
		{
			if (cells[index + (i * 16)] != 0)
				cells[index] = 0;
			index++;
			j++;
		}
		if (i < 0)
			i *= -1;
		i++;
	}
}