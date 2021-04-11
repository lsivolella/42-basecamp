/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:58:42 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 18:11:49 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int isnumeric;

	i = 0;
	if (str[i] == '\0')
		isnumeric = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			isnumeric = 0;
			break ;
		}
		else
		{
			isnumeric = 1;
		}
		i++;
	}
	return (isnumeric);
}
