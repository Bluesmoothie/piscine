/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:41:47 by ygille            #+#    #+#             */
/*   Updated: 2024/09/24 11:00:29 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	pos;
	int	num;
	int	sign;

	pos = 0;
	num = 0;
	sign = 1;
	while (str[pos] == ' ' || (str[pos] >= 9 && str[pos] <= 13))
		pos++;
	while (! (str[pos] >= '0' && str[pos] <= '9'))
	{
		if (str[pos] == '-')
			sign *= -1;
		if (! (str[pos] == '+' || str[pos] == '-'))
			return (0);
		pos++;
	}
	while ((str[pos] >= '0' && str[pos] <= '9'))
	{
		num += (str[pos] - 48);
		if ((str[pos + 1] >= '0' && str[pos + 1] <= '9'))
			num *= 10;
		pos++;
	}
	return (num * sign);
}

/*
int	main(int argc, char *argv[])
{
	char	str[]= "\t\n\v\f\r    ---456";
	printf("%d\n", ft_atoi(str));
	return (0);
}
*/
