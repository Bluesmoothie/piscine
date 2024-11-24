/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:01:48 by ygille            #+#    #+#             */
/*   Updated: 2024/09/25 12:26:46 by ygille           ###   ########.fr       */
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

int	verif_base(char *str)
{
	char	a;
	int		pos;
	int		trig;

	pos = 1;
	trig = 0;
	a = str[0];
	if ((!(a >= '!' && a <= '~')) || a == '+' || a == '-')
		return (1);
	if (str[1] != '\0')
		trig = verif_base(str + 1);
	while (str[pos])
	{
		if (a == str[pos])
			return (1);
		pos++;
	}
	return (trig);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		b;
	int		to_print;
	long	nb;

	b = ft_strlen(base);
	nb = (long)nbr;
	if (b < 2 || verif_base(base))
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	to_print = nb % b;
	nb /= b;
	if (nb)
		ft_putnbr_base((int)nb, base);
	write (1, &base[to_print], 1);
}

/*
int	main(void)
{
	int	nbr = -2147483648;
	char	base10[] = "0123456789";
	char	base2[] = "01";
	char	base16[] = "0123456789ABCDEF";
	char	base8[] = "poneyvif";
	ft_putnbr_base(nbr, base10);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, base2);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, base16);
	write(1, "\n", 1);
	ft_putnbr_base(nbr, base8);
	write(1, "\n", 1);
}
*/
