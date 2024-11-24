/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:49:11 by ygille            #+#    #+#             */
/*   Updated: 2024/09/25 19:41:23 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = NULL;
	i = 0;
	if (min >= max)
		return (range);
	range = malloc (sizeof(int) * (max - min));
	if (range == NULL)
		return (range);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*range;

	min = 0;
	max = 36;
	i = 0;
	range = ft_range(min, max);
	while (i + min < max)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/
