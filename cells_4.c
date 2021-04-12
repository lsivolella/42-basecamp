/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cells_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:07:06 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 02:11:45 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_cross_check_cell13(int *cells, int index)
{
	ft_cc_first_column(cells, index);
	ft_cc_fourth_line(cells, index);
}

void	ft_cross_check_cell14(int *cells, int index)
{
	ft_cc_second_column(cells, index);
	ft_cc_fourth_line(cells, index);
}

void	ft_cross_check_cell15(int *cells, int index)
{
	ft_cc_third_column(cells, index);
	ft_cc_fourth_line(cells, index);
}

void	ft_cross_check_cell16(int *cells, int index)
{
	ft_cc_fourth_column(cells, index);
	ft_cc_fourth_line(cells, index);
}
