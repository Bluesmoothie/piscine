/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:17:29 by ygille            #+#    #+#             */
/*   Updated: 2024/09/22 16:48:55 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	vmax_check(char i, char *vmax, int *count);

//parse the upper view and check if it correspond with the input
int	view_up(char tab[4][4], char *input, int *k)
{
	int		x;
	int		y;
	int		count;
	char	vmax;

	x = 0;
	while (x < 4)
	{
		y = 0;
		count = 0;
		vmax = '0';
		while (y < 4)
		{
			vmax_check(tab[y][x], &vmax, &count);
			y++;
		}
		if (count + 48 != input[*k])
			return (0);
		*k = *k + 2;
		x++;
	}
	return (1);
}

//parse the bootom view and check if it correspond with the input
int	view_down(char tab[4][4], char *input, int *k)
{
	int		x;
	int		y;
	int		count;
	char	vmax;

	x = 0;
	while (x < 4)
	{
		y = 3;
		count = 0;
		vmax = '0';
		while (y >= 0)
		{
			vmax_check(tab[y][x], &vmax, &count);
			y--;
		}
		if (count + 48 != input[*k])
			return (0);
		*k = *k + 2;
		x++;
	}
	return (1);
}

//parse the left view and check if it correspond with the input
int	view_left(char tab[4][4], char *input, int *k)
{
	int		x;
	int		y;
	int		count;
	char	vmax;

	y = 0;
	while (y < 4)
	{
		x = 0;
		count = 0;
		vmax = '0';
		while (x < 4)
		{
			vmax_check(tab[y][x], &vmax, &count);
			x++;
		}
		if (count + 48 != input[*k])
			return (0);
		*k = *k + 2;
		y++;
	}
	return (1);
}

//parse the right view and check if it correspond with the input
int	view_right(char tab[4][4], char *input, int *k)
{
	int		x;
	int		y;
	int		count;
	char	vmax;

	y = 0;
	while (y < 4)
	{
		x = 3;
		count = 0;
		vmax = '0';
		while (x >= 0)
		{
			vmax_check(tab[y][x], &vmax, &count);
			x--;
		}
		if (count + 48 != input[*k])
			return (0);
		*k = *k + 2;
		y++;
	}
	return (1);
}

//calculate the view from each point
void	vmax_check(char i, char *vmax, int *count)
{
	if (*vmax < i)
	{
		*vmax = i;
		*count = *count + 1;
	}
	return ;
}
