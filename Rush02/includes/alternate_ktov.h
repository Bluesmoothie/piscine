/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alternate_ktov.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 14:08:04 by ygille            #+#    #+#             */
/*   Updated: 2024/09/29 14:08:58 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALTERNATE_KTOV_H
# define ALTERNATE_KTOV_H

int	keys_to_values(char **keys, char **values, char *dict);
int	search_replace(char *key, char *value, char *dict);
int	replace(char *dict, char *value);
#endif