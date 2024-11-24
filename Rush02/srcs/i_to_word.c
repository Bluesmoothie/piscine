/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_to_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:49:54 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 19:51:07 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/i_to_word.h"
#include "../includes/utils.h"
#include "../includes/print.h"

int	int_to_word(char **values, char *input)
{
	int	i;

	if (ft_strlen(input) == 1 && input[0] == '0')
		print_zero(values);
	i = escape_start(input);
	if (i == -1)
		return (-1);
	while (i)
	{
		input++;
		i--;
	}
	i = ft_strlen(input) % 3;
	if (i)
		mod_three(input, values, i);
	input += i;
	while (input[0] != '\0')
	{
		print_hundred(input, values);
		input += 3;
		if (ft_strlen(input) > 2 && (input[-1] != '0'
				|| input[-2] != '0' || input[-3] != '0'))
			print_thousand(input, values);
	}
	return (0);
}

int	escape_start(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0' && (input[i] == '0' || input[i] == ' '))
		i++;
	if (input[i] == '\0')
		return (-1);
	return (i);
}

void	mod_three(char *input, char **values, int i)
{
	int	writed;

	writed = 0;
	if (i == 2)
	{
		print_ten(input, values);
		input += 2;
	}
	if (i == 1)
	{
		print_unit(input, values);
		input++;
	}
	if (ft_strlen(input) > 2)
		print_thousand(input, values);
	return ;
}
