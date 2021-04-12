/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:44:23 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 02:30:47 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_define_line_starting_index(int reference)
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

int		ft_check_line_possibilities(char x, char y, int ref, int *cells)
{
	int index;
	int solution;

	solution = 1;
	index = ft_define_line_starting_index(ref);
	if (x == '1')
	{
		return (ft_line_p_x1(y, index, cells));
	}
	else if (x == '2')
	{
		return (ft_line_p_x2(y, index, cells));
	}
	else if (x == '3')
	{
		return (ft_line_p_x3(y, index, cells));
	}
	else if (x == '4')
	{
		return (ft_line_p_x4(y, index, cells));
	}
	return (solution);
}
