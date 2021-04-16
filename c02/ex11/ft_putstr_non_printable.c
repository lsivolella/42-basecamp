/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:45:28 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/09 20:06:00 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

const char g_hex_lookup[] = "0123456789abcdef";

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_to_hexa(char c)
{
	char hex[3];

	hex[0] = '\\';
	hex[1] = g_hex_lookup[((unsigned char)c) / 16];
	hex[2] = g_hex_lookup[((unsigned char)c) % 16];
	write(1, hex, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 1 && str[i] <= 31) || str[i] == 127 || str[i] < 0)
		{
			ft_convert_to_hexa(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
