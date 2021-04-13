/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:14:06 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 16:47:01 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int number;

	number = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	ft_putchar(number % 10 + '0');
}
