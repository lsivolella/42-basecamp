/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:35:58 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/04 16:50:40 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0';
	d = '1';
	u = '2';
	while (c <= '7')
	{
		while (d <= '8')
		{
			while (u <= '9')
			{
				print_number(c, d, u);
				u++;
				if (c < '7')
				{
					write(1, ", ", 2);
				}
			}
			u = ++d + 1;
		}
		d = ++c + 1;
		u = d + 1;
	}
}
