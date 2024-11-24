/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:30:07 by ygille            #+#    #+#             */
/*   Updated: 2024/09/16 10:46:50 by ygille           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dlen;
	unsigned int	spos;

	spos = 0;
	dlen = ft_strlen(dest);
	while (src[spos] && spos < nb)
	{
		dest[spos + dlen] = src[spos];
		spos++;
	}
	dest[spos + dlen] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	a[30] = "WAW";
	char	b[] = "test";

	printf("%s\n%s\n", a, b);
	printf("%s\n", ft_strncat(a, b, 2));

	char	a2[30] = "WAW";
	char	b2[] = "test";

	printf("%s\n%s\n", a2, b2);
	printf("%s\n", strncat(a2, b2, 2));
}
*/
