/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:17:42 by ygille            #+#    #+#             */
/*   Updated: 2024/10/02 21:58:28 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	verif_base(char *str);
int	ft_strlen(char *str);
int	base_pos(char str, char *base, int len);
int	skip_and_sign(char *str, int *sign);

char	*ft_itoa_base(int nbr, char *base, char *res, int pos)
{
	int		b;
	int		to_print;
	long	nb;

	b = ft_strlen(base);
	nb = (long)nbr;
	if (nb < 0)
	{
		res[pos] = '-';
		pos++;
		nb *= -1;
	}
	to_print = nb % b;
	nb /= b;
	if (nb)
		ft_itoa_base((int)nb, base, res, pos + 1);
	else
		res[pos + 1] = '\0';
	res[pos] = base[to_print];
	return (res);
}

void	reverse_string(char *str, int size)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = size - 1;
	if (str[0] == '-')
		i++;
	while (i < (size + 1) / 2)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return ;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*res;
	int		i;
	int		sign;

	i = 0;
	sign = 0;
	if (ft_strlen(base_from) < 2 || verif_base(base_from))
		return (NULL);
	if (ft_strlen(base_to) < 2 || verif_base(base_to))
		return (NULL);
	i = skip_and_sign(nbr, &sign);
	nb = ft_atoi_base(nbr, base_from);
	res = malloc(sizeof(int) * 12);
	ft_itoa_base(nb, base_to, res, 0);
	reverse_string(res, ft_strlen(res));
	return (res);
}
/*
int	main(int argc, char *argv[])
{
	char	*res;

	if (argc == 4)
	{
		res = ft_convert_base(argv[1], argv[2], argv[3]);
		printf("%s\n", res);
	}
	return (0);
}
*/