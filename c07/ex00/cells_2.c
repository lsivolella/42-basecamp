/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cells_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:06:51 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 02:11:40 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_cross_check_cell5(int *cells, int index)
{
	ft_cc_first_column(cells, index);
	ft_cc_second_line(cells, index);
}

void	ft_cross_check_cell6(int *cells, int index)
{
	ft_cc_second_column(cells, index);
	ft_cc_second_line(cells, index);
}

void	ft_cross_check_cell7(int *cells, int index)
{
	ft_cc_third_column(cells, index);
	ft_cc_second_line(cells, index);
}

void	ft_cross_check_cell8(int *cells, int index)
{
	ft_cc_fourth_column(cells, index);
	ft_cc_second_line(cells, index);
}
