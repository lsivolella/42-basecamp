/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cells_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:07:01 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 02:11:43 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_cross_check_cell9(int *cells, int index)
{
	ft_cc_first_column(cells, index);
	ft_cc_third_line(cells, index);
}

void	ft_cross_check_cell10(int *cells, int index)
{
	ft_cc_second_column(cells, index);
	ft_cc_third_line(cells, index);
}

void	ft_cross_check_cell11(int *cells, int index)
{
	ft_cc_third_column(cells, index);
	ft_cc_third_line(cells, index);
}

void	ft_cross_check_cell12(int *cells, int index)
{
	ft_cc_fourth_column(cells, index);
	ft_cc_third_line(cells, index);
}
