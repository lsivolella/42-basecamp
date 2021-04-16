/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:58:42 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 18:16:43 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int isuppercase;

	i = 0;
	if (str[i] == '\0')
		isuppercase = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			isuppercase = 0;
			break ;
		}
		else
		{
			isuppercase = 1;
		}
		i++;
	}
	return (isuppercase);
}
