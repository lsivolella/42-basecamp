/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:31:05 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/10 18:18:39 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *g_cells;

int main(int argc, char* argv[])
{
	int i;
	int j;
	char *param;

	i = 1;
	j = 0;
	param = (char *)malloc(17);
	g_cells = (char *)malloc(64);
	printf("%d\n", argc);
	// Prevenção a erro não funciona.
	if (argc > 16 && argc < 18)
	{
		for (i = 1; i < argc; i++)
		{
			//printf("argv[%d] = %s\n", argc, argv[i]);
			if (*argv[i] < '1' || *argv[i] > '9')
			{
				printf("Error\n");
				return (0);
			}
			else
			{
				param[i - 1] = *argv[i];
			}
		}
		for (i = 0; i < 16; i++)
		{
			printf("[%c], ", param[i]);
		}
	}
	else
	{
		printf("Error\n");
	}
	printf("\n");


	// Primeira análise: criar a árvore de possibilidade das colunas
	while (j < 12)
	{
		// os vetores das celulas precisam ser variaveis globais
		// para facilitar o acesso por todas as funções
		ft_check_column_possibilities(param[j], param[j + 4], matrixcells, j);
		j++;
	}
	return (0);
}

void ft_check_column_possibilities(int x, int y, char*matrixcells, int startindex)
{
	int index;

	if (startindex < 2)
	{
		// usar matrixcells[0] a matrixcells[3]
		index = 0;
	}
	else if (startindex < 4)
	{
		// usar matrixcells[4] a matrixcells[7]
		index = 16;
	}
	else if (startindex < 8)
	{
		// usar matrixcells[8] a matrixcells[11]
		index = 32;
	}
	else if (startindex < 12)
	{
		// usar matrixcells[12] a matrixcells[15]
		index = 48;
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
			g_cells[index + 4] = 1; //Equivale ao predio 1
			g_cells[index + 5] = 2; //Equivale ao predio 2
			g_cells[index + 6] = 0; //Equivale ao predio 3
			g_cells[index + 7] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 8] = 1; //Equivale ao predio 1
			g_cells[index + 9] = 2; //Equivale ao predio 2
			g_cells[index + 10] = 0; //Equivale ao predio 3
			g_cells[index + 11] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 12] = 0; //Equivale ao predio 1
			g_cells[index + 13] = 0; //Equivale ao predio 2
			g_cells[index + 14] = 3; //Equivale ao predio 3
			g_cells[index + 15] = 0; //Equivale ao predio 4
		}
		else if (y == '3')
		{
			// Matrix x, 1
			g_cells[index] = 0; //Equivale ao predio 1
			g_cells[index + 1] = 0; //Equivale ao predio 2
			g_cells[index + 2] = 0; //Equivale ao predio 3
			g_cells[index + 3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[0 + 4] = 1; //Equivale ao predio 1
			g_cells[1 + 5] = 2; //Equivale ao predio 2
			g_cells[2 + 6] = 3; //Equivale ao predio 3
			g_cells[3 + 7] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4
		}
		else if (y == '4')
		{
			// Matrix x, 1
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4
		}
	}
	else if (x == '2')
	{
		// Chamar arquivo das possibilidades 2-x
		if (y == '1')
		{
			// Matrix x, 1
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 4; //Equivale ao predio 4
		}
		else if (y == '2')
		{
			// Matrix x, 1
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 4; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 4; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4
		}
		else if (y == '3')
		{
			// Matrix 1, 1
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix 1, 2
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 4; //Equivale ao predio 4

			// Matrix 1, 3
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix 1, 4
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4
		}
		else if (y == '4')
		{
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
	else if (x == '3')
	{
		// Chamar arquivo das possibilidades 3-x
		if (y == '1')
		{
			// Matrix x, 1
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 4; //Equivale ao predio 4
		}
		else if (y == '2')
		{
			// Matrix x, 1
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 4; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4
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
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 4; //Equivale ao predio 4
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

void ft_check_line_possibilities(int x, int y)
{
	int i;
	char *g_cells;
	char *g_cells;
	char *g_cells;
	char *g_cells;

	i = 0;
	g_cells = (char *)malloc(4);
	g_cells = (char *)malloc(4);
	g_cells = (char *)malloc(4);
	g_cells = (char *)malloc(4);
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
			// Verificar as possibilidades dessa célula.
			// Caso um número já não fosse possível, ignora-lo.
			// Caso um número seja possível, confirma-lo;
			// Matrix x, 1
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4
		}
		else if (y == '3')
		{
			// Matrix x, 1
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4
		}
		else if (y == '4')
		{
			// Matrix x, 1
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 3; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[0] = 0; //Equivale ao predio 1
			g_cells[1] = 2; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[0] = 1; //Equivale ao predio 1
			g_cells[1] = 0; //Equivale ao predio 2
			g_cells[2] = 0; //Equivale ao predio 3
			g_cells[3] = 0; //Equivale ao predio 4
		}
	}
}