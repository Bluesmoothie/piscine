/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:33:22 by ygille            #+#    #+#             */
/*   Updated: 2024/09/18 21:39:52 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (result * result < nb)
		result++;
	if (result * result == nb)
		return (result);
	else
		return (0);
}

/*
int	main(void)
{	int	a;

	a = 16;
	printf("%d\n", ft_sqrt(a));
	return (0);
}
*/
