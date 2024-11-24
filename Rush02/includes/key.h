/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:08:05 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 17:29:49 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEY_H
# define KEY_H
# include <stdlib.h>

char	**ft_only_key(char **tab);
char	**only_big_key(char **tab);
void	big_key_generator(char *key, int nbr_zero);
#endif