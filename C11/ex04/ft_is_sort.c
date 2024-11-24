/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:30:15 by ygille            #+#    #+#             */
/*   Updated: 2024/10/02 16:37:49 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	trig_ascending;
	int	trig_descending;

	i = 0;
	trig_ascending = 0;
	trig_descending = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i +1]) < 0)
			trig_ascending += 1;
		else if ((*f)(tab[i], tab[i +1]) > 0)
			trig_descending += 1;
		i++;
	}
	if (trig_ascending == 0 || trig_descending == 0)
		return (1);
	return (0);
}
