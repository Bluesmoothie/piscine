/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:46:34 by ygille            #+#    #+#             */
/*   Updated: 2024/09/17 11:21:14 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	if (n == 0)
		return (0);
	while (((s1[pos] && s2[pos]) && s1[pos] == s2[pos]) && pos + 1 < n)
		pos++;
	return (s1[pos] - s2[pos]);
}

/*
int	main(void)
{
	char	a[] = "ABAfkerbfj";
	char	b[] = "ABAAAAAAA";
	int	s = 3;

	printf("%d\n", strncmp(a, b, s));
	printf("%d\n", ft_strncmp(a, b, s));
	return	(0);
}
*/
