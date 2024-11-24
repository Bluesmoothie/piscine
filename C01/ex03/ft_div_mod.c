/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:56:11 by ygille            #+#    #+#             */
/*   Updated: 2024/09/11 21:06:37 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
void	main(void)
{
	char p = 'p';
	char o = 'o';
	char n = 'n'; 

	int div;
	int	mod;
	int	*divptr = &div;
	int	*modptr = &mod;

	ft_div_mod(10,3,divptr,modptr);

	write(1,&p,1);

	if(div == 3 && mod == 1)
		write(1,&o,1);
	else
		write(1,&n,1);
}
*/
