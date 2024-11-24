/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:27:31 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 19:18:44 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/rush_02.h"
#include "../includes/parse.h"

/*
Entry point, catch errors and print corresponding messages
*/
int	main(int argc, char *argv[])
{
	if (argc != 2 && argc != 3)
		return (error(-1));
	if (argc == 2)
		return (error(parse_dict(argv[1], DICT)));
	if (argc == 3)
		return (error(parse_dict(argv[1], argv[2])));
	return (0);
}

/*
Print an error depending on code
-1 : undefined error
-2 : dict error
*/
int	error(int code)
{
	if (code == -1)
		write (2, "Error\n", 6);
	if (code == -2)
		write (2, "Dict Error\n", 11);
	return (code);
}
