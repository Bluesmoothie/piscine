/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:03:10 by ygille            #+#    #+#             */
/*   Updated: 2024/09/12 12:48:59 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

/*
int main(void)
{
	int	num;
	char numc;

    char str[] = {'t', 'e', 's', 't', '\0'};
    num = ft_strlen(str);
	numc = num + 48;
	write (1, &numc, 1);
    return 0;
}
*/
