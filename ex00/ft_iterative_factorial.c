/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:35:06 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/13 14:50:26 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb < 0)
		factorial = 0;
	else if (nb == 0)
		factorial = 1;
	else if (nb > 0)
	{
		while (nb > 0)
		{
			factorial *= nb;
			nb--;
		}
	}
	return (factorial);
}
