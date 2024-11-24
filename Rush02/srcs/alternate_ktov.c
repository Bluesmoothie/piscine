/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alternate_ktov.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:53:34 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 20:10:11 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/alternate_ktov.h"
#include "../includes/parse.h"
#include "../includes/key.h"

int	keys_to_values(char **keys, char **values, char *dict)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		if (search_replace(keys[i], values[i], dict))
			return (-2);
		i++;
	}
	return (0);
}

int	search_replace(char *key, char *value, char *dict)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (key[j] != dict[i] && dict[i] != '\0')
		i++;
	while (key[j] == dict[i + j] && dict[i + j] != '\0')
		j++;
	if (key[j] == '\0' && dict[i + j] != '\0')
		return (replace (&dict[i + j], value));
	else if (dict[i + j] != '\0')
		return (search_replace(key, value, &dict[i + j]));
	else
		return (1);
}

int	replace(char *dict, char *value)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dict[i] == ' ')
		i++;
	if (dict[i] == ':')
		i++;
	else
		return (1);
	while (dict[i] == ' ')
		i++;
	while (!(dict[i + j] == '\n' || dict[i + j] == '\0'))
	{
		value[j] = dict[i + j];
		j++;
	}
	value[j] = '\0';
	return (0);
}
