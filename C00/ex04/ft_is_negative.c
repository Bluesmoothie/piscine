/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:37:23 by ygille            #+#    #+#             */
/*   Updated: 2024/09/10 18:51:14 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	static char	negative = 'N';
	static char	positive = 'P';

	if (n < 0)
	{
		write (1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}

/*
void	main(void)
{
	int	num;

	num = -12;
	ft_is_negative(num);
}
*/
