/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:56:41 by ygille            #+#    #+#             */
/*   Updated: 2024/09/15 19:49:05 by ygille           ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	dlen;
	int	spos;

	spos = 0;
	dlen = ft_strlen(dest);
	while (src[spos])
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
	char	a[30] = "";
	char	b[] = "hohoho";

	printf("%s\n%s\n", a, b);
	printf("%s\n", ft_strcat(a, b));

	char	a2[30] = "";
	char	b2[] = "hohoho";

	printf("%s\n%s\n", a2, b2);
	printf("%s\n", strcat(a2, b2));
}
*/
