/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:06:13 by ygille            #+#    #+#             */
/*   Updated: 2024/10/01 12:13:31 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	return ;
}
/*
int	main(void)
{
	int	i;
	int	tab[] = {10, 9, 15, 0, 1, 36, 0, 85};
	int	size = 8;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d=%d\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/