#ifndef HEADER_H
# define HEADER_H

void ft_putchar(char c);
void ft_print_matrix(int *cells);
int ft_define_column_starting_index(int reference);
int ft_define_line_starting_index(int reference);
void ft_check_column_possibilities(char x, char y, int reference, int *cells);
void ft_check_line_possibilities(char x, char y, int reference, int *cells);
int ft_cell_not_solved(int *cells, int index);
void ft_cross_check_matrix(int *cells, int index);
void ft_cross_check_cell1(int *cells, int index);
void ft_cross_check_cell2(int *cells, int index);
void ft_cross_check_cell3(int *cells, int index);
void ft_cross_check_cell4(int *cells, int index);
void ft_cross_check_cell5(int *cells, int index);
void ft_cross_check_cell6(int *cells, int index);
void ft_cross_check_cell7(int *cells, int index);
void ft_cross_check_cell8(int *cells, int index);
void ft_cross_check_cell9(int *cells, int index);
void ft_cross_check_cell10(int *cells, int index);
void ft_cross_check_cell11(int *cells, int index);
void ft_cross_check_cell12(int *cells, int index);
void ft_cross_check_cell13(int *cells, int index);
void ft_cross_check_cell14(int *cells, int index);
void ft_cross_check_cell15(int *cells, int index);
void ft_cross_check_cell16(int *cells, int index);
void ft_cc_first_columns(int *cells, int startingindex);
void ft_cc_second_columns(int *cells, int startingindex);
void ft_cc_third_columns(int *cells, int startingindex);
void ft_cc_fourth_columns(int *cells, int startingindex);
void ft_cc_first_lines(int *cells, int startingindex);
void ft_cc_second_lines(int *cells, int startingindex);
void ft_cc_third_lines(int *cells, int startingindex);
void ft_cc_fourth_lines(int *cells, int startingindex);

#endif
