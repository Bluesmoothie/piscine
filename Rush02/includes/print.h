/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:04:35 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 19:39:26 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

void	print_thousand(char *input, char **values);
void	print_hundred(char *input, char **values);
void	print_ten(char *input, char **values);
void	print_unit(char *input, char **values);
void	print_zero(char **values);
#endif