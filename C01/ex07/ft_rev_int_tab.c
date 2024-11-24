/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:01:11 by ygille            #+#    #+#             */
/*   Updated: 2024/09/23 10:56:44 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
	return ;
}

/*
int	main(void)
{
	int	a[] = {1, 2, 3, 4, 5, 6};
	int	s;
	int	i;

	s = 6;
	ft_rev_int_tab (a, s);
	i = 0;
	while (i < s)
	{
		printf("%d", a[i]);
		i++;
	}
	return (0);
}
*/
