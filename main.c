/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:31:05 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/11 00:24:34 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_print_matrix(int *cells);
void ft_check_column_possibilities(char x, char y, int reference, int *cells);
void ft_check_line_possibilities(char x, char y, int reference, int *cells);

//int *cells;

int main(int argc, char* argv[])
{
	int i;
	int j;
	int m;
	int n;
	int o;
	int p;
	char *param;
	char *pargv;
	int *cells;

	i = 0;
	j = 0;
	m = 0;
	n = 0;
	o = 0;
	p = 0;
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
					//ft_putchar(cells[counters[3]++] + '0');
					//ft_putchar('/');
					//counters[3]++;
					printf("%d/", cells[counters[3]++]);
				}
			}
			printf(",    ");
		}
		printf("\n");
		printf("\n");
	}
}

int ft_define_starting_index(int reference)
{
	int index;

	if (reference == 0)
	{
		// usar matrixcells[0] a matrixcells[3]
		index = 0;
	}
	else if (reference == 1)
	{
		// usar matrixcells[4] a matrixcells[7]
		index = 4;
	}
	else if (reference == 2)
	{
		// usar matrixcells[8] a matrixcells[11]
		index = 8;
	}
	else if (reference == 3)
	{
		// usar matrixcells[12] a matrixcells[15]
		index = 12;
	}
	return (index);
}

void ft_check_column_possibilities(char x, char y, int reference, int *cells)
{
	int index;

	index = ft_define_starting_index(reference);
	if (x == '1')
	{
		// Chamar arquivo das possibilidades 1-x
		if (y == '1')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
		else if (y == '2')
		{
			cells[index] = 0;
			cells[index + 1] = 0;
			cells[index + 2] = 0;
			cells[index + 3] = 4;

			// Matrix x, 2
			cells[index + 16] = 1;
			cells[index + 17] = 2;
			cells[index + 18] = 0;
			cells[index + 19] = 0;

			// Matrix x, 3
			cells[index + 32] = 1;
			cells[index + 33] = 2;
			cells[index + 34] = 0;
			cells[index + 35] = 0;

			// Matrix x, 4
			cells[index + 48] = 0;
			cells[index + 49] = 0;
			cells[index + 50] = 3;
			cells[index + 51] = 0;
		}
		else if (y == '3')
		{
			// Matrix x, 1
			cells[index] = 0;
			cells[index + 1] = 0;
			cells[index + 2] = 0;
			cells[index + 3] = 4;

			// Matrix x, 2
			cells[index + 16] = 1;
			cells[index + 17] = 2;
			cells[index + 18] = 3;
			cells[index + 19] = 0;

			// Matrix x, 3
			cells[index + 32] = 1;
			cells[index + 33] = 0;
			cells[index + 34] = 3;
			cells[index + 35] = 0;

			// Matrix x, 4
			cells[index + 48] = 1;
			cells[index + 49] = 2;
			cells[index + 50] = 0;
			cells[index + 51] = 0;
		}
		else if (y == '4')
		{
			// Matrix x, 1
			cells[index] = 0;
			cells[index + 1] = 0;
			cells[index + 2] = 0;
			cells[index + 3] = 4;

			// Matrix x, 2
			cells[index + 16] = 0;
			cells[index + 17] = 0;
			cells[index + 18] = 3;
			cells[index + 19] = 0;

			// Matrix x, 3
			cells[index + 32] = 0;
			cells[index + 33] = 2;
			cells[index + 34] = 0;
			cells[index + 35] = 0;

			// Matrix x, 4
			cells[index + 48] = 1;
			cells[index + 49] = 0;
			cells[index + 50] = 0;
			cells[index + 51] = 0;
		}
	}
	else if (x == '2')
	{
		// Chamar arquivo das possibilidades 2-x
		if (y == '1')
		{
			// Matrix x, 1
			cells[index] = 0;
			cells[index + 1] = 0;
			cells[index + 2] = 3;
			cells[index + 3] = 0;

			// Matrix x, 2
			cells[index + 16] = 1;
			cells[index + 17] = 2;
			cells[index + 18] = 0;
			cells[index + 19] = 0;

			// Matrix x, 3
			cells[index + 32] = 1;
			cells[index + 33] = 2;
			cells[index + 34] = 0;
			cells[index + 35] = 0;

			// Matrix x, 4
			cells[index + 48] = 0;
			cells[index + 49] = 0;
			cells[index + 50] = 0;
			cells[index + 51] = 4;
		}
		else if (y == '2')
		{
			// Matrix x, 1
			cells[index] = 1;
			cells[index + 1] = 2;
			cells[index + 2] = 3;
			cells[index + 3] = 0;

			// Matrix x, 2
			cells[index + 16] = 1;
			cells[index + 17] = 2;
			cells[index + 18] = 0;
			cells[index + 19] = 4;

			// Matrix x, 3
			cells[index + 32] = 1;
			cells[index + 33] = 2;
			cells[index + 34] = 0;
			cells[index + 35] = 4;

			// Matrix x, 4
			cells[index + 48] = 1;
			cells[index + 49] = 2;
			cells[index + 50] = 3;
			cells[index + 51] = 0;
		}
		else if (y == '3')
		{
			// Matrix 1, 1
			cells[index] = 1;
			cells[index + 1] = 2;
			cells[index + 2] = 3;
			cells[index + 3] = 0;

			// Matrix 1, 2
			cells[index + 16] = 0;
			cells[index + 17] = 0;
			cells[index + 18] = 0;
			cells[index + 19] = 4;

			// Matrix 1, 3
			cells[index + 32] = 0;
			cells[index + 33] = 2;
			cells[index + 34] = 3;
			cells[index + 35] = 0;

			// Matrix 1, 4
			cells[index + 48] = 1;
			cells[index + 49] = 2;
			cells[index + 50] = 0;
			cells[index + 51] = 0;
		}
		else if (y == '4')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
	}
	else if (x == '3')
	{
		// Chamar arquivo das possibilidades 3-x
		if (y == '1')
		{
			// Matrix x, 1
			cells[index] = 1;
			cells[index + 1] = 2;
			cells[index + 2] = 0;
			cells[index + 3] = 0;

			// Matrix x, 2
			cells[index + 16] = 1;
			cells[index + 17] = 0;
			cells[index + 18] = 3;
			cells[index + 19] = 0;

			// Matrix x, 3
			cells[index + 32] = 1;
			cells[index + 33] = 2;
			cells[index + 34] = 3;
			cells[index + 35] = 0;

			// Matrix x, 4
			cells[index + 48] = 0;
			cells[index + 49] = 0;
			cells[index + 50] = 0;
			cells[index + 51] = 4;
		}
		else if (y == '2')
		{
			// Matrix x, 1
			cells[index] = 1;
			cells[index + 1] = 2;
			cells[index + 2] = 0;
			cells[index + 3] = 0;

			// Matrix x, 2
			cells[index + 16] = 0;
			cells[index + 17] = 2;
			cells[index + 18] = 3;
			cells[index + 19] = 0;

			// Matrix x, 3
			cells[index + 32] = 0;
			cells[index + 33] = 0;
			cells[index + 34] = 0;
			cells[index + 35] = 4;

			// Matrix x, 4
			cells[index + 48] = 1;
			cells[index + 49] = 2;
			cells[index + 50] = 3;
			cells[index + 51] = 0;
		}
		else if (y == '3')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
		else if (y == '4')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
	}
	else if (x == '4')
	{
		// Chamar arquivo das possibilidades 4-x
		if (y == '1')
		{
			// Matrix x, 1
			cells[index] = 1;
			cells[index + 1] = 0;
			cells[index + 2] = 0;
			cells[index + 3] = 0;

			// Matrix x, 2
			cells[index + 16] = 0;
			cells[index + 17] = 2;
			cells[index + 18] = 0;
			cells[index + 19] = 0;

			// Matrix x, 3
			cells[index + 32] = 0;
			cells[index + 33] = 0;
			cells[index + 34] = 3;
			cells[index + 35] = 0;

			// Matrix x, 4
			cells[index + 48] = 0;
			cells[index + 49] = 0;
			cells[index + 50] = 0;
			cells[index + 51] = 4;
		}
		else if (y == '2')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
		else if (y == '3')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
		else if (y == '4')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
	}
}

void ft_check_line_possibilities(char x, char y, int reference, int *cells)
{
	//checar as possibilidades da combinaçao
	//se uma posição possui o número zero, ela não pode receber outro número
	//se a posição possui o número, ele pode ser sobrescrito
	int index;

	index = ft_define_starting_index(reference);
	if (x == '1')
	{
		// Chamar arquivo das possibilidades 1-x
		if (y == '1')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
		else if (y == '2')
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
		else if (y == '3')
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
		else if (y == '4')
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
	}
	else if (x == '2')
	{
		// Chamar arquivo das possibilidades 2-x
		if (y == '1')
		{
			// Matrix x, 1
			cells[index] = 0;
			cells[index + 1] = 0;
			cells[index + 2] = 3;
			cells[index + 3] = 0;

			// Matrix x, 2
			cells[index + 4] = 1;
			cells[index + 5] = 2;
			cells[index + 6] = 0;
			cells[index + 7] = 0;

			// Matrix x, 3
			cells[index + 8] = 1;
			cells[index + 9] = 2;
			cells[index + 10] = 0;
			cells[index + 11] = 0;

			// Matrix x, 4
			cells[index + 12] = 0;
			cells[index + 13] = 0;
			cells[index + 14] = 0;
			cells[index + 15] = 4;
		}
		else if (y == '2')
		{
			// Matrix x, 1
			cells[index] = 1;
			cells[index + 1] = 2;
			cells[index + 2] = 3;
			cells[index + 3] = 0;

			// Matrix x, 2
			cells[index + 4] = 1;
			cells[index + 5] = 2;
			cells[index + 6] = 0;
			cells[index + 7] = 4;

			// Matrix x, 3
			cells[index + 8] = 1;
			cells[index + 9] = 2;
			cells[index + 10] = 0;
			cells[index + 11] = 4;

			// Matrix x, 4
			cells[index + 12] = 1;
			cells[index + 13] = 2;
			cells[index + 14] = 3;
			cells[index + 15] = 0;
		}
		else if (y == '3')
		{
			// Matrix 1, 1
			cells[index] = 1;
			cells[index + 1] = 2;
			cells[index + 2] = 3;
			cells[index + 3] = 0;

			// Matrix 1, 2
			cells[index + 4] = 0;
			cells[index + 5] = 0;
			cells[index + 6] = 0;
			cells[index + 7] = 4;

			// Matrix 1, 3
			cells[index + 8] = 0;
			cells[index + 9] = 2;
			cells[index + 10] = 3;
			cells[index + 11] = 0;

			// Matrix 1, 4
			cells[index + 12] = 1;
			cells[index + 13] = 2;
			cells[index + 14] = 0;
			cells[index + 15] = 0;
		}
		else if (y == '4')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
	}
	else if (x == '3')
	{
		// Chamar arquivo das possibilidades 3-x
		if (y == '1')
		{
			// Matrix x, 1
			cells[index] = 1;
			cells[index + 1] = 2;
			cells[index + 2] = 0;
			cells[index + 3] = 0;

			// Matrix x, 2
			cells[index + 4] = 1;
			cells[index + 5] = 0;
			cells[index + 6] = 3;
			cells[index + 7] = 0;

			// Matrix x, 3
			cells[index + 8] = 1;
			cells[index + 9] = 2;
			cells[index + 10] = 3;
			cells[index + 11] = 0;

			// Matrix x, 4
			cells[index + 12] = 0;
			cells[index + 13] = 0;
			cells[index + 14] = 0;
			cells[index + 15] = 4;
		}
		else if (y == '2')
		{
			// Matrix x, 1
			cells[index] = 1;
			cells[index + 1] = 2;
			cells[index + 2] = 0;
			cells[index + 3] = 0;

			// Matrix x, 2
			cells[index + 4] = 0;
			cells[index + 5] = 2;
			cells[index + 6] = 3;
			cells[index + 7] = 0;

			// Matrix x, 3
			cells[index + 8] = 0;
			cells[index + 9] = 0;
			cells[index + 10] = 0;
			cells[index + 11] = 4;

			// Matrix x, 4
			cells[index + 12] = 1;
			cells[index + 13] = 2;
			cells[index + 14] = 3;
			cells[index + 15] = 0;
		}
		else if (y == '3')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
		else if (y == '4')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
	}
	else if (x == '4')
	{
		// Chamar arquivo das possibilidades 4-x
		if (y == '1')
		{
			// Matrix x, 1
			cells[index] = 1;
			cells[index + 1] = 0;
			cells[index + 2] = 0;
			cells[index + 3] = 0;

			// Matrix x, 2
			cells[index + 4] = 0;
			cells[index + 5] = 2;
			cells[index + 6] = 0;
			cells[index + 7] = 0;

			// Matrix x, 3
			cells[index + 8] = 0;
			cells[index + 9] = 0;
			cells[index + 10] = 3;
			cells[index + 11] = 0;

			// Matrix x, 4
			cells[index + 12] = 0;
			cells[index + 13] = 0;
			cells[index + 14] = 0;
			cells[index + 15] = 4;
		}
		else if (y == '2')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
		else if (y == '3')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
		else if (y == '4')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
	}
}
