/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:16:25 by ygille            #+#    #+#             */
/*   Updated: 2024/09/18 22:22:34 by ygille           ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	int	len;

	argc = argc + 0;
	len = ft_strlen(argv[0]);
	write (1, argv[0], len);
	write (1, "\n", 1);
	return (0);
}
