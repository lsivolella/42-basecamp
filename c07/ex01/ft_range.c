/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:57:43 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 11:03:50 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *array;

	if (min >= max)
		return (0);
	i = 0;
	array = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
