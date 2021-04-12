/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:20:28 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 02:36:59 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	ft_putchar(char c);
void	ft_putchar_error();
void	ft_print_matrix(int *cells);
int		ft_define_column_starting_index(int reference);
int		ft_define_line_starting_index(int reference);
int		ft_check_column_possibilities(char x, char y, int ref, int *cells);
int		ft_check_line_possibilities(char x, char y, int ref, int *cells);
int		ft_cell_not_solved(int *cells, int index);
void	ft_cross_check_matrix(int *cells, int index);
void	ft_cross_check_cell1(int *cells, int index);
void	ft_cross_check_cell2(int *cells, int index);
void	ft_cross_check_cell3(int *cells, int index);
void	ft_cross_check_cell4(int *cells, int index);
void	ft_cross_check_cell5(int *cells, int index);
void	ft_cross_check_cell6(int *cells, int index);
void	ft_cross_check_cell7(int *cells, int index);
void	ft_cross_check_cell8(int *cells, int index);
void	ft_cross_check_cell9(int *cells, int index);
void	ft_cross_check_cell10(int *cells, int index);
void	ft_cross_check_cell11(int *cells, int index);
void	ft_cross_check_cell12(int *cells, int index);
void	ft_cross_check_cell13(int *cells, int index);
void	ft_cross_check_cell14(int *cells, int index);
void	ft_cross_check_cell15(int *cells, int index);
void	ft_cross_check_cell16(int *cells, int index);
void	ft_cc_first_column(int *cells, int startingindex);
void	ft_cc_second_column(int *cells, int startingindex);
void	ft_cc_third_column(int *cells, int startingindex);
void	ft_cc_fourth_column(int *cells, int startingindex);
void	ft_cc_first_line(int *cells, int startingindex);
void	ft_cc_second_line(int *cells, int startingindex);
void	ft_cc_third_line(int *cells, int startingindex);
void	ft_cc_fourth_line(int *cells, int startingindex);
int		ft_column_p_x1(char y, int index, int *cells);
void	ft_column_p_x1_y2(int index, int *cells);
void	ft_column_p_x1_y3(int index, int *cells);
void	ft_column_p_x1_y4(int index, int *cells);
int		ft_column_p_x2(char y, int index, int *cells);
void	ft_column_p_x2_y1(int index, int *cells);
void	ft_column_p_x2_y2(int index, int *cells);
void	ft_column_p_x2_y3(int index, int *cells);
int		ft_column_p_x3(char y, int index, int *cells);
void	ft_column_p_x3_y1(int index, int *cells);
void	ft_column_p_x3_y2(int index, int *cells);
int		ft_column_p_x4(char y, int index, int *cells);
void	ft_column_p_x4_y1(int index, int *cells);
int		ft_line_p_x1(char y, int index, int *cells);
void	ft_line_p_x1_y2(int index, int *cells);
void	ft_line_p_x1_y3(int index, int *cells);
void	ft_line_p_x1_y4(int index, int *cells);
int		ft_line_p_x2(char y, int index, int *cells);
void	ft_line_p_x2_y1(int index, int *cells);
void	ft_line_p_x2_y2_1(int index, int *cells);
void	ft_line_p_x2_y2_2(int index, int *cells);
void	ft_line_p_x2_y3(int index, int *cells);
int		ft_line_p_x3(char y, int index, int *cells);
void	ft_line_p_x3_y1(int index, int *cells);
void	ft_line_p_x3_y2(int index, int *cells);
int		ft_line_p_x4(char y, int index, int *cells);
void	ft_line_p_x4_y1(int index, int *cells);
void	ft_cross_check_matrix_1(int *cells, int index);
void	ft_cross_check_matrix_2(int *cells, int index);
void	ft_cross_check_matrix_3(int *cells, int index);
void	ft_cross_check_matrix_4(int *cells, int index);
int		check_parameters(char *pargv, char *param);
int		test_pargv(char *pargv, int *pi, int *pj, char *param);

#endif
