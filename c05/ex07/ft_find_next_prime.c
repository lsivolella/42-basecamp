/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:17:37 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 19:20:29 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int ref;

	ref = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (ref * ref < nb && nb % ref != 0 && ref <= 46340)
		ref++;
	if (nb % ref == 0)
		return (0);
	else
		return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
