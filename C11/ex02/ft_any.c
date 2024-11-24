/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:22:35 by ygille            #+#    #+#             */
/*   Updated: 2024/10/02 16:25:52 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	trig;

	i = 0;
	trig = 0;
	while (tab[i] != NULL)
	{
		if ((*f)(tab[i]))
			trig = 1;
		i++;
	}
	return (trig);
}