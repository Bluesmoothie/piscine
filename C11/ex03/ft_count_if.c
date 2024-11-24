/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:27:01 by ygille            #+#    #+#             */
/*   Updated: 2024/10/02 16:29:57 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	trigs;

	i = 0;
	trigs = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			trigs += 1;
		i++;
	}
	return (trigs);
}
