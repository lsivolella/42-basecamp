/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:58:42 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/07 18:18:01 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int isprintable;

	i = 0;
	if (str[i] == '\0')
		isprintable = 1;
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] < 31 || str[i] == 127)
			{
				isprintable = 0;
				break ;
			}
			else
			{
				isprintable = 1;
			}
			i++;
		}
	}
	return (isprintable);
}
