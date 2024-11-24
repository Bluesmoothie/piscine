/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:22:59 by ygille            #+#    #+#             */
/*   Updated: 2024/10/03 15:30:26 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/display_file.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write (2, "File name missing.\n", 19);
	else if (argc > 2)
		write (2, "Too many arguments.\n", 20);
	else
		if(print(argv[1]))
			write (2, "Cannot read file.\n", 18);
	return (0);
}

int	print(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (1);
	print_file(fd);
	return (0);
}

int	print_file(int fd)
{
	int		err;
	char	to_print;

	err = 1;
	while (err > 0)
	{
		err = read(fd, &to_print, 1);
		if (err > 0)
			write (1, &to_print, 1);
	}
	close (fd);
	return (0);
}