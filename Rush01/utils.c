/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:47:12 by ygille            #+#    #+#             */
/*   Updated: 2024/09/22 17:04:29 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
verify if inputs number are between 1 and 9
max 9 for 9*9 grid
assign maxval with the max found in the string
return word count or -1 if invalid char or value
*/
int	count_words(char *str, int *maxval)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	*maxval = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] <= '1' && str[i] >= '9')
			return (-1);
		if (str[i] >= '1' && str[i] <= '9')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				count++;
			else
				return (-1);
		}
		if (*maxval < str[i] - 48)
			*maxval = str[i] - 48;
		i++;
	}
	return (count);
}

//print the answer tab to console
void	print_tab(char tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write (1, &tab[i][j], 1);
			if (j < 3)
				write (1, " ", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return ;
}
