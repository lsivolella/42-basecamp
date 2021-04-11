/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:31:05 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/11 14:47:50 by lgoncalv         ###   ########.fr       */
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

	i = 0;
	j = 0;
	index = 0;
	param = (char *)malloc(17);
	cells = (int *)malloc(64 * 4);
	pargv = argv[1];
	printf("%d\n", argc);
	if (argc > 1 && argc < 3 && *pargv != '\0')
	{
		while (*pargv)
		{
			if (*pargv >= '1' && *pargv <= '4')
			{
				param[i] = *pargv;
				i++;
				pargv++;
				j++;
				if (*pargv != ' ' && i < 16)
				{
					printf("Error 1\n");
					return (0);
				}
			}
			else
			{
				printf("Error 2\n");
				return (0);
			}
			j++;
			if (j > 31 && *pargv != '\0')
			{
				printf("Error 3\n");
				return (0);
			}
			if (*pargv == '\0')
				break ;
			pargv++;
		}
		param[i] = '\0';
	}
	else
	{
		printf("Error 4\n");
		return (0);
	}
	for (i = 0; i < 16; i++)
	{
		printf("[%c], ", param[i]);
	}
	printf("\n");
	j = 0;
	// Primeira análise: criar a árvore de possibilidade das colunas
	while (j < 4)
	{
		// os vetores das celulas precisam ser variaveis globais
		// para facilitar o acesso por todas as funções
		ft_check_column_possibilities(param[j], param[j + 4], j, cells);
		j++;
	}
	ft_print_matrix(cells);
	printf("----------------------------------------------------------------\n");
	j = 0;
	// Segunda análise: criar a árvore de possibilidade das linhas
	while (j < 4)
	{
		// os vetores das celulas precisam ser variaveis globais
		// para facilitar o acesso por todas as funções
		ft_check_line_possibilities(param[j + 8], param[j + 12], j, cells);
		j++;
	}
	ft_print_matrix(cells);
	printf("----------------------------------------------------------------\n");
	j = 0;
	printf("test");
	while (j < 6)
	{
		ft_cross_check_matrix(cells, index);
		index += 4;
		j++;
	}
	ft_print_matrix(cells);
	printf("----------------------------------------------------------------\n");
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_matrix(int *cells)
{
	int counters[4];

	counters[0] = -1;
	counters[3] = 0;
	while (++counters[0] < 4)
	{
		counters[1] = -1;
		while (++counters[1] < 4)
		{
			counters[2] = -1;
			while (++counters[2] < 4)
			{
				if (cells[counters[3]] != 100)
				{
					ft_putchar(cells[counters[3]++] + '0');
					ft_putchar('/');
				}
			}
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int ft_define_column_starting_index(int reference)
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

int ft_define_line_starting_index(int reference)
{
	int index;

	index = 0;
	if (reference == 0)
		index = 0;
	else if (reference == 1)
		index = 16;
	else if (reference == 2)
		index = 32;
	else if (reference == 3)
		index = 48;
	return (index);
}

int ft_cell_not_solved(int *cells, int index)
{
	int possibilidade;
	int i;

	possibilidade = 0;
	i = 0;
	while(i < 4)
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

void ft_cross_check_matrix(int *cells, int index)
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
		else if (index == 16)
			ft_cross_check_cell5(cells, index);
		else if (index == 20)
			ft_cross_check_cell6(cells, index);
		/*
		else if (index == 24)
			ft_cross_check_cell7(cells, index);
		else if (index == 28)
			ft_cross_check_cell8(cells, index);
		else if (index == 32)
			ft_cross_check_cell9(cells, index);
		else if (index == 36)
			ft_cross_check_cell10(cells, index);
		else if (index == 40)
			ft_cross_check_cell11(cells, index);
		else if (index == 44)
			ft_cross_check_cell12(cells, index);
		else if (index == 48)
			ft_cross_check_cell13(cells, index);
		else if (index == 52)
			ft_cross_check_cell14(cells, index);
		else if (index == 56)
			ft_cross_check_cell15(cells, index);
		else if (index == 60)
			ft_cross_check_cell16(cells, index);
		*/
	}
}

void ft_cross_check_cell1(int *cells, int index)
{
	int startingindex;

	startingindex = index - 3;
	ft_cc_first_columns(cells, startingindex);
	ft_cc_first_lines(cells, startingindex);
}

void ft_cross_check_cell2(int *cells, int index)
{
	int startingindex;

	startingindex = index - 3;
	ft_cc_second_columns(cells, startingindex);
	ft_cc_first_lines(cells, startingindex);
}

void ft_cross_check_cell3(int *cells, int index)
{
	int startingindex;

	startingindex = index - 3;
	ft_cc_third_columns(cells, startingindex);
	ft_cc_first_lines(cells, startingindex);
}

void ft_cross_check_cell4(int *cells, int index)
{
	int startingindex;

	startingindex = index - 3;
	ft_cc_fourth_columns(cells, startingindex);
	ft_cc_first_lines(cells, startingindex);
}

void ft_cross_check_cell5(int *cells, int index)
{
	int startingindex;

	startingindex = index - 3;
	ft_cc_first_columns(cells, startingindex);
	ft_cc_second_lines(cells, startingindex);
}

void ft_cross_check_cell6(int *cells, int index)
{
	int startingindex;

	startingindex = index - 3;
	ft_cc_second_columns(cells, startingindex);
	ft_cc_second_lines(cells, startingindex);
}

void ft_cc_first_columns(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	// 3 columns to the right
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		while (j < 4)
		{
			if (ft_cell_not_solved(cells, cells[index + (i * 4)] - j))
				break ;
			else if (cells[index + (i * 4)] != 0)
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
	// 3 columns to the right
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		while (j < 4)
		{
			if (i == 1)
				i *= -1;
			if (ft_cell_not_solved(cells, cells[index + (i * 4)] - j))
				break ;
			else if (cells[index + (i * 4)] != 0)
				cells[index] = 0;
			if (i < 0)
				i *= -1;
			index++;
			j++;
		}
		i++;
	}
}

void ft_cc_third_columns(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	// 3 columns to the right
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		while (j < 4)
		{
			if (i == 1 || i == 2)
				i *= -1;
			if (ft_cell_not_solved(cells, cells[index + (i * 4)] - j))
				break ;
			else if (cells[index + (i * 4)] != 0)
				cells[index] = 0;
			if (i < 0)
				i *= -1;
			index++;
			j++;
		}
		i++;
	}
}

void ft_cc_fourth_columns(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	i = 1;
	// 3 columns to the right
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		while (j < 4)
		{
			if (i == 1 || i == 2 || i == 3)
				i *= -1;
			if (ft_cell_not_solved(cells, cells[index + (i * 4)] - j))
				break ;
			else if (cells[index + (i * 4)] != 0)
				cells[index] = 0;
			if (i < 0)
				i *= -1;
			index++;
			j++;
		}
		i++;
	}
}

void ft_cc_first_lines(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	// 3 columns to the botom
	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		while (j < 4)
		{
			if (ft_cell_not_solved(cells, cells[index + (i * 16)] - j))
				break ;
			else if (cells[index + (i * 16)] != 0)
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

	// 3 columns to the botom
	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		while (j < 4)
		{
			if (i == 1)
				i *= -1;
			if (ft_cell_not_solved(cells, cells[index + (i * 16)] - j))
				break ;
			else if (cells[index + (i * 16)] != 0)
				cells[index] = 0;
			index++;
			j++;
			if (i < 0)
				i *= -1;
		}
		i++;
	}
}

void ft_cc_third_lines(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	// 3 columns to the botom
	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		while (j < 4)
		{
			if (i == 1 || i == 2)
				i *= -1;
			if (ft_cell_not_solved(cells, cells[index + (i * 16)] - j))
				break ;
			else if (cells[index + (i * 16)] != 0)
				cells[index] = 0;
			index++;
			j++;
			if (i < 0)
				i *= -1;
		}
		i++;
	}
}

void ft_cc_fourth_lines(int *cells, int startingindex)
{
	int i;
	int j;
	int index;

	// 3 columns to the botom
	i = 1;
	while (i < 4)
	{
		j = 0;
		index = startingindex;
		while (j < 4)
		{
			if (i == 1 || i == 2 || i == 3)
				i *= -1;
			if (ft_cell_not_solved(cells, cells[index + (i * 16)] - j))
				break ;
			else if (cells[index + (i * 16)] != 0)
				cells[index] = 0;
			index++;
			j++;
			if (i < 0)
				i *= -1;
		}
		i++;
	}
}