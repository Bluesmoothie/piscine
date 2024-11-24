/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:17:25 by ygille            #+#    #+#             */
/*   Updated: 2024/10/03 12:10:40 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*return_values;
	int	i;

	i = 0;
	return_values = malloc (sizeof(int *) * length);
	if (return_values == NULL)
		return (NULL);
	while (i < length)
	{
		return_values[i] = (*f)(tab[i]);
		i++;
	}
	return (return_values);
}
