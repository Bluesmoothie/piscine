/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:40:34 by ygille            #+#    #+#             */
/*   Updated: 2024/09/27 12:28:23 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = src[i];
	return (dest);
}

void	alloc_protec(t_stock_str *tab, int i)
{
	while (i >= 0)
	{
		free(tab[i].copy);
		i--;
	}
	free(tab);
	return ;
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc (sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (tab);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = malloc (sizeof(char) * (ft_strlen(tab[i].str) + 1));
		if (tab[i].copy == NULL)
		{
			alloc_protec(tab, i);
			return (NULL);
		}
		ft_strcpy(tab[i].copy, tab[i].str);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
