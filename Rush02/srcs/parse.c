/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:39:51 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 20:10:01 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/parse.h"
#include "../includes/read_dict.h"
#include "../includes/key.h"
#include "../includes/alternate_ktov.h"
#include "../includes/i_to_word.h"

/*
Link between key_tab to values_tab and to output from input
*/
int	parse_dict(char *value, char *dict)
{
	char	*buff;
	char	**key_tab;
	char	**values_tab;

	if (parse_value(value) == -1)
		return (-1);
	buff = read_to_buff(dict);
	if (buff == NULL)
		return (-2);
	key_tab = NULL;
	key_tab = alloc_tab(key_tab);
	if (key_tab == NULL)
		return (-1);
	key_tab = ft_only_key(key_tab);
	values_tab = NULL;
	values_tab = alloc_tab(values_tab);
	if (values_tab == NULL)
		return (-1);
	keys_to_values(key_tab, values_tab, buff);
	free(buff);
	free_tab(key_tab);
	int_to_word(values_tab, value);
	free_tab(values_tab);
	return (0);
}

/*
Check if input value is conform
*/
int	parse_value(char *value)
{
	int	i;

	i = 0;
	while (value[i] != '\0')
	{
		if (value[i] < '0' || value[i] > '9')
			return (-1);
		i++;
	}
	return (0);
}

/*
Allocate a 41*255 to contain keys or values
*/
char	**alloc_tab(char **tab)
{
	int	i;

	i = 0;
	tab = malloc(sizeof(char *) * 41);
	if (tab == NULL)
		return (NULL);
	while (i < 41)
	{
		tab[i] = malloc(sizeof(char *) * 255);
		if (tab[i] == NULL)
		{
			while (i >= 0)
			{
				free (tab[i]);
				i--;
			}
			free (tab);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		free(tab[i]);
		i++;
	}
	free (tab);
	return ;
}
