/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:48:20 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 18:17:30 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../includes/utils.h"
#include "../includes/reverse_string.h"

/*
Do I really need to explain this .c ?
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	write(1, " ", 1);
	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_itoa(int nb)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * 256);
	if (res == NULL)
		return (res);
	if (!nb)
	{
		res[i] = '0';
		i++;
	}
	while (nb)
	{
		res[i] = (nb % 10) + 48;
		nb /= 10;
		i++;
	}
	res[i] = '\0';
	reverse_string(res, ft_strlen(res));
	return (res);
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
	dest[i] = src[i];
	return (dest);
}
