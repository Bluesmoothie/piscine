/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:17:04 by ygille            #+#    #+#             */
/*   Updated: 2024/09/27 13:12:02 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = sizeof(int) * (max - min);
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc (size);
	if (range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size / sizeof(int));
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	size;
	int	i;
	int	*tab;

	min = 2;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
*/