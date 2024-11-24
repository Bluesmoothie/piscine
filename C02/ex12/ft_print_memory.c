/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:56:34 by ygille            #+#    #+#             */
/*   Updated: 2024/09/25 12:19:15 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_address(void *addr)
{
	const char	base16[] = "0123456789abcdef";
	char		address[18];
	int			i;
	long int	addrint;

	addrint = (long int)addr;
	address[16] = ':';
	address[17] = ' ';
	i = 15;
	while (addrint)
	{
		address[i] = base16[addrint % 16];
		addrint /= 16;
		i--;
	}
	while (i > -1)
	{
		address[i] = base16[0];
		i--;
	}
	write(1, &address, 18);
	return ;
}

void	print_hex(void *addr, int j)
{
	unsigned char	*current;
	const char		base16[] = "0123456789abcdef";
	int				i;

	i = 0;
	while (i < j)
	{
		current = (unsigned char *)&addr[i];
		write (1, &base16[current[0] / 16], 1);
		write (1, &base16[current[0] % 16], 1);
		if (! ((i / 2) * 2 == i))
			write (1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write (1, "  ", 2);
		if (! ((i / 2) * 2 == i))
			write (1, " ", 1);
		i++;
	}
	return ;
}

void	print_ascii(void *addr, int j)
{
	int		i;
	char	*current;

	i = 0;
	while (i < j)
	{
		current = (char *)&addr[i];
		if (current[0] >= 32 && current[0] <= 126)
			write (1, &current[0], 1);
		else
			write (1, ".", 1);
		i++;
	}
	return ;
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (i < size)
	{
		if (size - i >= 16)
			j = 16;
		else
			j = size - i;
		print_address(&addr[i]);
		print_hex(&addr[i], j);
		print_ascii(&addr[i], j);
		write (1, "\n", 1);
		i += 16;
	}
	return (addr);
}

/*
int	main(void)
{
	char			str[] = {255, '5', ' ', 'P'};
	unsigned int	size;

	size = 4;
	ft_print_memory((void *)&str, size);
	return (0);
}
*/
