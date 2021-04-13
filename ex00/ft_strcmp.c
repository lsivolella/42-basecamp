/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:29:35 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 14:22:39 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_printable(char c)
{
	int isprintable;

	if ((c < 31 || c == 127) && c != '\0')
		isprintable = 0;
	else
		isprintable = 1;
	return (isprintable);
}

int		ft_return_result(char c1, char c2)
{
	int result;

	if (!ft_char_is_printable(c1) || !ft_char_is_printable(c2))
		result = (unsigned char)c1 - (unsigned char)c2;
	else
		result = c1 - c2;
	return (result);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				result;

	i = 0;
	if ((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		result = s1[i] - s2[i];
	else if (s1[i] == '\0' && s2[i] == '\0')
		result = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			result = 0;
		else if (s1[i] != s2[i])
		{
			result = ft_return_result(s1[i], s2[i]);
			break ;
		}
		i++;
	}
	return (result);
}
