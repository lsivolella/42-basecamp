/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:58:42 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 18:15:32 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int islowercase;

	i = 0;
	if (str[i] == '\0')
		islowercase = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			islowercase = 0;
			break ;
		}
		else
		{
			islowercase = 1;
		}
		i++;
	}
	return (islowercase);
}
