/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:30:49 by ygille            #+#    #+#             */
/*   Updated: 2024/09/25 12:27:43 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (! (str[pos] >= '0' && str[pos] <= '9'))
	{
		if (str[pos] == '-')
			*sign = *sign * -1;
		if (! (str[pos] == '+' || str[pos] == '-'))
			return (0);
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

	if (str[0] == 0 || base[0] == 0)
		return (0);
	len = ft_strlen(base);
	if (len < 2 || verif_base(base))
		return (0);
	sign = 1;
	num = 0;
	pos = skip_and_sign(str, &sign);
	while (str[pos])
	{
		if (base_pos(str[pos], base, len) == -1)
			return (0);
		num += base_pos(str[pos], base, len);
		if (str[pos + 1] != 0)
			num *= len;
		pos++;
	}
	return (num * sign);
}
/*
int	main(int argc, char *argv[])
{
	int	a;

	a = ft_atoi_base(argv[1], argv[2]);
	printf("%d\n", a);
	return (0);
}
*/
