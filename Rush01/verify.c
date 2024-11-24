/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:44:34 by ygille            #+#    #+#             */
/*   Updated: 2024/09/22 17:01:07 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		view_up(char tab[4][4], char *input, int *k);
int		view_down(char tab[4][4], char *input, int *k);
int		view_left(char tab[4][4], char *input, int *k);
int		view_right(char tab[4][4], char *input, int *k);
int		sudoku_test(char answer_grid[4][4]);

/*
verify the answer and print it if it's good 
0 = not good 
1 = good
*/
int	verif_answer(char answer_grid[4][4], char *input)
{
	int	k;
	int	t;

	k = 0;
	t = 0;
	t += view_up(answer_grid, input, &k);
	t += view_down(answer_grid, input, &k);
	t += view_left(answer_grid, input, &k);
	t += view_right(answer_grid, input, &k);
	if (t == 4 && sudoku_test(answer_grid))
		return (1);
	else
		return (0);
}
