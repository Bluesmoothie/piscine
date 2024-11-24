/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:34:06 by ygille            #+#    #+#             */
/*   Updated: 2024/09/18 20:11:36 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	const char	fib[] = "0112";
	int			x;
	int			x2;

	x = 0;
	x2 = 0;
	if (index < 0)
		return (-1);
	if (index <= 3)
		return (fib[index] - 48);
	else
	{
		x = ft_fibonacci(index - 1);
		x2 = ft_fibonacci(index - 2);
	}
	return (x + x2);
}

/*
int	main(void)
{
	int	a;
	int	i;

	a = 40;
	i = 0;
	while (i <= a)
	{
		printf("%d=%d\n", i, ft_fibonacci(i));
		i++;
	}
	return (0);
}
*/
