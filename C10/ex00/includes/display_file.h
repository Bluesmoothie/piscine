/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:08:06 by ygille            #+#    #+#             */
/*   Updated: 2024/10/03 15:18:26 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

int	print(char *file);
int	print_file(int fd);
#endif