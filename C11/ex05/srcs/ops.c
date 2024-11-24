/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:52:55 by ygille            #+#    #+#             */
/*   Updated: 2024/10/03 18:34:43 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

void	op_add(int numa, int numb)
{
	ft_putnbr(numa + numb);
	write (1, "\n", 1);
	return ;
}

void	op_sub(int numa, int numb)
{
	ft_putnbr(numa - numb);
	write (1, "\n", 1);
	return ;
}

void	op_div(int numa, int numb)
{
	if (numb == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return ;
	}
	ft_putnbr(numa / numb);
	write (1, "\n", 1);
	return ;
}

void	op_mul(int numa, int numb)
{
	ft_putnbr(numa * numb);
	write (1, "\n", 1);
	return ;
}

void	op_mod(int numa, int numb)
{
	if (numb == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return ;
	}
	ft_putnbr(numa % numb);
	write (1, "\n", 1);
	return ;
}
