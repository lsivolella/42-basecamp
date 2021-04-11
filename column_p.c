/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:43:47 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/11 14:46:23 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void ft_check_column_possibilities(char x, char y, int reference, int *cells)
{
	int index;

	index = ft_define_column_starting_index(reference);
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