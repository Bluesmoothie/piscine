/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:32:52 by ygille            #+#    #+#             */
/*   Updated: 2024/09/22 16:46:47 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	generator(char possib[24][4]);
int		verif_answer(char answer_grid[4][4], char *input);
int		two_first_row(char answer[4][4], char possib[24][4], char *input);
int		two_last_row(char answer[4][4], char possib[24][4], char *input);
void	fill_response(char answer[4][4], int i, int i2, char possib[24][4]);

//get all possibilities from generator and use them to bruteforce the answer
int	bruteforce(char answer[4][4], char *input)
{
	char	possibilities[24][4];

	generator(possibilities);
	if (two_first_row(answer, possibilities, input))
		return (1);
	return (0);
}

//parse the two first row and let two_last_row continue
int	two_first_row(char answer[4][4], char possib[24][4], char *input)
{
	int	i;
	int	j;

	i = 0;
	while (i < 24)
	{
		fill_response(answer, 0, i, possib);
		j = 0;
		while (j < 24)
		{
			fill_response(answer, 1, j, possib);
			if (two_last_row(answer, possib, input))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

/*
parse the two last rows (first rows parsed by two_first_row)
then verify the complete grid and restart if wrong response
*/
int	two_last_row(char answer[4][4], char possib[24][4], char *input)
{
	int	i;
	int	j;

	i = 0;
	while (i < 24)
	{
		fill_response(answer, 2, i, possib);
		j = 0;
		while (j < 24)
		{
			fill_response(answer, 3, j, possib);
			if (verif_answer(answer, input))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

//put the response from possib (i2 row) and insert it in answer (i row)
void	fill_response(char answer[4][4], int i, int i2, char possib[24][4])
{
	int	j;

	j = 0;
	while (j < 4)
	{
		answer[i][j] = possib[i2][j];
		j++;
	}
}
