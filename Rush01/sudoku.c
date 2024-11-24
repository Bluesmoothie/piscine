/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:30:32 by ygille            #+#    #+#             */
/*   Updated: 2024/09/22 17:39:35 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//add all numbers on a column and test if the result is 10
int	sudoku_test(char answer_grid[4][4])
{
	int	x;
	int	y;
	int	t;

	x = 0;
	while (x < 4)
	{
		y = 0;
		t = 0;
		while (y < 4)
		{
			t += answer_grid[y][x] - 48;
			y++;
		}
		if (t != 10)
			return (0);
		x++;
	}
	return (1);
}
