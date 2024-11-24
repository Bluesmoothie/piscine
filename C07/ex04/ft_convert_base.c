/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:17:44 by ygille            #+#    #+#             */
/*   Updated: 2024/10/02 13:55:48 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	skip_and_sign(char *str, int *sign)
{
	int	pos;

	pos = 0;
	while (str[pos] == ' ' || (str[pos] >= 9 && str[pos] <= 13))
		pos++;
	while (str[pos] == '+' || str[pos] == '-')
	{
		if (str[pos] == '-')
			*sign = *sign * -1;
		pos++;
	}
	return (pos);
}

int	base_pos(char str, char *base, int len)
{
	int	pos;

	pos = 0;
	while (str != base[pos] && pos < len)
		pos++;
	if (str == base[pos])
		return (pos);
	else
		return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	pos;
	int	num;
	int	sign;
	int	len;

	len = ft_strlen(base);
	sign = 1;
	num = 0;
	pos = skip_and_sign(str, &sign);
	while (str[pos] && base_pos(str[pos], base, len) != -1)
	{
		num += base_pos(str[pos], base, len);
		if (str[pos + 1] != 0 && base_pos(str[pos + 1], base, len) != -1)
			num *= len;
		pos++;
	}
	return (num * sign);
}
