/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:56:52 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/13 20:28:37 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int number;

	i = 1;
	number = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (i <= power)
		{
			number *= nb;
			i++;
		}
		return (number);
	}
}
