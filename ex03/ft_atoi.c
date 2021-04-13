/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:47:49 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/13 00:35:55 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_numeric(char c)
{
	int i;
	int isnumeric;

	i = 0;
	if (c >= '0' && c <= '9')
		isnumeric = 1;
	else
		isnumeric = 0;
	return (isnumeric);
}

int		ft_atoi(char *str)
{
	int number;
	int sign;
	int i;

	number = 0;
	sign = 1;
	i = 0;

	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_char_is_numeric(str[i]))
	{
		number = (10 * number) + (str[i] - '0');
		i++;
	}
	return (sign * number);
}
