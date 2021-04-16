/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:52:45 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 19:23:36 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int ref;

	ref = 2;
	if (nb < 2)
		return (0);
	while (ref <= nb - 1 && ref <= 46340)
	{
		if (nb % ref == 0)
			return (0);
		ref++;
	}
	if (nb == ref)
		return (1);
	return (0);
}
