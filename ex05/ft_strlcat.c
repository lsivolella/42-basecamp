/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:46:46 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/12 15:50:59 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	unsigned int strsize;

	strsize = 0;
	while (*str != '\0')
	{
		str++;
		strsize++;
	}
	return (strsize);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int destsize;
	unsigned int srcsize;
	unsigned int i;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	i = 0;
	if (size < destsize)
		return (srcsize + size);
	if ((dest == '\0' && src == '\0') || destsize == size)
		return (destsize + srcsize);
	while (src[i] != '\0' && i < (size - destsize - 1))
	{
		dest[destsize + i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[destsize + i] = '\0';
		i++;
	}
	dest[destsize + i] = '\0';
	return (destsize + srcsize);
}
