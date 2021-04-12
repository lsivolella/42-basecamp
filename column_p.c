/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:43:47 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 02:30:35 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_column_possibilities(char x, char y, int ref, int *cells)
{
	int index;
	int solution;

	solution = 1;
	index = ft_define_column_starting_index(ref);
	if (x == '1')
	{
		return (ft_column_p_x1(y, index, cells));
	}
	else if (x == '2')
	{
		return (ft_column_p_x2(y, index, cells));
	}
	else if (x == '3')
	{
		return (ft_column_p_x3(y, index, cells));
	}
	else if (x == '4')
	{
		return (ft_column_p_x4(y, index, cells));
	}
	return (solution);
}
