/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:03:12 by ygille            #+#    #+#             */
/*   Updated: 2024/10/03 18:35:31 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*tmp;

	i = 0;
	while (tab[i + 1][0] != '\0')
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return ;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while ((s1[pos] && s2[pos]) && s1[pos] == s2[pos])
		pos++;
	return (s1[pos] - s2[pos]);
}
