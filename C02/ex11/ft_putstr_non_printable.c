/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:34:04 by ygille            #+#    #+#             */
/*   Updated: 2024/09/24 11:40:56 by ygille           ###   ########.fr       */
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

void	aff(unsigned int a)
{
	const char		base16[] = "0123456789abcdef";

	write (1, &base16[a / 16], 1);
	write (1, &base16[a % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	int				s;
	unsigned char	t;

	i = 0;
	s = ft_strlen(str);
	while (i < s)
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write (1, &str[i], 1);
		else
		{
			t = (unsigned char)str[i];
			write (1, "\\", 1);
			aff((unsigned int)t);
		}
		i++;
	}
}

/*
int	main(void)
{
	char	str[] = {255, 'a', '\n', ' ', '8'};
	
	ft_putstr_non_printable(str);
	return (0);
}
*/
