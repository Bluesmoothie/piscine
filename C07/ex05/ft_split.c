/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:26:51 by ygille            #+#    #+#             */
/*   Updated: 2024/10/02 15:21:37 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int		copy(char *str, char *charset, char *res);
int		jump_charset(char *str, char *charset);
char	**alloc_tab(void);
int		ft_strlen(char *str);

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**res;

	i = 0;
	j = 0;
	res = alloc_tab();
	while (str[i] != '\0' && ft_strlen(str) != 0)
	{
		i += jump_charset(&str[i], charset);
		if (str[i] != '\0')
		{
			i += copy(&str[i], charset, res[j]);
			j++;
		}
	}
	res[j] = 0;
	return (res);
}

int	copy(char *str, char *charset, char *res)
{
	int	i;

	i = 0;
	while (!jump_charset(&str[i], charset) && str[i] != '\0')
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (i);
}

int	jump_charset(char *str, char *charset)
{
	int	i;
	int	trig;

	i = 0;
	trig = 0;
	if (charset[i] == '\0')
		return (0);
	while (charset[i] != '\0')
	{
		if (str[0] == charset[i])
			trig = 1;
		i++;
	}
	if (trig)
		return (1 + jump_charset(&str[1], charset));
	else
		return (0);
}

char	**alloc_tab(void)
{
	char	**tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *) * 255);
	while (i < 255)
	{
		tab[i] = malloc(sizeof(char) * 255);
		i++;
	}
	return (tab);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split(argv[1], argv[2]);
	while (tab[i] != 0)
	{
		printf("%d %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/