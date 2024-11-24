/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:57:06 by ygille            #+#    #+#             */
/*   Updated: 2024/10/03 12:02:27 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

void	ft_putnbr(int nb)
{
	char	to_print;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	to_print = (nb % 10) + 48;
	nb /= 10;
	if (nb)
		ft_putnbr(nb);
	write (1, &to_print, 1);
}

/*
int	main(void)
{
	int	nb = 2147483647;
	ft_putnbr(nb);
	return 0;
}
*/
