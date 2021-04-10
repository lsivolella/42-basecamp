/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:31:05 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/10 22:45:33 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_check_column_possibilities(char x, char y, int startindex, int *g_cells);

//int *g_cells;

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
	int *g_cells;

	i = 0;
	j = 0;
	m = 0;
	n = 0;
	o = 0;
	p = 0;
	param = (char *)malloc(17);
	g_cells = (int *)malloc(64 * 4);
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
		ft_check_column_possibilities(param[j], param[j + 4], j, g_cells);
		j++;
	}
	while (m < 4)
	{
		n = 0;
		while (n < 4)
		{
			o = 0;
			while (o < 4)
			{
				if (g_cells[p] != 100)
				{
					printf("%d/", g_cells[p]);
				}
				p++;
				o++;
			}
			n++;
			printf(",    ");
		}
		m++;
		printf("\n");
		printf("\n");
	}
	return (0);
}

void ft_check_column_possibilities(char x, char y, int startindex, int *g_cells)
{
	int index;

	if (startindex == 0)
	{
		// usar matrixcells[0] a matrixcells[3]
		index = 0;
	}
	else if (startindex == 1)
	{
		// usar matrixcells[4] a matrixcells[7]
		index = 4;
	}
	else if (startindex == 2)
	{
		// usar matrixcells[8] a matrixcells[11]
		index = 8;
	}
	else if (startindex == 3)
	{
		// usar matrixcells[12] a matrixcells[15]
		index = 12;
	}
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
			// Matrix x, 1
			g_cells[index] = 0; //Equivale ao predio 1
			g_cells[index + 1] = 0; //Equivale ao predio 2
			g_cells[index + 2] = 0; //Equivale ao predio 3
			g_cells[index + 3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[index + 16] = 1; //Equivale ao predio 1
			g_cells[index + 17] = 2; //Equivale ao predio 2
			g_cells[index + 18] = 0; //Equivale ao predio 3
			g_cells[index + 19] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 32] = 1; //Equivale ao predio 1
			g_cells[index + 33] = 2; //Equivale ao predio 2
			g_cells[index + 34] = 0; //Equivale ao predio 3
			g_cells[index + 35] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 48] = 0; //Equivale ao predio 1
			g_cells[index + 49] = 0; //Equivale ao predio 2
			g_cells[index + 50] = 3; //Equivale ao predio 3
			g_cells[index + 51] = 0; //Equivale ao predio 4
		}
		else if (y == '3')
		{
			// Matrix x, 1
			g_cells[index] = 0; //Equivale ao predio 1
			g_cells[index + 1] = 0; //Equivale ao predio 2
			g_cells[index + 2] = 0; //Equivale ao predio 3
			g_cells[index + 3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[index + 16] = 1; //Equivale ao predio 1
			g_cells[index + 17] = 2; //Equivale ao predio 2
			g_cells[index + 18] = 3; //Equivale ao predio 3
			g_cells[index + 19] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 32] = 1; //Equivale ao predio 1
			g_cells[index + 33] = 0; //Equivale ao predio 2
			g_cells[index + 34] = 3; //Equivale ao predio 3
			g_cells[index + 35] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 48] = 1; //Equivale ao predio 1
			g_cells[index + 49] = 2; //Equivale ao predio 2
			g_cells[index + 50] = 0; //Equivale ao predio 3
			g_cells[index + 51] = 0; //Equivale ao predio 4
		}
		else if (y == '4')
		{
			// Matrix x, 1
			g_cells[index] = 0; //Equivale ao predio 1
			g_cells[index + 1] = 0; //Equivale ao predio 2
			g_cells[index + 2] = 0; //Equivale ao predio 3
			g_cells[index + 3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[index + 16] = 0; //Equivale ao predio 1
			g_cells[index + 17] = 0; //Equivale ao predio 2
			g_cells[index + 18] = 3; //Equivale ao predio 3
			g_cells[index + 19] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 32] = 0; //Equivale ao predio 1
			g_cells[index + 33] = 2; //Equivale ao predio 2
			g_cells[index + 34] = 0; //Equivale ao predio 3
			g_cells[index + 35] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 48] = 1; //Equivale ao predio 1
			g_cells[index + 49] = 0; //Equivale ao predio 2
			g_cells[index + 50] = 0; //Equivale ao predio 3
			g_cells[index + 51] = 0; //Equivale ao predio 4
		}
	}
	else if (x == '2')
	{
		// Chamar arquivo das possibilidades 2-x
		if (y == '1')
		{
			// Matrix x, 1
			g_cells[index] = 0; //Equivale ao predio 1
			g_cells[index + 1] = 0; //Equivale ao predio 2
			g_cells[index + 2] = 3; //Equivale ao predio 3
			g_cells[index + 3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[index + 16] = 1; //Equivale ao predio 1
			g_cells[index + 17] = 2; //Equivale ao predio 2
			g_cells[index + 18] = 0; //Equivale ao predio 3
			g_cells[index + 19] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 32] = 1; //Equivale ao predio 1
			g_cells[index + 33] = 2; //Equivale ao predio 2
			g_cells[index + 34] = 0; //Equivale ao predio 3
			g_cells[index + 35] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 48] = 0; //Equivale ao predio 1
			g_cells[index + 49] = 0; //Equivale ao predio 2
			g_cells[index + 50] = 0; //Equivale ao predio 3
			g_cells[index + 51] = 4; //Equivale ao predio 4
		}
		else if (y == '2')
		{
			// Matrix x, 1
			g_cells[index] = 1; //Equivale ao predio 1
			g_cells[index + 1] = 2; //Equivale ao predio 2
			g_cells[index + 2] = 3; //Equivale ao predio 3
			g_cells[index + 3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[index + 16] = 1; //Equivale ao predio 1
			g_cells[index + 17] = 2; //Equivale ao predio 2
			g_cells[index + 18] = 0; //Equivale ao predio 3
			g_cells[index + 19] = 4; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 32] = 1; //Equivale ao predio 1
			g_cells[index + 33] = 2; //Equivale ao predio 2
			g_cells[index + 34] = 0; //Equivale ao predio 3
			g_cells[index + 35] = 4; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 48] = 1; //Equivale ao predio 1
			g_cells[index + 49] = 2; //Equivale ao predio 2
			g_cells[index + 50] = 3; //Equivale ao predio 3
			g_cells[index + 51] = 0; //Equivale ao predio 4
		}
		else if (y == '3')
		{
			// Matrix 1, 1
			g_cells[index] = 1; //Equivale ao predio 1
			g_cells[index + 1] = 2; //Equivale ao predio 2
			g_cells[index + 2] = 3; //Equivale ao predio 3
			g_cells[index + 3] = 0; //Equivale ao predio 4

			// Matrix 1, 2
			g_cells[index + 16] = 0; //Equivale ao predio 1
			g_cells[index + 17] = 0; //Equivale ao predio 2
			g_cells[index + 18] = 0; //Equivale ao predio 3
			g_cells[index + 19] = 4; //Equivale ao predio 4

			// Matrix 1, 3
			g_cells[index + 32] = 0; //Equivale ao predio 1
			g_cells[index + 33] = 2; //Equivale ao predio 2
			g_cells[index + 34] = 3; //Equivale ao predio 3
			g_cells[index + 35] = 0; //Equivale ao predio 4

			// Matrix 1, 4
			g_cells[index + 48] = 1; //Equivale ao predio 1
			g_cells[index + 49] = 2; //Equivale ao predio 2
			g_cells[index + 50] = 0; //Equivale ao predio 3
			g_cells[index + 51] = 0; //Equivale ao predio 4
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
			g_cells[index] = 1; //Equivale ao predio 1
			g_cells[index + 1] = 2; //Equivale ao predio 2
			g_cells[index + 2] = 0; //Equivale ao predio 3
			g_cells[index + 3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[index + 16] = 1; //Equivale ao predio 1
			g_cells[index + 17] = 0; //Equivale ao predio 2
			g_cells[index + 18] = 3; //Equivale ao predio 3
			g_cells[index + 19] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 32] = 1; //Equivale ao predio 1
			g_cells[index + 33] = 2; //Equivale ao predio 2
			g_cells[index + 34] = 3; //Equivale ao predio 3
			g_cells[index + 35] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 48] = 0; //Equivale ao predio 1
			g_cells[index + 49] = 0; //Equivale ao predio 2
			g_cells[index + 50] = 0; //Equivale ao predio 3
			g_cells[index + 51] = 4; //Equivale ao predio 4
		}
		else if (y == '2')
		{
			// Matrix x, 1
			g_cells[index] = 1; //Equivale ao predio 1
			g_cells[index + 1] = 2; //Equivale ao predio 2
			g_cells[index + 2] = 0; //Equivale ao predio 3
			g_cells[index + 3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[index + 16] = 0; //Equivale ao predio 1
			g_cells[index + 17] = 2; //Equivale ao predio 2
			g_cells[index + 18] = 3; //Equivale ao predio 3
			g_cells[index + 19] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 32] = 0; //Equivale ao predio 1
			g_cells[index + 33] = 0; //Equivale ao predio 2
			g_cells[index + 34] = 0; //Equivale ao predio 3
			g_cells[index + 35] = 4; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 48] = 1; //Equivale ao predio 1
			g_cells[index + 49] = 2; //Equivale ao predio 2
			g_cells[index + 50] = 3; //Equivale ao predio 3
			g_cells[index + 51] = 0; //Equivale ao predio 4
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
			g_cells[index] = 1; //Equivale ao predio 1
			g_cells[index + 1] = 0; //Equivale ao predio 2
			g_cells[index + 2] = 0; //Equivale ao predio 3
			g_cells[index + 3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[index + 16] = 0; //Equivale ao predio 1
			g_cells[index + 17] = 2; //Equivale ao predio 2
			g_cells[index + 18] = 0; //Equivale ao predio 3
			g_cells[index + 19] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 32] = 0; //Equivale ao predio 1
			g_cells[index + 33] = 0; //Equivale ao predio 2
			g_cells[index + 34] = 3; //Equivale ao predio 3
			g_cells[index + 35] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 48] = 0; //Equivale ao predio 1
			g_cells[index + 49] = 0; //Equivale ao predio 2
			g_cells[index + 50] = 0; //Equivale ao predio 3
			g_cells[index + 51] = 4; //Equivale ao predio 4
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

/*
void ft_check_line_possibilities(int x, int y)
{
	//checar as possibilidades da combinaçao
	//se uma posição possui o número zero, ela não pode receber outro número
	//se a posição possui o número, ele pode ser sobrescrito
}
*/