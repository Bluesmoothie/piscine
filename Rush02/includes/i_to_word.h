/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_to_word.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:51:02 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 19:26:06 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_TO_WORD_H
# define I_TO_WORD_H

int		int_to_word(char **values, char *input);
int		escape_start(char *input);
void	mod_three(char *input, char **values, int i);
#endif