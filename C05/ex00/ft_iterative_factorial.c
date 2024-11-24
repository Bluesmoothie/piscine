/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:30:43 by ygille            #+#    #+#             */
/*   Updated: 2024/09/18 18:05:25 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	if (nb < 0)
		return (0);
	a = 1;
	while (nb)
	{
		a *= nb;
		nb--;
	}
	return (a);
}

/*
int	main(void)
{
	int	nb;

	nb = 11;
	printf("%d\n", ft_iterative_factorial(nb));
	return (0);
}
*/
