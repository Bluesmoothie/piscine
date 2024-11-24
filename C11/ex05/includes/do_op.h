/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:47:56 by ygille            #+#    #+#             */
/*   Updated: 2024/10/03 11:57:57 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	do_op(int numa, int numb, char *op);
void	op_add(int numa, int numb);
void	op_sub(int numa, int numb);
void	op_div(int numa, int numb);
void	op_mul(int numa, int numb);
void	op_mod(int numa, int numb);
#endif