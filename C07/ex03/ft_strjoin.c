/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:52:18 by ygille            #+#    #+#             */
/*   Updated: 2024/09/27 10:47:04 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int	count_char(int size, char **strs)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

void	fill(char *strs, char *res, int *k)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
	{
		res[*k] = strs[i];
		i++;
		*k = *k + 1;
	}
	return ;
}

void	fill_sep(char *sep, char *res, int *k)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		res[*k] = sep[i];
		i++;
		*k = *k + 1;
	}
	return ;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		k;

	if (size == 0)
		res = malloc(1);
	else
		res = malloc (sizeof(char) * (count_char(size, strs)
					+ (ft_strlen(sep) * size - 1) + 1));
	k = 0;
	i = 0;
	while (res != NULL && i < size)
	{
		fill(strs[i], res, &k);
		if (i < size - 1)
			fill_sep(sep, res, &k);
		i++;
	}
	if (res != NULL)
		res[k] = '\0';
	return (res);
}

/*
int	main(int argc, char *argv[])
{
	char	sep[] = "56";
	char	*res;
	int		i;

	i = 0;
	res = ft_strjoin(argc, argv, sep);
	while (res[i])
	{
		write (1, &res[i], 1);
		i++;
	}
	return (0);
}
*/