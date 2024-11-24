/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:54:33 by ygille            #+#    #+#             */
/*   Updated: 2024/10/01 12:42:05 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_combn(int n)
{
	int	i;
	int	max;

	i = 1;
	max = 1;
	while (i <= n)
	{
		max *= 10;
		i++;
	}
	i = 0;
	while (i < max)
	{
		convert(i);
		i++;
	}
	return ;
}
void	convert(int i)
{
	char	str[10];

	while (i)
	{
		str
	return ;
}

	
}

int	main(void)
{
	ft_print_combn(3);
}
