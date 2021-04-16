/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 21:52:01 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/04 17:14:52 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int numero;

	numero = '0';
	while (n > 0)
	{
		while (numero <= '9')
		{
			ft_putchar(numero);
			ft_putchar(',');
			ft_putchar(' ');
			numero++;
		}
		n--;
	}
}
