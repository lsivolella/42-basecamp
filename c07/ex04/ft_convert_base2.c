/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:52:44 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 20:29:17 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_cpy_str(char *dst, char *src, int size, int offset);

int		ft_str_repeat_char(char *base, int baselength)
{
	int		i;
	int		j;
	int		samechar;
	char	testset[baselength + 1];

	i = 0;
	samechar = 0;
	ft_cpy_str(testset, base, baselength + 1, 0);
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
