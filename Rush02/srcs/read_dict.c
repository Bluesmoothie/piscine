/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:21:10 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 17:23:29 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../includes/read_dict.h"
#include "../includes/utils.h"

/*
Read dict and put it in buff
*/
char	*read_to_buff(char *dict)
{
	int		fd;
	int		end;
	int		i;
	char	*buff;

	i = 0;
	end = 1;
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buff = malloc (sizeof(char) * 10000);
	if (buff == NULL)
		return (NULL);
	while (end > 0)
	{
		end = read (fd, &buff[i], 1);
		i++;
	}
	close (fd);
	buff[i - 1] = '\0';
	return (buff);
}
