/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:31:05 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/10 19:14:26 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_check_column_possibilities(int x, int y, int startindex);

char *g_cells;

int main(int argc, char* argv[])
{
	int i;
	int j;
	int m;
	int n;
	int o;
	int p;
	char *param;

	i = 1;
	j = 0;
	p = 0;
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
	while (j < 5)
	{
		// os vetores das celulas precisam ser variaveis globais
		// para facilitar o acesso por todas as funções
		ft_check_column_possibilities(param[j], param[j + 4], j);
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
				printf("%d/", g_cells[p]);
				p++;
				o++;
			}
			n++;
			printf(", ");
		}
		m++;
		printf("\n");
	}
	return (0);
}

void ft_check_column_possibilities(int x, int y, int startindex)
{
	int index;

	if (startindex == 1)
	{
		// usar matrixcells[0] a matrixcells[3]
		index = 0;
	}
	else if (startindex == 2)
	{
		// usar matrixcells[4] a matrixcells[7]
		index = 16;
	}
	else if (startindex == 3)
	{
		// usar matrixcells[8] a matrixcells[11]
		index = 32;
	}
	else if (startindex == 4)
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
			g_cells[index + 4] = 1; //Equivale ao predio 1
			g_cells[index + 5] = 2; //Equivale ao predio 2
			g_cells[index + 6] = 3; //Equivale ao predio 3
			g_cells[index + 7] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 8] = 1; //Equivale ao predio 1
			g_cells[index + 9] = 0; //Equivale ao predio 2
			g_cells[index + 10] = 3; //Equivale ao predio 3
			g_cells[index + 11] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 12] = 1; //Equivale ao predio 1
			g_cells[index + 13] = 2; //Equivale ao predio 2
			g_cells[index + 14] = 0; //Equivale ao predio 3
			g_cells[index + 15] = 0; //Equivale ao predio 4
		}
		else if (y == '4')
		{
			// Matrix x, 1
			g_cells[index] = 0; //Equivale ao predio 1
			g_cells[index + 1] = 0; //Equivale ao predio 2
			g_cells[index + 2] = 0; //Equivale ao predio 3
			g_cells[index + 3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[index + 4] = 0; //Equivale ao predio 1
			g_cells[index + 5] = 0; //Equivale ao predio 2
			g_cells[index + 6] = 3; //Equivale ao predio 3
			g_cells[index + 7] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 8] = 0; //Equivale ao predio 1
			g_cells[index + 9] = 2; //Equivale ao predio 2
			g_cells[index + 10] = 0; //Equivale ao predio 3
			g_cells[index + 11] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 12] = 1; //Equivale ao predio 1
			g_cells[index + 13] = 0; //Equivale ao predio 2
			g_cells[index + 14] = 0; //Equivale ao predio 3
			g_cells[index + 15] = 0; //Equivale ao predio 4
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
			g_cells[index + 14] = 0; //Equivale ao predio 3
			g_cells[index + 15] = 4; //Equivale ao predio 4
		}
		else if (y == '2')
		{
			// Matrix x, 1
			g_cells[index] = 1; //Equivale ao predio 1
			g_cells[index + 1] = 2; //Equivale ao predio 2
			g_cells[index + 2] = 3; //Equivale ao predio 3
			g_cells[index + 3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[index + 4] = 1; //Equivale ao predio 1
			g_cells[index + 5] = 2; //Equivale ao predio 2
			g_cells[index + 6] = 0; //Equivale ao predio 3
			g_cells[index + 7] = 4; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 8] = 1; //Equivale ao predio 1
			g_cells[index + 9] = 2; //Equivale ao predio 2
			g_cells[index + 10] = 0; //Equivale ao predio 3
			g_cells[index + 11] = 4; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 12] = 1; //Equivale ao predio 1
			g_cells[index + 13] = 2; //Equivale ao predio 2
			g_cells[index + 14] = 3; //Equivale ao predio 3
			g_cells[index + 15] = 0; //Equivale ao predio 4
		}
		else if (y == '3')
		{
			// Matrix 1, 1
			g_cells[index] = 1; //Equivale ao predio 1
			g_cells[index + 1] = 2; //Equivale ao predio 2
			g_cells[index + 2] = 3; //Equivale ao predio 3
			g_cells[index + 3] = 0; //Equivale ao predio 4

			// Matrix 1, 2
			g_cells[index + 4] = 0; //Equivale ao predio 1
			g_cells[index + 5] = 0; //Equivale ao predio 2
			g_cells[index + 6] = 0; //Equivale ao predio 3
			g_cells[index + 7] = 4; //Equivale ao predio 4

			// Matrix 1, 3
			g_cells[index + 8] = 0; //Equivale ao predio 1
			g_cells[index + 9] = 2; //Equivale ao predio 2
			g_cells[index + 10] = 3; //Equivale ao predio 3
			g_cells[index + 11] = 0; //Equivale ao predio 4

			// Matrix 1, 4
			g_cells[index + 12] = 1; //Equivale ao predio 1
			g_cells[index + 13] = 2; //Equivale ao predio 2
			g_cells[index + 14] = 0; //Equivale ao predio 3
			g_cells[index + 15] = 0; //Equivale ao predio 4
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
			g_cells[index + 4] = 1; //Equivale ao predio 1
			g_cells[index + 5] = 0; //Equivale ao predio 2
			g_cells[index + 6] = 3; //Equivale ao predio 3
			g_cells[index + 7] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 8] = 1; //Equivale ao predio 1
			g_cells[index + 9] = 2; //Equivale ao predio 2
			g_cells[index + 10] = 3; //Equivale ao predio 3
			g_cells[index + 11] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 12] = 0; //Equivale ao predio 1
			g_cells[index + 13] = 0; //Equivale ao predio 2
			g_cells[index + 14] = 0; //Equivale ao predio 3
			g_cells[index + 15] = 4; //Equivale ao predio 4
		}
		else if (y == '2')
		{
			// Matrix x, 1
			g_cells[index] = 1; //Equivale ao predio 1
			g_cells[index + 1] = 2; //Equivale ao predio 2
			g_cells[index + 2] = 0; //Equivale ao predio 3
			g_cells[index + 3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			g_cells[index + 4] = 0; //Equivale ao predio 1
			g_cells[index + 5] = 2; //Equivale ao predio 2
			g_cells[index + 6] = 3; //Equivale ao predio 3
			g_cells[index + 7] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 8] = 0; //Equivale ao predio 1
			g_cells[index + 9] = 0; //Equivale ao predio 2
			g_cells[index + 10] = 0; //Equivale ao predio 3
			g_cells[index + 11] = 4; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 12] = 1; //Equivale ao predio 1
			g_cells[index + 13] = 2; //Equivale ao predio 2
			g_cells[index + 14] = 3; //Equivale ao predio 3
			g_cells[index + 15] = 0; //Equivale ao predio 4
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
			g_cells[index + 4] = 0; //Equivale ao predio 1
			g_cells[index + 5] = 2; //Equivale ao predio 2
			g_cells[index + 6] = 0; //Equivale ao predio 3
			g_cells[index + 7] = 0; //Equivale ao predio 4

			// Matrix x, 3
			g_cells[index + 8] = 0; //Equivale ao predio 1
			g_cells[index + 9] = 0; //Equivale ao predio 2
			g_cells[index + 10] = 3; //Equivale ao predio 3
			g_cells[index + 11] = 0; //Equivale ao predio 4

			// Matrix x, 4
			g_cells[index + 12] = 0; //Equivale ao predio 1
			g_cells[index + 13] = 0; //Equivale ao predio 2
			g_cells[index + 14] = 0; //Equivale ao predio 3
			g_cells[index + 15] = 4; //Equivale ao predio 4
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