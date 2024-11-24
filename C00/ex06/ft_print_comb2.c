/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:50:20 by ygille            #+#    #+#             */
/*   Updated: 2024/09/11 11:33:15 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(const int c, const int d);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			if (a != b)
			{
				ft_print(a, b);
				b++;
			}
		}
		a++;
	}
}

void	ft_print(const int c, const int d)
{
	const char	e[2] = ", ";
	const char	h = 32;
	char		f[2];
	char		g[2];

	f[0] = (c / 10) + 48;
	f[1] = (c % 10) + 48;
	g[0] = (d / 10) + 48;
	g[1] = (d % 10) + 48;
	write(1, &f, 2);
	write(1, &h, 1);
	write(1, &g, 2);
	if (!(f[0] == 57 && f[1] == 56 && g[0] == 57 && g[1] == 57))
	{
		write(1, &e, 2);
	}
}

/*
void	main(void)
{
	ft_print_comb2();
}
*/
