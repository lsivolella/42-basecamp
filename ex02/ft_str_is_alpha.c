/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:58:42 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 18:11:16 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;
	int isalpha;

	i = 0;
	if (str[i] == '\0')
		isalpha = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))
		{
			isalpha = 0;
			break ;
		}
		else
		{
			isalpha = 1;
		}
		i++;
	}
	return (isalpha);
}
