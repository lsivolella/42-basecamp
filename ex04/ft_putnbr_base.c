/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:37:00 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/13 13:00:45 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_convert_to_base(int nbr, char *base, int baselength)
{
	unsigned int	num;
	char			convertednbr;

	if (nbr < 0)
	{
		write(1, "-", 1);
		num = nbr * -1;
	}
	else
		num = nbr;
	if (num >= baselength)
		ft_convert_to_base(num / baselength, base, baselength);
	convertednbr = base[num % baselength];
	write(1, &convertednbr, 1);
}

int		ft_str_repeat_char(char *base, int baselength)
{
	int		i;
	int		j;
	int		samechar;
	char	testset[baselength + 1];

	i = 0;
	samechar = 0;
	ft_strcpy(testset, base);
	while (i < baselength)
	{
		j = 0;
		while (j < baselength)
		{
			if (testset[i] == base[j])
				samechar++;
			j++;
		}
		i++;
	}
	if (samechar == baselength)
		return (0);
	else
		return (1);
}

int		ft_validate_base(char *base, int baselength)
{
	int i;

	i = 0;
	if (!ft_str_repeat_char(base, baselength))
	{
		while (base[i] != '\0')
		{
			if (base[i] == '+' || base[i] == '-')
				return (0);
			else
				return (1);
			i++;
		}
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int baselength;

	baselength = 0;
	while (base[baselength] != '\0')
		baselength++;
	if (baselength > 1 && ft_validate_base(base, baselength))
		ft_convert_to_base(nbr, base, baselength);
}
