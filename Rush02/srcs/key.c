/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:14:49 by ybenigno          #+#    #+#             */
/*   Updated: 2024/09/29 20:10:21 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/key.h"
#include "../includes/utils.h"

/*
Generate keys 0 to 100 in str format
*/
char	**ft_only_key(char **tab)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 30;
	while (i <= 20)
	{
		tmp = ft_itoa(i);
		ft_strcpy(tab[i], tmp);
		free (tmp);
		i++;
	}
	while (i <= 28)
	{
		tmp = ft_itoa(j);
		ft_strcpy(tab[i], tmp);
		free (tmp);
		j = j + 10;
		i++;
	}
	return (only_big_key(tab));
}

/*
Generate keys 1000 to 1000000000000000000000000000000000000 in str format
*/
char	**only_big_key(char **tab)
{
	int	i;
	int	j;

	i = 29;
	j = 3;
	while (i < 41)
	{
		big_key_generator(tab[i], j);
		j += 3;
		i++;
	}
	return (tab);
}

/*
0 generator because these numbers are larger than what an int can contain
*/
void	big_key_generator(char *key, int nbr_zero)
{
	int	i;

	i = 1;
	key[0] = '1';
	while (i <= nbr_zero)
	{
		key[i] = '0';
		i++;
	}
	key[i] = '\0';
	return ;
}
