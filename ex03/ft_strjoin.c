/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:02:09 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/15 18:50:59 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int strsize;

	strsize = 0;
	while (*str != '\0')
	{
		str++;
		strsize++;
	}
	return (strsize);
}

void	ft_initialize_dst(char *dst, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dst;
	int		dstsize;

	if (size == 0)
		return (0);
	i = -1;
	dstsize = 0;
	while (++i < size)
		dstsize += ft_strlen(strs[i]) + ft_strlen(sep);
	dst = malloc(dstsize * sizeof(char));
	if (dst == 0)
		return (0);
	ft_initialize_dst(dst, dstsize);
	i = -1;
	while (++i < size)
	{
		if (i != 0)
			ft_strcat(dst, sep);
		ft_strcat(dst, strs[i]);
	}
	return (dst);
}
