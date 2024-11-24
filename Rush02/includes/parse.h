/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:53:49 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 12:52:41 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

int		parse_dict(char *value, char *dict);
int		parse_value(char *value);
char	**alloc_tab(char **tab);
void	free_tab(char **tab);
#endif