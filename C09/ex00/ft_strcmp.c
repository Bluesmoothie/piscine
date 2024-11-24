/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:52:36 by ygille            #+#    #+#             */
/*   Updated: 2024/09/15 12:47:35 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while ((s1[pos] && s2[pos]) && s1[pos] == s2[pos])
		pos++;
	return (s1[pos] - s2[pos]);
}

/*
int	main(void)
{
	char	a[] = "ABAfkerbfj";
	char	b[] = "ABAAAAAAA";

	printf("%d", strcmp(a, b));
	printf("%d", ft_strcmp(a, b));
	return	(0);
}
*/
