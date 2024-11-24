/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:30:43 by ygille            #+#    #+#             */
/*   Updated: 2024/09/23 14:05:49 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	a;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	a = nb;
	nb--;
	if (nb)
		nb = ft_recursive_factorial(nb);
	return (a * nb);
}

/*
int	main(void)
{
	int	i;
	int	max;

	max = 11;
	i  = 0;
	while (i <= max)
	{
		printf("!%d=%d\n", i, ft_recursive_factorial(i));
		i++;
	}
	return (0);
}
*/
