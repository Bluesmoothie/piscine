/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:49:44 by ygille            #+#    #+#             */
/*   Updated: 2024/09/18 21:58:52 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;
	int	res;

	if (nb < 2)
		return (0);
	div = 2;
	res = 0;
	while (div < nb)
	{
		res = nb / div;
		if (res * div == nb)
			return (0);
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (i <= 2147483647)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	int	a;

	a = 200000000;
	printf("%d\n", ft_find_next_prime(a));
	return (0);
}
*/
