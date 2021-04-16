/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:26:43 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 10:54:11 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	while (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb);
}
