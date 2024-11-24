/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:53:52 by ygille            #+#    #+#             */
/*   Updated: 2024/09/10 20:27:58 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(const char d, const char e, const char f);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < ':')
	{
		b = a +1;
		while (b < ':')
		{
			c = b +1;
			while (c < ':')
			{
				if (a != b && a != c && b != c)
				{
					ft_print(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print(const char d, const char e, const char f)
{
	const char	g[2] = ", ";

	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
	if (!(d == '7' && e == '8' && f == '9'))
	{
		write(1, &g, 2);
	}
}

/*
void	main(void)
{
	ft_print_comb();
}
*/
