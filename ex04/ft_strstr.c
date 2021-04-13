/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:05:05 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/11 19:33:18 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_compare_str(char *str, char *to_find, char *pstr)
{
	int		j;
	int		i;

	i = 0;
	j = 0;
	while (str[i] != '\0' && pstr == 0)
	{
		while ((str[i] == to_find[j]) && to_find[j++] != '\0')
		{
			i++;
			if (to_find[j] == '\0')
			{
				pstr = &str[i - j];
				break ;
			}
			else if (str[i] != to_find[j])
			{
				j = 0;
				break ;
			}
		}
		if (str[i] != '\0')
			i += 1;
	}
	return (pstr);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*pstr;

	pstr = 0;
	if ((to_find[0] == '\0' && str[0] != '\0') ||
		(to_find[0] == '\0' && str[0] == '\0'))
		pstr = (&str[0]);
	if (str[0] == '\0' && to_find[0] != '\0')
		pstr = 0;
	pstr = ft_compare_str(str, to_find, pstr);
	return (pstr);
}
