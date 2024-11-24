/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:07:56 by ygille            #+#    #+#             */
/*   Updated: 2024/09/24 18:45:50 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	if (power == 0)
		return (1);
	if (nb < 1 || power < 0)
		return (0);
	a = nb;
	while (power > 1)
	{
		nb *= a;
		power--;
	}
	return (nb);
}

/*
int	main(void)
{
	int	nb;
	int	powermax;
	int	i;

	i = -1;
	nb = 1119;
	printf("%d", ft_iterative_power(nb, i));
	return (0);
}
*/
