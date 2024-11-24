/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:09:42 by ygille            #+#    #+#             */
/*   Updated: 2024/09/11 21:17:17 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;
	int	bb;

	aa = *a;
	bb = *b;
	*a = aa / bb;
	*b = aa % bb;
}

/*
void	main(void)
{
	int a = 10;
	int b = 3;
	int *aptr = &a;
	int	*bptr = &b;

	ft_ultimate_div_mod(aptr,bptr);
	printf("%d  %d",a,b);
}
*/
