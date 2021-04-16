/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cells_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:02:18 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 02:11:33 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_cross_check_cell1(int *cells, int index)
{
	ft_cc_first_column(cells, index);
	ft_cc_first_line(cells, index);
}

void	ft_cross_check_cell2(int *cells, int index)
{
	ft_cc_second_column(cells, index);
	ft_cc_first_line(cells, index);
}

void	ft_cross_check_cell3(int *cells, int index)
{
	ft_cc_third_column(cells, index);
	ft_cc_first_line(cells, index);
}

void	ft_cross_check_cell4(int *cells, int index)
{
	ft_cc_fourth_column(cells, index);
	ft_cc_first_line(cells, index);
}
