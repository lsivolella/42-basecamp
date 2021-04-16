/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:31:05 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 02:38:32 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "header.h"


//int *cells;

int main(int argc, char* argv[])
{
	int i;
	int j;
	int index;
	char *param;
	char *pargv;
	int *cells;
	int solution;

	i = 0;
	j = 0;
	index = 0;
	param = (char *)malloc(17);
	cells = (int *)malloc(64 * 4);
	pargv = argv[1];
	if (argc > 1 && argc < 3 && *pargv != '\0')
	{
		check_parameters(pargv, param);
	}
	else
	{
		ft_putchar_error();
		return (0);
	}
	j = 0;
	while (j < 4)
	{
		ft_check_column_possibilities(param[j], param[j + 4], j, cells);
		j++;
	}
	j = 0;
	if (solution == 0)
	{
		ft_putchar_error();
		return (0);
	}
	while (j < 4)
	{
		ft_check_line_possibilities(param[j + 8], param[j + 12], j, cells);
		j++;
	}
	if (solution == 0)
	{
		ft_putchar_error();
		return (0);
	}
	j = 0;
	while (j < 16)
	{
		ft_cross_check_matrix_1(cells, index);
		ft_cross_check_matrix_2(cells, index);
		ft_cross_check_matrix_3(cells, index);
		ft_cross_check_matrix_4(cells, index);
		index += 4;
		j++;
	}
	j = 0;
	index = 0;
	while (j < 16)
	{
		ft_cross_check_matrix_1(cells, index);
		ft_cross_check_matrix_2(cells, index);
		ft_cross_check_matrix_3(cells, index);
		ft_cross_check_matrix_4(cells, index);
		index += 4;
		j++;
	}
	ft_print_matrix(cells);
	return (0);
}

int		check_parameters(char *pargv, char *param)
{
	int i;
	int j;
	int *pi;
	int *pj;

	i = 0;
	j = 0;
	pi = &i;
	pj = &j;
	while (*pargv)
	{
		test_pargv(pargv, pi, pj, param);
		j++;
		if (j > 31 && *pargv != '\0')
		{
			ft_putchar_error();
			return (0);
		}
		if (*pargv == '\0')
			break ;
		pargv++;
	}
	param[i] = '\0';
	return (1);
}

int		test_pargv(char *pargv, int *pi, int *pj, char *param)
{
	if (*pargv >= '1' && *pargv <= '4')
	{
	param[*pi] = *pargv;
	pi += 1;
	pargv++;
	pj += 1;
	}
	if (*pargv != ' ' && *pi < 16)
	{
		ft_putchar_error();
		return (0);
	}
	else
	{
		ft_putchar_error();
		return (0);
	}
	return (1);
}