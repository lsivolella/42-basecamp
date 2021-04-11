/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:44:23 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/11 14:46:28 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void ft_check_line_possibilities(char x, char y, int reference, int *cells)
{
	//checar as possibilidades da combinaçao
	//se uma posição possui o número zero, ela não pode receber outro número
	//se a posição possui o número, ele pode ser sobrescrito
	int index;

	index = ft_define_line_starting_index(reference);
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
			cells[index] = 0;
			cells[index + 1] = 0;
			if (cells[index + 2] != 0)
				cells[index + 2] = 3;
			cells[index + 3] = 0;

			if (cells[index + 4] != 0)
				cells[index + 4] = 1;
			if (cells[index + 5])
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
			cells[index + 14] = 0;
			if (cells[index + 15] != 0)
				cells[index + 15] = 4;
		}
		else if (y == '2')
		{
			if (cells[index] != 0)
				cells[index] = 1;
			if (cells[index + 1] != 0)
				cells[index + 1] = 2;
			if (cells[index + 2] != 0)
				cells[index + 2] = 3;
			cells[index + 3] = 0;

			if (cells[index + 4] != 0)
				cells[index + 4] = 1;
			if (cells[index + 5] != 0)
				cells[index + 5] = 2;
			cells[index + 6] = 0;
			if (cells[index + 7] != 0)
				cells[index + 7] = 4;

			if (cells[index + 8] != 0)
				cells[index + 8] = 1;
			if (cells[index + 9] != 0)
				cells[index + 9] = 2;
			cells[index + 10] = 0;
			if (cells[index + 11] != 0)
				cells[index + 11] = 4;

			if (cells[index + 12] != 0)
				cells[index + 12] = 1;
			if (cells[index + 13] != 0)
				cells[index + 13] = 2;
			if (cells[index + 14] != 0)
				cells[index + 14] = 3;
			cells[index + 15] = 0;
		}
		else if (y == '3')
		{
			if (cells[index] != 0)
				cells[index] = 1;
			if (cells[index + 1] != 0)
				cells[index + 1] = 2;
			if (cells[index + 2] != 0)
				cells[index + 2] = 3;
			cells[index + 3] = 0;

			cells[index + 4] = 0;
			cells[index + 5] = 0;
			cells[index + 6] = 0;
			if (cells[index + 7] != 0)
				cells[index + 7] = 4;

			cells[index + 8] = 0;
			if (cells[index + 9] != 0)
				cells[index + 9] = 2;
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
			// Sem possibilidades.
			// Encerrar o programa com mensagem de erro.
		}
	}
	else if (x == '3')
	{
		// Chamar arquivo das possibilidades 3-x
		if (y == '1')
		{
			if (cells[index] != 0)
				cells[index] = 1;
			if (cells[index + 1] != 0)
				cells[index + 1] = 2;
			cells[index + 2] = 0;
			cells[index + 3] = 0;

			if (cells[index + 4] != 0)
				cells[index + 4] = 1;
			cells[index + 5] = 0;
			if (cells[index + 6] != 0)
				cells[index + 6] = 3;
			cells[index + 7] = 0;

			if (cells[index + 8] != 0)
				cells[index + 8] = 1;
			if (cells[index + 9] != 0)
				cells[index + 9] = 2;
			if (cells[index + 10] != 0)
				cells[index + 10] = 3;
			cells[index + 11] = 0;

			cells[index + 12] = 0;
			cells[index + 13] = 0;
			cells[index + 14] = 0;
			if (cells[index + 15] != 0)
				cells[index + 15] = 4;
		}
		else if (y == '2')
		{
			if (cells[index] != 0)
				cells[index] = 1;
			if (cells[index + 1] != 0)
				cells[index + 1] = 2;
			cells[index + 2] = 0;
			cells[index + 3] = 0;

			cells[index + 4] = 0;
			if (cells[index + 5] != 0)
				cells[index + 5] = 2;
			if (cells[index + 6] != 0)
				cells[index + 6] = 3;
			cells[index + 7] = 0;

			cells[index + 8] = 0;
			cells[index + 9] = 0;
			cells[index + 10] = 0;
			if (cells[index + 11] != 0)
				cells[index + 11] = 4;

			if (cells[index + 12] != 0)
				cells[index + 12] = 1;
			if (cells[index + 13] != 0)
				cells[index + 13] = 2;
			if (cells[index + 14] != 0)
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
			if (cells[index] != 0)
				cells[index] = 1;
			cells[index + 1] = 0;
			cells[index + 2] = 0;
			cells[index + 3] = 0;

			cells[index + 4] = 0;
			if (cells[index + 5] != 0)
				cells[index + 5] = 2;
			cells[index + 6] = 0;
			cells[index + 7] = 0;

			cells[index + 8] = 0;
			cells[index + 9] = 0;
			if (cells[index + 10] != 0)
				cells[index + 10] = 3;
			cells[index + 11] = 0;

			cells[index + 12] = 0;
			cells[index + 13] = 0;
			cells[index + 14] = 0;
			if (cells[index + 15] != 0)
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