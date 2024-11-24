/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:43:59 by ygille            #+#    #+#             */
/*   Updated: 2024/10/03 11:57:42 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

int	main(int argc, char *argv[])
{
	int	numa;
	int	numb;

	if (argc != 4)
		return (-1);
	numa = ft_atoi(argv[1]);
	numb = ft_atoi(argv[3]);
	if (ft_strlen(argv[2]) != 1)
		write (1, "0", 1);
	else
		do_op(numa, numb, argv[2]);
	return (0);
}

void	do_op(int numa, int numb, char *op)
{
	if (op[0] == '+')
		op_add(numa, numb);
	else if (op[0] == '-')
		op_sub(numa, numb);
	else if (op[0] == '/')
		op_div(numa, numb);
	else if (op[0] == '*')
		op_mul(numa, numb);
	else if (op[0] == '%')
		op_mod(numa, numb);
	else
		write(1, "0\n", 2);
	return ;
}
