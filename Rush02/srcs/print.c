/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:04:02 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 19:42:04 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/print.h"
#include "../includes/utils.h"

/*
Print ^10 names
*/
void	print_thousand(char *input, char **values)
{
	ft_putstr(values[(ft_strlen(&input[0]) / 3) + 28]);
	return ;
}

/*
Print hundreds
*/
void	print_hundred(char *input, char **values)
{
	if (input[0] - 48 != 0)
	{
		ft_putstr(values[input[0] - 48]);
		ft_putstr(values[28]);
	}
	print_ten (&input[1], values);
	return ;
}

/*
Print tens and particulars 10-19 numbers
*/
void	print_ten(char *input, char **values)
{
	if (input[0] - 48 != 0 && input[0] - 48 == 1)
		ft_putstr(values[input[1] - 48 + 10]);
	else if (input[0] - 48 != 0)
	{
		ft_putstr(values[input[0] - 48 + 18]);
		if (input[1] - 48 != 0)
			print_unit(&input[1], values);
	}
	else if (input[1] - 48 != 0)
		print_unit(&input[1], values);
	return ;
}

/*
Print units
*/
void	print_unit(char *input, char **values)
{
	ft_putstr(values[input[0] - 48]);
	return ;
}

void	print_zero(char **values)
{
	ft_putstr(values[0]);
	return ;
}
