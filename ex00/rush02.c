/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcalazan <gcalazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:09:12 by gcalazan          #+#    #+#             */
/*   Updated: 2021/04/03 14:50:38 by gcalazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    rush(int x, int y)
{
    int i;
    int j;
    
    i = 1;
    j = 1;
    while (j <= y)
    {
        while (i <= x)
        {
            if ((i == 1 && j == 1) || (i == x && j == 1))
            {
                ft_putchar('A');
            }
            if ((i == 1 || i == x) && (j >= 2 && j < y))
            {
                ft_putchar('B');
            }
            if ((i >= 2 && i < x) && (j == 1 || j == y))
            {
                ft_putchar('B');
            }
            if ((i > 1 && i < x) && (j > 1 && j < y))
            {
                ft_putchar(' ');
            }
            if ((j == 1 && i == x) || (j == y && i == x))
            {
                ft_putchar('C');
            }
            i++;
        }
        i = 1;
        ft_putchar('\n');
        j++;
    }
}

