/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:02:11 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 19:19:35 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/reverse_string.h"

/*
Reverse a string
*/
void	reverse_string(char *str, int size)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return ;
}
