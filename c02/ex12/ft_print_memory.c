/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgoncalv <lgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 23:00:13 by lgoncalv          #+#    #+#             */
/*   Updated: 2021/04/09 00:28:22 by lgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char *test;

	test = addr;
	size += 1;
	//printf("%p\n", addr);
	printf("%p\n", &test);
	return (addr);
}


/*
int		ft_print_memory(void *addr, unsigned int size) {
    uintptr_t x = (uintptr_t)addr;
    char buf[2 + sizeof(x) * 2];
    size_t i;
	unsigned int j;

	j = size;
	printf("%p\n", addr);
    buf[0] = '0';
    buf[1] = 'x';
    for (i = 0; i < sizeof(x) * 2; i++) {
        buf[i + 2] = "0123456789abcdef"[(x >> ((sizeof(x) * 2 - 1 - i) * 4)) & 0xf];
    }
    return write(1, buf, sizeof(buf));
}
*/

/*
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i;
	unsigned int printed;
	unsigned char *paddr;
	int g;


	i = 0;
	printed = 0;
	paddr = addr;
	printf("%p\n", addr);
	while (i < size)
	{
		g = (*(paddr + i) >> 4) & 0xf;
		if (g + g >= 10)
			g += '0';
		else
			g += -10 + 'a';
		ft_putchar(g);
		printed++;

		g = *(paddr + i) & 0xf;
		if (g + g >= 10)
			g += '0';
		else
			g += -10 + 'a';
		ft_putchar(g);
		printed++;
		if (printed % 32 == 0)
			ft_putchar('\n');
		else if (printed % 4 == 0)
			ft_putchar(' ');

		i++;
	}
	return (addr);
}
*/