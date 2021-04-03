/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcalazan <gcalazan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:09:12 by gcalazan          #+#    #+#             */
/*   Updated: 2021/04/03 17:09:10 by gcalazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    rush(int x, int y)
{
    int i; /* COLUNA X */
    int j; /* LINHA Y */
    
    i = 1;
    j = 1;
    while (j <= y)
    {
        while (i <= x)
        {
            if ((i == 1 || i == x) && j == 1)
            {
                ft_putchar('A'); /* (SE 1 COLUNA OU ULTIMA COLUNA) E PRIMEIRA LINHA COLOCAR A */
            }
            else if ((i > 1 && i < x) && (j == 1 || j == y))
            {
                ft_putchar('B'); /* (SE ENTRE A PRIMEIRA E A ULTIMA COLUNA) E (PRIMEIRA LINHA OU ULTIMA LINHA) COLAR B*/
            }
            else if ((i == 1 || i == x) && j == y)
            {
                ft_putchar('C'); /* (SE ESTIVER NA PRIMEIRA COLUNA OU NA SEGUNDA COLUNA) E SE ESTIVER NA ULTIMA LINHA COLOCAR C*/
            }
            else if ((i == 1 || i == x) && (j > 1 && j < y))
            {
                ft_putchar('B'); /* (SE ESTIVER NA PRIMEIRA OU ULTIMA COLUNA) E (ENTRE A SEGUNDA LINHA OU NA PENUTIMA LINHA) COLOCAR B */
            }
            else if ((i != 1 && i != x) && (j > 1 && j < y))
            {
                ft_putchar(' ');  /* (SE DIFERENTE DE 1 E DIFERENTE DE X) E (SE ESTIVER ENTRE A SEGUNDA LINHA E A PENUTIMA) COLOCAR ESPACO*/
            }
            i++;
        }
        i = 1;
        ft_putchar('\n');
        j++;
    }
}

