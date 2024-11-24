/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:46:28 by ygille            #+#    #+#             */
/*   Updated: 2024/09/22 16:54:50 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	permute(int index, int *arr, char possib[24][4], int *j);
void	swap(int *i, int *j);

//generate all row possibilities and put them in one 24 row long tab
void	generator(char possib[24][4])
{
	int	arr[4];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		arr[i] = i + 1;
		i++;
	}
	permute(0, arr, possib, &j);
	return ;
}

/*
generate alls possibilities for one ligne and
put them in possib tab
*/
void	permute(int index, int *arr, char possib[24][4], int *j)
{
	int	k;
	int	i;

	k = 0;
	if (index == 4 - 1)
	{
		while (k < 4)
		{
			possib[*j][k] = arr[k] + 48;
			k++;
		}
		*j = *j + 1;
		return ;
	}
	i = index;
	while (i < 4)
	{
		swap (arr + index, arr + i);
		permute (index + 1, arr, possib, j);
		swap (arr + i, arr + index);
		i++;
	}
	return ;
}

//just swapping i and j
void	swap(int *i, int *j)
{
	int	temp;

	temp = *i;
	*i = *j;
	*j = temp;
}
