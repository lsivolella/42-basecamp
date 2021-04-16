/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:53:05 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 14:58:36 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	char	*pargv;
	int		i;
	int		j;

	pargv = 0;
	i = 1;
	while (i < argc)
	{
		pargv = argv[i];
		j = 0;
		while (pargv[j] != '\0')
		{
			ft_putchar(pargv[j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
