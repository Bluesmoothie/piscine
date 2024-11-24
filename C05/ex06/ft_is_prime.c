/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:41:23 by ygille            #+#    #+#             */
/*   Updated: 2024/09/18 21:48:29 by ygille           ###   ########.fr       */
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

/*
int	main(void)
{
	int	a;

	a = 1290;
	printf("%d\n", ft_is_prime(a));
	return (0);
}
*/
