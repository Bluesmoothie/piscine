/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:48:57 by ygille            #+#    #+#             */
/*   Updated: 2024/09/11 16:51:52 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int	ft_is_negative(int n)
{
	if (n < 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	print_int_char(char print[5], int print_is_negative)
{
	const char	negative = 45;
	int			tab;

	tab = 0;
	if (print_is_negative)
	{
		write(1, &negative, 1);
	}
	while (tab < 5)
	{
		if (print[tab] != 0)
		{
			print[tab] += 48 ;
			write(1, &print[tab], 1);
		}
		tab++;
	}
}

void	ft_putnbr(int nb)
{
	char	result[5];
	int		result_is_negative;

	result_is_negative = ft_is_negative(nb);
	if (result_is_negative)
	{
		nb *= -1;
	}
	result[0] = nb / 10000;
	nb -= (nb / 10000) * 10000;
	result[1] = nb / 1000;
	nb -= (nb / 1000) * 1000;
	result[2] = nb / 100;
	nb -= (nb / 100) * 100;
	result[3] = nb / 10;
	nb -= (nb / 10) * 10;
	result[4] = nb;
	print_int_char(result, result_is_negative);
}

void	main(void)
{
	int	nb;	

	ft_ft(&nb);
	ft_putnbr(nb);
}
*/
