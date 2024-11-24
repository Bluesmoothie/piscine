/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:35:33 by ygille            #+#    #+#             */
/*   Updated: 2024/09/22 17:04:41 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		count_words(char *str, int *maxval);
int		bruteforce(char answer[4][4], char *input);
void	print_tab(char tab[4][4]);
int		errors(int code);

/*
verify the input and catch errors if found
if not, try to get the answer with bruteforce and
print if an answer is found
*/
int	main(int argc, char *argv[])
{
	int		max;
	int		count;
	char	tab[4][4];

	if (argc == 1)
		return (errors(-1));
	if (argc > 2)
		return (errors(-2));
	count = count_words(argv[1], &max);
	if (count == -1 || max > 4)
		return (errors(-3));
	if (count != 16)
		return (errors(-4));
	if (bruteforce(tab, argv[1]))
	{
		print_tab(tab);
		return (0);
	}
	else
	{
		return (errors(-42));
	}
}

//print errors messages
int	errors(int code)
{
	write (2, "Error: ", 7);
	if (code == -1)
		write (2, "too few arguments\n", 19);
	if (code == -2)
		write (2, "too much arguments\n", 20);
	if (code == -3 || code == -4)
		write (2, "invalid input\n", 14);
	if (code == -42)
	{
		write (2, "Sorry, I didn't find any solutions\n", 35);
		return (code);
	}
	write (2, "Program usage: rush-01 \"x x x x x x x x", 40);
	write (2, " x x x x x x x x\" with x between 1 and 4", 40);
	return (code);
}
