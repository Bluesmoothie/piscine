/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:21:14 by ygille            #+#    #+#             */
/*   Updated: 2024/09/24 14:27:02 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	a;

	if (power == 0)
		return (1);
	if (nb < 1 || power < 0)
		return (0);
	if (power == 1)
		return (nb);
	a = nb;
	power--;
	if (power > 1)
		nb = ft_recursive_power(nb, power);
	return (nb * a);
}

/*
int	main(void)
{
	int	a;
	int	i;
	int	max;

	a = 2;
	i = 0;
	max = 126;
	while (i <= max)
	{
		printf("%d^%d=%d\n", a, i, ft_recursive_power(a, i));
		i++;
	}
	return (0);
}
*/
