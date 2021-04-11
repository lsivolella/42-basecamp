/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:16:55 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/09 20:23:41 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	ft_convert_to_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	ft_convert_to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int		ft_is_alpha_or_number(char c)
{
	if ((c >= 'A' && c <= 'Z') ||
		(c >= 'a' && c <= 'z') ||
		(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	if (str[i] != '\0')
		str[i] = ft_convert_to_uppercase(str[i]);
	while (str[++i] != '\0')
	{
		if (!ft_is_alpha_or_number(str[i - 1]) && ft_is_alpha_or_number(str[i]))
			str[i] = ft_convert_to_uppercase(str[i]);
		else
			str[i] = ft_convert_to_lowercase(str[i]);
	}
	return (str);
}
