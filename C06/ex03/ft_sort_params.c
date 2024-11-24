/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:44:04 by ygille            #+#    #+#             */
/*   Updated: 2024/10/03 18:44:37 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	string_swap(char *str1, char *str2);
void	display(int argc, char *argv[]);
void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				string_swap(argv[i], argv[i + 1]);
				i = 0;
			}
			i++;
		}
		display(argc, argv);
		return (0);
	}
	return (-1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while ((s1[pos] && s2[pos]) && s1[pos] == s2[pos])
		pos++;
	return (s1[pos] - s2[pos]);
}

void	string_swap(char *str1, char *str2)
{
	char	tmp[255];
	int		i;

	i = 0;
	while (str1[i] != '\0')
	{
		tmp[i] = str1[i];
		i++;
	}
	tmp[i] = '\0';
	i = 0;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str2[i] = '\0';
	i = 0;
	while (tmp[i] != '\0')
	{
		str2[i] = tmp[i];
		i++;
	}
	str2[i] = '\0';
	return ;
}

void	display(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return ;
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}
