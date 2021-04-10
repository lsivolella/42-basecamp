/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:31:05 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/10 18:10:59 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *g_cel11;
char *g_cel12;
char *g_cel13;
char *g_cel14;
char *g_cel21;
char *g_cel22;
char *g_cel23;
char *g_cel24;
char *g_cel31;
char *g_cel32;
char *g_cel33;
char *g_cel34;
char *g_cel41;
char *g_cel42;
char *g_cel43;
char *g_cel44;


int main(int argc, char* argv[])
{
	int i;
	int j;
	int l;
	char *param;
	char *matrixcells;

	i = 1;
	j = 0;
	param = (char *)malloc(17);
	matrixcells = (char *)malloc(17);
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

	ft_initialize_matrix_cells(matrixcells);
	ft_initialize_cells(matrixcells[l]);
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

void ft_initialize_matrix_cells(char *matrixcells)
{
	matrixcells[0] = g_cel11;
	matrixcells[1] = g_cel12;
	matrixcells[2] = g_cel13;
	matrixcells[3] = g_cel14;
	matrixcells[4] = g_cel21;
	matrixcells[5] = g_cel22;
	matrixcells[6] = g_cel23;
	matrixcells[7] = g_cel24;
	matrixcells[8] = g_cel31;
	matrixcells[9] = g_cel32;
	matrixcells[10] = g_cel33;
	matrixcells[11] = g_cel34;
	matrixcells[12] = g_cel41;
	matrixcells[13] = g_cel42;
	matrixcells[14] = g_cel43;
	matrixcells[15] = g_cel44;
}

void ft_initialize_matrix_cells(char *matrixcells)
{
	g_cel11 = (char *)malloc(5);
	g_cel12 = (char *)malloc(5);
	g_cel13 = (char *)malloc(5);
	g_cel14 = (char *)malloc(5);
	g_cel21 = (char *)malloc(5);
	g_cel22 = (char *)malloc(5);
	g_cel23 = (char *)malloc(5);
	g_cel24 = (char *)malloc(5);
	g_cel31 = (char *)malloc(5);
	g_cel32 = (char *)malloc(5);
	g_cel33 = (char *)malloc(5);
	g_cel34 = (char *)malloc(5);
	g_cel41 = (char *)malloc(5);
	g_cel42 = (char *)malloc(5);
	g_cel43 = (char *)malloc(5);
	g_cel44 = (char *)malloc(5);
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
		index = 4;
	}
	else if (startindex < 8)
	{
		// usar matrixcells[8] a matrixcells[11]
		index = 8;
	}
	else if (startindex < 12)
	{
		// usar matrixcells[12] a matrixcells[15]
		index = 9;
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
			matrixcells[index] = 0; //Equivale ao predio 1
			matrixcells[index + 1] = 0; //Equivale ao predio 2
			matrixcells[index + 2] = 0; //Equivale ao predio 3
			matrixcells[index + 3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			cellvector2[0] = 1; //Equivale ao predio 1
			cellvector2[1] = 2; //Equivale ao predio 2
			cellvector2[2] = 0; //Equivale ao predio 3
			cellvector2[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			cellvector3[0] = 1; //Equivale ao predio 1
			cellvector3[1] = 2; //Equivale ao predio 2
			cellvector3[2] = 0; //Equivale ao predio 3
			cellvector3[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			cellvector4[0] = 0; //Equivale ao predio 1
			cellvector4[1] = 0; //Equivale ao predio 2
			cellvector4[2] = 3; //Equivale ao predio 3
			cellvector4[3] = 0; //Equivale ao predio 4
		}
		else if (y == '3')
		{
			// Matrix x, 1
			cellvector1[0] = 0; //Equivale ao predio 1
			cellvector1[1] = 0; //Equivale ao predio 2
			cellvector1[2] = 0; //Equivale ao predio 3
			cellvector1[3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			cellvector2[0] = 1; //Equivale ao predio 1
			cellvector2[1] = 2; //Equivale ao predio 2
			cellvector2[2] = 3; //Equivale ao predio 3
			cellvector2[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			cellvector3[0] = 1; //Equivale ao predio 1
			cellvector3[1] = 0; //Equivale ao predio 2
			cellvector3[2] = 3; //Equivale ao predio 3
			cellvector3[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			cellvector4[0] = 1; //Equivale ao predio 1
			cellvector4[1] = 2; //Equivale ao predio 2
			cellvector4[2] = 0; //Equivale ao predio 3
			cellvector4[3] = 0; //Equivale ao predio 4
		}
		else if (y == '4')
		{
			// Matrix x, 1
			cellvector1[0] = 0; //Equivale ao predio 1
			cellvector1[1] = 0; //Equivale ao predio 2
			cellvector1[2] = 0; //Equivale ao predio 3
			cellvector1[3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			cellvector2[0] = 0; //Equivale ao predio 1
			cellvector2[1] = 0; //Equivale ao predio 2
			cellvector2[2] = 3; //Equivale ao predio 3
			cellvector2[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			cellvector3[0] = 0; //Equivale ao predio 1
			cellvector3[1] = 2; //Equivale ao predio 2
			cellvector3[2] = 0; //Equivale ao predio 3
			cellvector3[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			cellvector4[0] = 1; //Equivale ao predio 1
			cellvector4[1] = 0; //Equivale ao predio 2
			cellvector4[2] = 0; //Equivale ao predio 3
			cellvector4[3] = 0; //Equivale ao predio 4
		}
	}
	else if (x == '2')
	{
		// Chamar arquivo das possibilidades 2-x
		if (y == '1')
		{
			// Matrix x, 1
			cellvector1[0] = 0; //Equivale ao predio 1
			cellvector1[1] = 0; //Equivale ao predio 2
			cellvector1[2] = 3; //Equivale ao predio 3
			cellvector1[3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			cellvector2[0] = 1; //Equivale ao predio 1
			cellvector2[1] = 2; //Equivale ao predio 2
			cellvector2[2] = 0; //Equivale ao predio 3
			cellvector2[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			cellvector3[0] = 1; //Equivale ao predio 1
			cellvector3[1] = 2; //Equivale ao predio 2
			cellvector3[2] = 0; //Equivale ao predio 3
			cellvector3[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			cellvector4[0] = 0; //Equivale ao predio 1
			cellvector4[1] = 0; //Equivale ao predio 2
			cellvector4[2] = 0; //Equivale ao predio 3
			cellvector4[3] = 4; //Equivale ao predio 4
		}
		else if (y == '2')
		{
			// Matrix x, 1
			cellvector1[0] = 1; //Equivale ao predio 1
			cellvector1[1] = 2; //Equivale ao predio 2
			cellvector1[2] = 3; //Equivale ao predio 3
			cellvector1[3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			cellvector2[0] = 1; //Equivale ao predio 1
			cellvector2[1] = 2; //Equivale ao predio 2
			cellvector2[2] = 0; //Equivale ao predio 3
			cellvector2[3] = 4; //Equivale ao predio 4

			// Matrix x, 3
			cellvector3[0] = 1; //Equivale ao predio 1
			cellvector3[1] = 2; //Equivale ao predio 2
			cellvector3[2] = 0; //Equivale ao predio 3
			cellvector3[3] = 4; //Equivale ao predio 4

			// Matrix x, 4
			cellvector4[0] = 1; //Equivale ao predio 1
			cellvector4[1] = 2; //Equivale ao predio 2
			cellvector4[2] = 3; //Equivale ao predio 3
			cellvector4[3] = 0; //Equivale ao predio 4
		}
		else if (y == '3')
		{
			// Matrix 1, 1
			cellvector1[0] = 1; //Equivale ao predio 1
			cellvector1[1] = 2; //Equivale ao predio 2
			cellvector1[2] = 3; //Equivale ao predio 3
			cellvector1[3] = 0; //Equivale ao predio 4

			// Matrix 1, 2
			cellvector2[0] = 0; //Equivale ao predio 1
			cellvector2[1] = 0; //Equivale ao predio 2
			cellvector2[2] = 0; //Equivale ao predio 3
			cellvector2[3] = 4; //Equivale ao predio 4

			// Matrix 1, 3
			cellvector3[0] = 0; //Equivale ao predio 1
			cellvector3[1] = 2; //Equivale ao predio 2
			cellvector3[2] = 3; //Equivale ao predio 3
			cellvector3[3] = 0; //Equivale ao predio 4

			// Matrix 1, 4
			cellvector4[0] = 1; //Equivale ao predio 1
			cellvector4[1] = 2; //Equivale ao predio 2
			cellvector4[2] = 0; //Equivale ao predio 3
			cellvector4[3] = 0; //Equivale ao predio 4
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
			cellvector1[0] = 1; //Equivale ao predio 1
			cellvector1[1] = 2; //Equivale ao predio 2
			cellvector1[2] = 0; //Equivale ao predio 3
			cellvector1[3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			cellvector2[0] = 1; //Equivale ao predio 1
			cellvector2[1] = 0; //Equivale ao predio 2
			cellvector2[2] = 3; //Equivale ao predio 3
			cellvector2[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			cellvector3[0] = 1; //Equivale ao predio 1
			cellvector3[1] = 2; //Equivale ao predio 2
			cellvector3[2] = 3; //Equivale ao predio 3
			cellvector3[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			cellvector4[0] = 0; //Equivale ao predio 1
			cellvector4[1] = 0; //Equivale ao predio 2
			cellvector4[2] = 0; //Equivale ao predio 3
			cellvector4[3] = 4; //Equivale ao predio 4
		}
		else if (y == '2')
		{
			// Matrix x, 1
			cellvector1[0] = 1; //Equivale ao predio 1
			cellvector1[1] = 2; //Equivale ao predio 2
			cellvector1[2] = 0; //Equivale ao predio 3
			cellvector1[3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			cellvector2[0] = 0; //Equivale ao predio 1
			cellvector2[1] = 2; //Equivale ao predio 2
			cellvector2[2] = 3; //Equivale ao predio 3
			cellvector2[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			cellvector3[0] = 0; //Equivale ao predio 1
			cellvector3[1] = 0; //Equivale ao predio 2
			cellvector3[2] = 0; //Equivale ao predio 3
			cellvector3[3] = 4; //Equivale ao predio 4

			// Matrix x, 4
			cellvector4[0] = 1; //Equivale ao predio 1
			cellvector4[1] = 2; //Equivale ao predio 2
			cellvector4[2] = 3; //Equivale ao predio 3
			cellvector4[3] = 0; //Equivale ao predio 4
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
			cellvector1[0] = 1; //Equivale ao predio 1
			cellvector1[1] = 0; //Equivale ao predio 2
			cellvector1[2] = 0; //Equivale ao predio 3
			cellvector1[3] = 0; //Equivale ao predio 4

			// Matrix x, 2
			cellvector2[0] = 0; //Equivale ao predio 1
			cellvector2[1] = 2; //Equivale ao predio 2
			cellvector2[2] = 0; //Equivale ao predio 3
			cellvector2[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			cellvector3[0] = 0; //Equivale ao predio 1
			cellvector3[1] = 0; //Equivale ao predio 2
			cellvector3[2] = 3; //Equivale ao predio 3
			cellvector3[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			cellvector4[0] = 0; //Equivale ao predio 1
			cellvector4[1] = 0; //Equivale ao predio 2
			cellvector4[2] = 0; //Equivale ao predio 3
			cellvector4[3] = 4; //Equivale ao predio 4
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
	char *cellvector1;
	char *cellvector2;
	char *cellvector3;
	char *cellvector4;

	i = 0;
	cellvector1 = (char *)malloc(4);
	cellvector2 = (char *)malloc(4);
	cellvector3 = (char *)malloc(4);
	cellvector4 = (char *)malloc(4);
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
			cellvector1[0] = 0; //Equivale ao predio 1
			cellvector1[1] = 0; //Equivale ao predio 2
			cellvector1[2] = 0; //Equivale ao predio 3
			cellvector1[3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			cellvector2[0] = 1; //Equivale ao predio 1
			cellvector2[1] = 2; //Equivale ao predio 2
			cellvector2[2] = 0; //Equivale ao predio 3
			cellvector2[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			cellvector3[0] = 1; //Equivale ao predio 1
			cellvector3[1] = 2; //Equivale ao predio 2
			cellvector3[2] = 0; //Equivale ao predio 3
			cellvector3[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			cellvector4[0] = 0; //Equivale ao predio 1
			cellvector4[1] = 0; //Equivale ao predio 2
			cellvector4[2] = 3; //Equivale ao predio 3
			cellvector4[3] = 0; //Equivale ao predio 4
		}
		else if (y == '3')
		{
			// Matrix x, 1
			cellvector1[0] = 0; //Equivale ao predio 1
			cellvector1[1] = 0; //Equivale ao predio 2
			cellvector1[2] = 0; //Equivale ao predio 3
			cellvector1[3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			cellvector2[0] = 1; //Equivale ao predio 1
			cellvector2[1] = 2; //Equivale ao predio 2
			cellvector2[2] = 3; //Equivale ao predio 3
			cellvector2[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			cellvector3[0] = 1; //Equivale ao predio 1
			cellvector3[1] = 0; //Equivale ao predio 2
			cellvector3[2] = 3; //Equivale ao predio 3
			cellvector3[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			cellvector4[0] = 1; //Equivale ao predio 1
			cellvector4[1] = 2; //Equivale ao predio 2
			cellvector4[2] = 0; //Equivale ao predio 3
			cellvector4[3] = 0; //Equivale ao predio 4
		}
		else if (y == '4')
		{
			// Matrix x, 1
			cellvector1[0] = 0; //Equivale ao predio 1
			cellvector1[1] = 0; //Equivale ao predio 2
			cellvector1[2] = 0; //Equivale ao predio 3
			cellvector1[3] = 4; //Equivale ao predio 4

			// Matrix x, 2
			cellvector2[0] = 0; //Equivale ao predio 1
			cellvector2[1] = 0; //Equivale ao predio 2
			cellvector2[2] = 3; //Equivale ao predio 3
			cellvector2[3] = 0; //Equivale ao predio 4

			// Matrix x, 3
			cellvector3[0] = 0; //Equivale ao predio 1
			cellvector3[1] = 2; //Equivale ao predio 2
			cellvector3[2] = 0; //Equivale ao predio 3
			cellvector3[3] = 0; //Equivale ao predio 4

			// Matrix x, 4
			cellvector4[0] = 1; //Equivale ao predio 1
			cellvector4[1] = 0; //Equivale ao predio 2
			cellvector4[2] = 0; //Equivale ao predio 3
			cellvector4[3] = 0; //Equivale ao predio 4
		}
	}
}