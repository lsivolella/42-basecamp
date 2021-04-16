/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:56:47 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/16 11:32:46 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_validate_base(char *base, int baselength);

int		ft_strlen(char *str)
{
	char *p;

	p = str;
	while (*p != '\0')
		p++;
	return (p - str);
}

int	ft_convert_to_base(char *base_to, char *converted_nbr, int nbr, int index)
{
	int initial;
	int convertednbr;

	convertednbr = 0;
	if (nbr >= baselength)
		ft_convert_to_base(base_to, baselength, nbr / baselength, index);
	convertednbr += convertednbr * 10 + base_to[nbr % baselength] - '0';
	while (nbr >= baselength)
	{
		convertednbr += convertednbr * 10 + base_to[nbr % baselength] - '0';
	}
}

int		ft_char_is_alpha_number(char c)
{
	int isalphanumber;

	if (c >= '0' && c <= '9' || c >= 'A' && c <= 'Z')
		isalphanumber = 1;
	else
		isalphanumber = 0;
	return (isalphanumber);
}

int		ft_get_nbr(char *base_from, char nbr)
{
	int i;

	i = 0;
	while (base_from[i] && base_from[i] != nbr)
		i++;
	return (i);
}

int		ft_atoi(char *str, char *base_from, int baselength)
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
	while (ft_char_is_alpha_number(str[i]))
	{
		number = (baselength * number) + ft_get_nbr(base_from, str[i]);
		i++;
	}
	return (sign * number);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		int_nbr;
	char	*new_nbr;
	int		baselength;

	new_nbr = 0;
	if (!nbr || !ft_validate_base(base_to, ft_strlen(base_to)) ||
		!ft_validate_base(base_to, ft_strlen(base_from)))
		return (0);
	int_nbr = ft_atoi(nbr, base_from, ft_strlen(base_from));

	baselength = ft_strlen(base_to);
	int_nbr = ft_convert_to_base(base_to, baselength, int_nbr, 0);
	return (new_nbr);
}
