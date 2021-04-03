/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:09:12 by gcalazan          #+#    #+#             */
/*   Updated: 2021/04/03 17:34:05 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printretangulo(int i, int j, int x, int y)
{
	if ((i == 1 || i == x) && j == 1)
	{
		ft_putchar('A');
	}
	else if ((i > 1 && i < x) && (j == 1 || j == y))
	{
		ft_putchar('B');
	}
	else if ((i == 1 || i == x) && j == y)
	{
		ft_putchar('C');
	}
	else if ((i == 1 || i == x) && (j > 1 && j < y))
	{
		ft_putchar('B');
	}
	else if ((i != 1 && i != x) && (j > 1 && j < y))
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			printretangulo(i, j, x, y);
			i++;
		}
		i = 1;
		ft_putchar('\n');
		j++;
	}
}
